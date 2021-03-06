#include"sw_alpha_expansion.h"

#define VAR_ACTIVE     ((Energy::Var)0)
#define IS_VAR(var) (var >(Energy::Var) 1)
#define VALUE0 0
#define VALUE1 1

/////////////////////////////////////////ERROR_FUNCTION/////////////////////////////////////////
void error_function(char *msg)
{
    //fprintf(stderr, "%s\n", msg);
    exit(1);
}


//////////////////////////////////////////COMPUTENERGY/////////////////////////////////////////
template< class T>
void alpha_expansion_base<T>:: computeEnergy()
{
  E_ = 0;

  // 数据项
  for(int i=0; i< sample_num_; i++)
  {
      E_ += data_term(i, labels_[i]);
  }

  // 平滑项
  for(int i=0; i< neighbrs_.size(); i++)
  {
      int xid = i;
      int xlabel = labels_[xid];

      for(int j=0; j< neighbrs_[i].size(); j++)
      {
          int yid = neighbrs_[i][j];
          int ylabel = labels_[yid];

          E_ += smooth_term(xid, yid, xlabel, ylabel);
      }
  }
}



//////////////////////////////////////////EXPANSION///////////////////////////////////////
template<class T>
double  alpha_expansion_base<T>:: expansion()
{
    Energy *e = new Energy (error_function);
    Energy::Var Var_p, Var_q;
    Energy::Var * variables = new Energy::Var[sample_num_];

    computeEnergy();
    double E_old = E_;

    int newl = alpha_;

    // data_term
    for(int i=0; i< sample_num_; i++)
    {
        int oldl = labels_[i];

        double E0 = data_term(i, oldl);
        double E1 = data_term(i, newl);

        if(oldl == newl)
        {
            variables[i] = VAR_ACTIVE;
            e->add_constant((Energy::Value) E0);
        }
        else{

            Var_p = e->add_variable();
            variables[i] = Var_p;

            e->add_term1(Var_p, E0, E1);
        }
    }

    // smooth term
    double E00, E01, E10, E11;
    for(int i=0; i< sample_num_; i++)
    {
        int xid = i;
        int oldl_x =  labels_[xid];

        Var_p = variables[i];

        for(int j=0; j< neighbrs_[i].size(); j++)
        {
            int yid = neighbrs_[i][j];
            int oldl_y = labels_[yid];

            Var_q = variables[yid];

            E00 = smooth_term(xid, yid, oldl_x, oldl_y);
            E01 = smooth_term(xid, yid, oldl_x, newl);
            E10 = smooth_term(xid, yid, newl, oldl_y);
            E11 = smooth_term(xid, yid, newl, newl);

            if(Var_p != VAR_ACTIVE)
            {
                if(Var_q != VAR_ACTIVE)
                {
                   e->add_term2( Var_p, Var_q, E00, E01, E10, E11);
                }
                else
                {
                   e->add_term1(Var_p, E01, E11);
                }
            }
            else
            {
                if(Var_q != VAR_ACTIVE)
                {
                   e->add_term1(Var_q, E10, E11);
                }
                else
                {}
            }
        }
    }

    double E_new = e->minimize();

    if(E_new < E_old)
    {
        for(int i=0; i< sample_num_; i++)
        {
            Var_p = variables[i];

            if(Var_p != VAR_ACTIVE&& e->get_var(Var_p) == VALUE1)
            {
                labels_[i] = newl;
            }
        }
    }

    return E_new;
}



///////////////////////////////////////////OPTIMIZATION//////////////////////////////////////////
template<class T>
void  alpha_expansion_base<T>::optimization()
{

    labels_.resize(input_.size(), 0);
    computeEnergy();
    double E = E_;
    int effect_num =  label_num_;

    cout<<"E-Start = " << (double)E <<endl;

    // alpha expansion
    for(int iterOuter = 0; iterOuter< max_iter_num_&&effect_num>0; iterOuter++)
    {
        cout<<iterOuter<<"  th iteration "<<endl;

        for(int iterInner = 0; iterInner< label_num_; iterInner++)
        {
            double E_old = E;
            setAlpha(iterInner);
            E = expansion();

            computeEnergy();
            double E_tmp = E_;
            if(abs(E_tmp-E)> 0.01)
            {
                cout<< "E and E_tmp are different! "<< " E: "<<E<< "  E_tmp:  "<< E_tmp<<endl;
            }

            if(abs(E_old - E)< 0.01 )
            {
                effect_num --;
            }
            else{
                effect_num = label_num_;
            }
            cout<<"E = "<< E<<endl;
        }
    }

}


template class alpha_expansion_base<Vec3>;
template class alpha_expansion_base<string>;


