/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed Nov 26 10:22:15 2014
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QScrollArea>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <sw_paintImageWidget.h>
#include "sw_glviewer.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *loadDataAction;
    QAction *fileSaveAction;
    QAction *fileSaveAsAction;
    QAction *exitAction;
    QAction *selectPointsAction;
    QAction *setBackGroundAction;
    QAction *helpAboutAction;
    QAction *resetAction;
    QAction *extractPlaneBoundaryAction;
    QAction *displayAllPlanesAction;
    QAction *displaySinglePlaneAction;
    QAction *displayAllPolygonsAction;
    QAction *displaySinglePolygonAction;
    QAction *displayPointCloudAction;
    QAction *exportOFFFileAction;
    QAction *delaunary_TriangulationAction;
    QAction *displayDelaunaryTriangulationAction;
    QAction *texture_MappingAction;
    QAction *loadImageAction;
    QAction *loadProjectionMatrixAction;
    QAction *displayPolygonOnImageAction;
    QAction *triangulationBrokenAction;
    QAction *displayAxisAction;
    QAction *displayGridAction;
    QAction *attitudeAdjustmentAction;
    QAction *exportProjectionMatrixFileAction;
    QAction *structureOptimizationAction;
    QAction *InconsistentDetectionAction;
    QAction *RANSACFittingPlanesAction;
    QAction *ExportPlaneInfromationAction;
    QAction *LoadPlaneInformationAction;
    QAction *TestPhotoConsistencyAction;
    QAction *LoadVisibilityAction;
    QAction *LoadCameraInformationAction;
    QAction *ExportCameraInformationAction;
    QAction *loadPointCloudFromXMLAction;
    QAction *savePointCloudAsXMLAction;
    QAction *displayCamrerasAction;
    QAction *floorPlanReconstructionAction;
    QAction *SuperPixelsAction;
    QAction *loadModelAction;
    QAction *saveModelAction;
    QAction *displaySinglePlaneDTsAction;
    QAction *displayModelResultsAction;
    QAction *actionDisplay_Texture_Model;
    QAction *actionLoad_Texure_Model;
    QAction *actionSave_Texture_Model;
    QAction *actionDense_Points;
    QAction *actionVertices;
    QAction *actionWireFrame;
    QAction *actionFlat;
    QAction *actionTexture;
    QAction *savePointsAction;
    QAction *actionCameras;
    QAction *actionFloorPlanReconstuction;
    QAction *actionInconsistent_Region;
    QAction *actionAll_Planes_Triangulations;
    QAction *actionSingle_Plane_Triangulation;
    QAction *actionProjection;
    QAction *loadMeshAction;
    QAction *saveMeshAction;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    SW::GLViewer *viewer;
    QScrollArea *imageScrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout;
    QListWidget *imageListWidget;
    QMenuBar *menubar;
    QMenu *fileMenu;
    QMenu *editMenu;
    QMenu *settingMenu;
    QMenu *displayMenu;
    QMenu *helpMenu;
    QMenu *menuDebug;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;
    QToolBar *toolBar_3;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QScrollArea *planeLsitScrollArea;
    QWidget *planeScrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QListWidget *planeListWidget;
    SW::PaintImageWidget *paintImageWidget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(1123, 751);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(0, 500));
        MainWindow->setMaximumSize(QSize(16777215, 1011));
        loadDataAction = new QAction(MainWindow);
        loadDataAction->setObjectName(QString::fromUtf8("loadDataAction"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/fileopen"), QSize(), QIcon::Normal, QIcon::Off);
        loadDataAction->setIcon(icon);
        fileSaveAction = new QAction(MainWindow);
        fileSaveAction->setObjectName(QString::fromUtf8("fileSaveAction"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/filesave"), QSize(), QIcon::Normal, QIcon::Off);
        fileSaveAction->setIcon(icon1);
        fileSaveAsAction = new QAction(MainWindow);
        fileSaveAsAction->setObjectName(QString::fromUtf8("fileSaveAsAction"));
        exitAction = new QAction(MainWindow);
        exitAction->setObjectName(QString::fromUtf8("exitAction"));
        selectPointsAction = new QAction(MainWindow);
        selectPointsAction->setObjectName(QString::fromUtf8("selectPointsAction"));
        selectPointsAction->setCheckable(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/pointsSlection.png"), QSize(), QIcon::Normal, QIcon::Off);
        selectPointsAction->setIcon(icon2);
        setBackGroundAction = new QAction(MainWindow);
        setBackGroundAction->setObjectName(QString::fromUtf8("setBackGroundAction"));
        helpAboutAction = new QAction(MainWindow);
        helpAboutAction->setObjectName(QString::fromUtf8("helpAboutAction"));
        resetAction = new QAction(MainWindow);
        resetAction->setObjectName(QString::fromUtf8("resetAction"));
        extractPlaneBoundaryAction = new QAction(MainWindow);
        extractPlaneBoundaryAction->setObjectName(QString::fromUtf8("extractPlaneBoundaryAction"));
        extractPlaneBoundaryAction->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/boundaryExtraction.png"), QSize(), QIcon::Normal, QIcon::Off);
        extractPlaneBoundaryAction->setIcon(icon3);
        displayAllPlanesAction = new QAction(MainWindow);
        displayAllPlanesAction->setObjectName(QString::fromUtf8("displayAllPlanesAction"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/showALLPlanes.png"), QSize(), QIcon::Normal, QIcon::Off);
        displayAllPlanesAction->setIcon(icon4);
        displaySinglePlaneAction = new QAction(MainWindow);
        displaySinglePlaneAction->setObjectName(QString::fromUtf8("displaySinglePlaneAction"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/showSinglePlane.png"), QSize(), QIcon::Normal, QIcon::Off);
        displaySinglePlaneAction->setIcon(icon5);
        displayAllPolygonsAction = new QAction(MainWindow);
        displayAllPolygonsAction->setObjectName(QString::fromUtf8("displayAllPolygonsAction"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/showAllPolygons.png"), QSize(), QIcon::Normal, QIcon::Off);
        displayAllPolygonsAction->setIcon(icon6);
        displaySinglePolygonAction = new QAction(MainWindow);
        displaySinglePolygonAction->setObjectName(QString::fromUtf8("displaySinglePolygonAction"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/showSinglePolygon.png"), QSize(), QIcon::Normal, QIcon::Off);
        displaySinglePolygonAction->setIcon(icon7);
        displayPointCloudAction = new QAction(MainWindow);
        displayPointCloudAction->setObjectName(QString::fromUtf8("displayPointCloudAction"));
        displayPointCloudAction->setCheckable(true);
        displayPointCloudAction->setChecked(true);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/MeshLive1.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        displayPointCloudAction->setIcon(icon8);
        exportOFFFileAction = new QAction(MainWindow);
        exportOFFFileAction->setObjectName(QString::fromUtf8("exportOFFFileAction"));
        delaunary_TriangulationAction = new QAction(MainWindow);
        delaunary_TriangulationAction->setObjectName(QString::fromUtf8("delaunary_TriangulationAction"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/flat.png"), QSize(), QIcon::Normal, QIcon::Off);
        delaunary_TriangulationAction->setIcon(icon9);
        displayDelaunaryTriangulationAction = new QAction(MainWindow);
        displayDelaunaryTriangulationAction->setObjectName(QString::fromUtf8("displayDelaunaryTriangulationAction"));
        displayDelaunaryTriangulationAction->setCheckable(true);
        displayDelaunaryTriangulationAction->setChecked(false);
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/empty_sphere.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        displayDelaunaryTriangulationAction->setIcon(icon10);
        texture_MappingAction = new QAction(MainWindow);
        texture_MappingAction->setObjectName(QString::fromUtf8("texture_MappingAction"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/textureMapping.png"), QSize(), QIcon::Normal, QIcon::Off);
        texture_MappingAction->setIcon(icon11);
        loadImageAction = new QAction(MainWindow);
        loadImageAction->setObjectName(QString::fromUtf8("loadImageAction"));
        loadProjectionMatrixAction = new QAction(MainWindow);
        loadProjectionMatrixAction->setObjectName(QString::fromUtf8("loadProjectionMatrixAction"));
        displayPolygonOnImageAction = new QAction(MainWindow);
        displayPolygonOnImageAction->setObjectName(QString::fromUtf8("displayPolygonOnImageAction"));
        displayPolygonOnImageAction->setCheckable(true);
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/show_facet.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        displayPolygonOnImageAction->setIcon(icon12);
        triangulationBrokenAction = new QAction(MainWindow);
        triangulationBrokenAction->setObjectName(QString::fromUtf8("triangulationBrokenAction"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/triangulation_devide.png"), QSize(), QIcon::Normal, QIcon::Off);
        triangulationBrokenAction->setIcon(icon13);
        displayAxisAction = new QAction(MainWindow);
        displayAxisAction->setObjectName(QString::fromUtf8("displayAxisAction"));
        displayAxisAction->setCheckable(true);
        displayAxisAction->setChecked(true);
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/axis.png"), QSize(), QIcon::Normal, QIcon::Off);
        displayAxisAction->setIcon(icon14);
        displayGridAction = new QAction(MainWindow);
        displayGridAction->setObjectName(QString::fromUtf8("displayGridAction"));
        displayGridAction->setCheckable(true);
        displayGridAction->setChecked(false);
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/grid.png"), QSize(), QIcon::Normal, QIcon::Off);
        displayGridAction->setIcon(icon15);
        attitudeAdjustmentAction = new QAction(MainWindow);
        attitudeAdjustmentAction->setObjectName(QString::fromUtf8("attitudeAdjustmentAction"));
        attitudeAdjustmentAction->setCheckable(true);
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/qtlogo.xpm"), QSize(), QIcon::Normal, QIcon::Off);
        attitudeAdjustmentAction->setIcon(icon16);
        exportProjectionMatrixFileAction = new QAction(MainWindow);
        exportProjectionMatrixFileAction->setObjectName(QString::fromUtf8("exportProjectionMatrixFileAction"));
        structureOptimizationAction = new QAction(MainWindow);
        structureOptimizationAction->setObjectName(QString::fromUtf8("structureOptimizationAction"));
        structureOptimizationAction->setCheckable(true);
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/structureOptimization.png"), QSize(), QIcon::Normal, QIcon::Off);
        structureOptimizationAction->setIcon(icon17);
        InconsistentDetectionAction = new QAction(MainWindow);
        InconsistentDetectionAction->setObjectName(QString::fromUtf8("InconsistentDetectionAction"));
        InconsistentDetectionAction->setCheckable(true);
        RANSACFittingPlanesAction = new QAction(MainWindow);
        RANSACFittingPlanesAction->setObjectName(QString::fromUtf8("RANSACFittingPlanesAction"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/\351\241\271\347\233\25618.ico"), QSize(), QIcon::Normal, QIcon::Off);
        RANSACFittingPlanesAction->setIcon(icon18);
        ExportPlaneInfromationAction = new QAction(MainWindow);
        ExportPlaneInfromationAction->setObjectName(QString::fromUtf8("ExportPlaneInfromationAction"));
        LoadPlaneInformationAction = new QAction(MainWindow);
        LoadPlaneInformationAction->setObjectName(QString::fromUtf8("LoadPlaneInformationAction"));
        TestPhotoConsistencyAction = new QAction(MainWindow);
        TestPhotoConsistencyAction->setObjectName(QString::fromUtf8("TestPhotoConsistencyAction"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/preferences.jpeg"), QSize(), QIcon::Normal, QIcon::Off);
        TestPhotoConsistencyAction->setIcon(icon19);
        LoadVisibilityAction = new QAction(MainWindow);
        LoadVisibilityAction->setObjectName(QString::fromUtf8("LoadVisibilityAction"));
        LoadCameraInformationAction = new QAction(MainWindow);
        LoadCameraInformationAction->setObjectName(QString::fromUtf8("LoadCameraInformationAction"));
        ExportCameraInformationAction = new QAction(MainWindow);
        ExportCameraInformationAction->setObjectName(QString::fromUtf8("ExportCameraInformationAction"));
        loadPointCloudFromXMLAction = new QAction(MainWindow);
        loadPointCloudFromXMLAction->setObjectName(QString::fromUtf8("loadPointCloudFromXMLAction"));
        savePointCloudAsXMLAction = new QAction(MainWindow);
        savePointCloudAsXMLAction->setObjectName(QString::fromUtf8("savePointCloudAsXMLAction"));
        displayCamrerasAction = new QAction(MainWindow);
        displayCamrerasAction->setObjectName(QString::fromUtf8("displayCamrerasAction"));
        displayCamrerasAction->setCheckable(true);
        displayCamrerasAction->setChecked(false);
        floorPlanReconstructionAction = new QAction(MainWindow);
        floorPlanReconstructionAction->setObjectName(QString::fromUtf8("floorPlanReconstructionAction"));
        floorPlanReconstructionAction->setCheckable(true);
        SuperPixelsAction = new QAction(MainWindow);
        SuperPixelsAction->setObjectName(QString::fromUtf8("SuperPixelsAction"));
        loadModelAction = new QAction(MainWindow);
        loadModelAction->setObjectName(QString::fromUtf8("loadModelAction"));
        saveModelAction = new QAction(MainWindow);
        saveModelAction->setObjectName(QString::fromUtf8("saveModelAction"));
        displaySinglePlaneDTsAction = new QAction(MainWindow);
        displaySinglePlaneDTsAction->setObjectName(QString::fromUtf8("displaySinglePlaneDTsAction"));
        displaySinglePlaneDTsAction->setCheckable(true);
        displayModelResultsAction = new QAction(MainWindow);
        displayModelResultsAction->setObjectName(QString::fromUtf8("displayModelResultsAction"));
        displayModelResultsAction->setCheckable(true);
        actionDisplay_Texture_Model = new QAction(MainWindow);
        actionDisplay_Texture_Model->setObjectName(QString::fromUtf8("actionDisplay_Texture_Model"));
        actionDisplay_Texture_Model->setCheckable(true);
        actionLoad_Texure_Model = new QAction(MainWindow);
        actionLoad_Texure_Model->setObjectName(QString::fromUtf8("actionLoad_Texure_Model"));
        actionSave_Texture_Model = new QAction(MainWindow);
        actionSave_Texture_Model->setObjectName(QString::fromUtf8("actionSave_Texture_Model"));
        actionDense_Points = new QAction(MainWindow);
        actionDense_Points->setObjectName(QString::fromUtf8("actionDense_Points"));
        actionDense_Points->setCheckable(true);
        actionDense_Points->setEnabled(false);
        actionVertices = new QAction(MainWindow);
        actionVertices->setObjectName(QString::fromUtf8("actionVertices"));
        actionVertices->setCheckable(true);
        actionVertices->setEnabled(false);
        actionWireFrame = new QAction(MainWindow);
        actionWireFrame->setObjectName(QString::fromUtf8("actionWireFrame"));
        actionWireFrame->setCheckable(true);
        actionWireFrame->setEnabled(false);
        actionFlat = new QAction(MainWindow);
        actionFlat->setObjectName(QString::fromUtf8("actionFlat"));
        actionFlat->setCheckable(true);
        actionFlat->setEnabled(false);
        actionTexture = new QAction(MainWindow);
        actionTexture->setObjectName(QString::fromUtf8("actionTexture"));
        actionTexture->setCheckable(true);
        actionTexture->setEnabled(false);
        savePointsAction = new QAction(MainWindow);
        savePointsAction->setObjectName(QString::fromUtf8("savePointsAction"));
        actionCameras = new QAction(MainWindow);
        actionCameras->setObjectName(QString::fromUtf8("actionCameras"));
        actionCameras->setCheckable(true);
        actionCameras->setEnabled(false);
        actionFloorPlanReconstuction = new QAction(MainWindow);
        actionFloorPlanReconstuction->setObjectName(QString::fromUtf8("actionFloorPlanReconstuction"));
        actionFloorPlanReconstuction->setCheckable(true);
        actionFloorPlanReconstuction->setEnabled(false);
        actionInconsistent_Region = new QAction(MainWindow);
        actionInconsistent_Region->setObjectName(QString::fromUtf8("actionInconsistent_Region"));
        actionInconsistent_Region->setCheckable(true);
        actionAll_Planes_Triangulations = new QAction(MainWindow);
        actionAll_Planes_Triangulations->setObjectName(QString::fromUtf8("actionAll_Planes_Triangulations"));
        actionAll_Planes_Triangulations->setCheckable(true);
        actionSingle_Plane_Triangulation = new QAction(MainWindow);
        actionSingle_Plane_Triangulation->setObjectName(QString::fromUtf8("actionSingle_Plane_Triangulation"));
        actionSingle_Plane_Triangulation->setCheckable(true);
        actionProjection = new QAction(MainWindow);
        actionProjection->setObjectName(QString::fromUtf8("actionProjection"));
        actionProjection->setCheckable(true);
        loadMeshAction = new QAction(MainWindow);
        loadMeshAction->setObjectName(QString::fromUtf8("loadMeshAction"));
        saveMeshAction = new QAction(MainWindow);
        saveMeshAction->setObjectName(QString::fromUtf8("saveMeshAction"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        centralwidget->setFocusPolicy(Qt::TabFocus);
        centralwidget->setAutoFillBackground(true);
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        viewer = new SW::GLViewer(centralwidget);
        viewer->setObjectName(QString::fromUtf8("viewer"));
        sizePolicy1.setHeightForWidth(viewer->sizePolicy().hasHeightForWidth());
        viewer->setSizePolicy(sizePolicy1);
        viewer->setMinimumSize(QSize(330, 0));
        //viewer->setFrameShape(QFrame::StyledPanel);
        //viewer->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(viewer);

        imageScrollArea = new QScrollArea(centralwidget);
        imageScrollArea->setObjectName(QString::fromUtf8("imageScrollArea"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(imageScrollArea->sizePolicy().hasHeightForWidth());
        imageScrollArea->setSizePolicy(sizePolicy2);
        imageScrollArea->setFrameShadow(QFrame::Plain);
        imageScrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        imageScrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        imageScrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 792, 118));
        horizontalLayout = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        imageListWidget = new QListWidget(scrollAreaWidgetContents);
        imageListWidget->setObjectName(QString::fromUtf8("imageListWidget"));
        sizePolicy.setHeightForWidth(imageListWidget->sizePolicy().hasHeightForWidth());
        imageListWidget->setSizePolicy(sizePolicy);
        imageListWidget->setMaximumSize(QSize(16777215, 100));
        imageListWidget->setAutoFillBackground(true);
        imageListWidget->setFrameShape(QFrame::HLine);
        imageListWidget->setFrameShadow(QFrame::Plain);
        imageListWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        imageListWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        imageListWidget->setAutoScrollMargin(7);
        imageListWidget->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        imageListWidget->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        imageListWidget->setFlow(QListView::LeftToRight);
        imageListWidget->setResizeMode(QListView::Adjust);

        horizontalLayout->addWidget(imageListWidget);

        imageScrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(imageScrollArea);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1123, 25));
        fileMenu = new QMenu(menubar);
        fileMenu->setObjectName(QString::fromUtf8("fileMenu"));
        editMenu = new QMenu(menubar);
        editMenu->setObjectName(QString::fromUtf8("editMenu"));
        settingMenu = new QMenu(menubar);
        settingMenu->setObjectName(QString::fromUtf8("settingMenu"));
        displayMenu = new QMenu(menubar);
        displayMenu->setObjectName(QString::fromUtf8("displayMenu"));
        helpMenu = new QMenu(menubar);
        helpMenu->setObjectName(QString::fromUtf8("helpMenu"));
        menuDebug = new QMenu(menubar);
        menuDebug->setObjectName(QString::fromUtf8("menuDebug"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setEnabled(true);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(MainWindow);
        toolBar_2->setObjectName(QString::fromUtf8("toolBar_2"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_2);
        toolBar_3 = new QToolBar(MainWindow);
        toolBar_3->setObjectName(QString::fromUtf8("toolBar_3"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar_3);
        dockWidget = new QDockWidget(MainWindow);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(dockWidget->sizePolicy().hasHeightForWidth());
        dockWidget->setSizePolicy(sizePolicy3);
        dockWidget->setMinimumSize(QSize(310, 1099));
        dockWidget->setMaximumSize(QSize(310, 524287));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout_3 = new QVBoxLayout(dockWidgetContents);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        planeLsitScrollArea = new QScrollArea(dockWidgetContents);
        planeLsitScrollArea->setObjectName(QString::fromUtf8("planeLsitScrollArea"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(planeLsitScrollArea->sizePolicy().hasHeightForWidth());
        planeLsitScrollArea->setSizePolicy(sizePolicy4);
        planeLsitScrollArea->setMinimumSize(QSize(300, 650));
        planeLsitScrollArea->setMaximumSize(QSize(16777215, 650));
        planeLsitScrollArea->setWidgetResizable(true);
        planeScrollAreaWidgetContents = new QWidget();
        planeScrollAreaWidgetContents->setObjectName(QString::fromUtf8("planeScrollAreaWidgetContents"));
        planeScrollAreaWidgetContents->setGeometry(QRect(0, 0, 298, 648));
        verticalLayout_2 = new QVBoxLayout(planeScrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        planeListWidget = new QListWidget(planeScrollAreaWidgetContents);
        planeListWidget->setObjectName(QString::fromUtf8("planeListWidget"));
        planeListWidget->setAutoFillBackground(true);

        verticalLayout_2->addWidget(planeListWidget);

        planeLsitScrollArea->setWidget(planeScrollAreaWidgetContents);

        verticalLayout_3->addWidget(planeLsitScrollArea);

        paintImageWidget = new SW::PaintImageWidget(dockWidgetContents);
        paintImageWidget->setObjectName(QString::fromUtf8("paintImageWidget"));
        paintImageWidget->setMinimumSize(QSize(300, 350));
        paintImageWidget->setMaximumSize(QSize(300, 350));

        verticalLayout_3->addWidget(paintImageWidget);

        dockWidget->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);

        menubar->addAction(fileMenu->menuAction());
        menubar->addAction(editMenu->menuAction());
        menubar->addAction(settingMenu->menuAction());
        menubar->addAction(displayMenu->menuAction());
        menubar->addAction(menuDebug->menuAction());
        menubar->addAction(helpMenu->menuAction());
        fileMenu->addAction(loadDataAction);
        fileMenu->addAction(savePointsAction);
        fileMenu->addAction(loadMeshAction);
        fileMenu->addAction(saveMeshAction);
        editMenu->addAction(actionFloorPlanReconstuction);
        displayMenu->addAction(actionDense_Points);
        displayMenu->addAction(actionVertices);
        displayMenu->addAction(actionWireFrame);
        displayMenu->addAction(actionFlat);
        displayMenu->addAction(actionTexture);
        displayMenu->addAction(actionCameras);
        displayMenu->addAction(actionAll_Planes_Triangulations);
        displayMenu->addAction(actionSingle_Plane_Triangulation);
        menuDebug->addAction(actionProjection);
        toolBar->addSeparator();
        toolBar->addSeparator();
        toolBar->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        loadDataAction->setText(QApplication::translate("MainWindow", "Load Data", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        loadDataAction->setToolTip(QApplication::translate("MainWindow", "Open a PLY file to Load point cloud.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        loadDataAction->setStatusTip(QApplication::translate("MainWindow", "Load point cloud from PLY file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        loadDataAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        fileSaveAction->setText(QApplication::translate("MainWindow", "Save", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        fileSaveAction->setToolTip(QApplication::translate("MainWindow", "Save a PLY file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        fileSaveAction->setStatusTip(QApplication::translate("MainWindow", "Save the current point cloud in the scene.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        fileSaveAction->setShortcut(QApplication::translate("MainWindow", "Shift+S", 0, QApplication::UnicodeUTF8));
        fileSaveAsAction->setText(QApplication::translate("MainWindow", "Save As", 0, QApplication::UnicodeUTF8));
        exitAction->setText(QApplication::translate("MainWindow", "Exit", 0, QApplication::UnicodeUTF8));
        exitAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        selectPointsAction->setText(QApplication::translate("MainWindow", "Select Points", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        selectPointsAction->setStatusTip(QApplication::translate("MainWindow", "Start selecting points by press the left button and draw a rectangle.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        selectPointsAction->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+S", 0, QApplication::UnicodeUTF8));
        setBackGroundAction->setText(QApplication::translate("MainWindow", "BackGround Color", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        setBackGroundAction->setToolTip(QApplication::translate("MainWindow", "set BackGround Color", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        helpAboutAction->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        resetAction->setText(QApplication::translate("MainWindow", "Reset", 0, QApplication::UnicodeUTF8));
        extractPlaneBoundaryAction->setText(QApplication::translate("MainWindow", "Extract Boundary", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        extractPlaneBoundaryAction->setStatusTip(QApplication::translate("MainWindow", "Extract ", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        displayAllPlanesAction->setText(QApplication::translate("MainWindow", "Display All Planes Points", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        displayAllPlanesAction->setStatusTip(QApplication::translate("MainWindow", "Display all the planes.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        displaySinglePlaneAction->setText(QApplication::translate("MainWindow", "Display Single Plane Points", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        displaySinglePlaneAction->setStatusTip(QApplication::translate("MainWindow", "Display single plane.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        displayAllPolygonsAction->setText(QApplication::translate("MainWindow", "Display All Polygons", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        displayAllPolygonsAction->setStatusTip(QApplication::translate("MainWindow", "Display all Polygons.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        displaySinglePolygonAction->setText(QApplication::translate("MainWindow", "Display  Single Polygon", 0, QApplication::UnicodeUTF8));
        displayPointCloudAction->setText(QApplication::translate("MainWindow", "Display Point Cloud", 0, QApplication::UnicodeUTF8));
        exportOFFFileAction->setText(QApplication::translate("MainWindow", "Export OFF File", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        exportOFFFileAction->setStatusTip(QApplication::translate("MainWindow", "Not implemented!", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        delaunary_TriangulationAction->setText(QApplication::translate("MainWindow", "Delaunary Triangulation", 0, QApplication::UnicodeUTF8));
        displayDelaunaryTriangulationAction->setText(QApplication::translate("MainWindow", "Display All Plane Delaunary Triangulation", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        displayDelaunaryTriangulationAction->setStatusTip(QApplication::translate("MainWindow", "Display Delaunary Triangulation", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        displayDelaunaryTriangulationAction->setWhatsThis(QApplication::translate("MainWindow", "Seleting Points", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        texture_MappingAction->setText(QApplication::translate("MainWindow", "Texture&Mapping", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        texture_MappingAction->setStatusTip(QApplication::translate("MainWindow", "Texture Mapping", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        loadImageAction->setText(QApplication::translate("MainWindow", "Load Images", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        loadImageAction->setStatusTip(QApplication::translate("MainWindow", "Load texture images", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        loadProjectionMatrixAction->setText(QApplication::translate("MainWindow", "Load Projection Matrix", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        loadProjectionMatrixAction->setStatusTip(QApplication::translate("MainWindow", "Load camera projection matrix", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        displayPolygonOnImageAction->setText(QApplication::translate("MainWindow", "Display Polygon on Image", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        displayPolygonOnImageAction->setStatusTip(QApplication::translate("MainWindow", "Polygons projection on image. (Region in cyan rectangle is the valid texture region.)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        triangulationBrokenAction->setText(QApplication::translate("MainWindow", "Triangulation Broken", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        triangulationBrokenAction->setWhatsThis(QApplication::translate("MainWindow", "Action to broke a large triangulation in to some small ones", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        displayAxisAction->setText(QApplication::translate("MainWindow", "Display World Axis", 0, QApplication::UnicodeUTF8));
        displayGridAction->setText(QApplication::translate("MainWindow", "Display Grid in the XZ Plane", 0, QApplication::UnicodeUTF8));
        attitudeAdjustmentAction->setText(QApplication::translate("MainWindow", "Attitude Adjustment", 0, QApplication::UnicodeUTF8));
        exportProjectionMatrixFileAction->setText(QApplication::translate("MainWindow", "Export Projection Matrix File", 0, QApplication::UnicodeUTF8));
        structureOptimizationAction->setText(QApplication::translate("MainWindow", "structureOptimization", 0, QApplication::UnicodeUTF8));
        InconsistentDetectionAction->setText(QApplication::translate("MainWindow", "Inconsistent Region Detection", 0, QApplication::UnicodeUTF8));
        RANSACFittingPlanesAction->setText(QApplication::translate("MainWindow", "RANSAC Fitting Planes", 0, QApplication::UnicodeUTF8));
        ExportPlaneInfromationAction->setText(QApplication::translate("MainWindow", "Export Plane Infromation", 0, QApplication::UnicodeUTF8));
        LoadPlaneInformationAction->setText(QApplication::translate("MainWindow", "Load Plane Information", 0, QApplication::UnicodeUTF8));
        TestPhotoConsistencyAction->setText(QApplication::translate("MainWindow", "TestPhotoConsistency", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        TestPhotoConsistencyAction->setToolTip(QApplication::translate("MainWindow", "TestPhotoConsistency", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        LoadVisibilityAction->setText(QApplication::translate("MainWindow", "Load Visibility", 0, QApplication::UnicodeUTF8));
        LoadCameraInformationAction->setText(QApplication::translate("MainWindow", "Load Camera Information", 0, QApplication::UnicodeUTF8));
        ExportCameraInformationAction->setText(QApplication::translate("MainWindow", "Export Camera Information", 0, QApplication::UnicodeUTF8));
        loadPointCloudFromXMLAction->setText(QApplication::translate("MainWindow", "Load Point Cloud From XML", 0, QApplication::UnicodeUTF8));
        savePointCloudAsXMLAction->setText(QApplication::translate("MainWindow", "Save Point Cloud As XML", 0, QApplication::UnicodeUTF8));
        displayCamrerasAction->setText(QApplication::translate("MainWindow", "Display Camreras", 0, QApplication::UnicodeUTF8));
        floorPlanReconstructionAction->setText(QApplication::translate("MainWindow", "Floor Plan Reconstruction", 0, QApplication::UnicodeUTF8));
        SuperPixelsAction->setText(QApplication::translate("MainWindow", "SuperPixels", 0, QApplication::UnicodeUTF8));
        loadModelAction->setText(QApplication::translate("MainWindow", "Load Model From OFF", 0, QApplication::UnicodeUTF8));
        saveModelAction->setText(QApplication::translate("MainWindow", "Save Model As", 0, QApplication::UnicodeUTF8));
        displaySinglePlaneDTsAction->setText(QApplication::translate("MainWindow", "Display Single Plane Delaunary Triangulation", 0, QApplication::UnicodeUTF8));
        displayModelResultsAction->setText(QApplication::translate("MainWindow", "Display Model Results", 0, QApplication::UnicodeUTF8));
        actionDisplay_Texture_Model->setText(QApplication::translate("MainWindow", "Display Texture Model", 0, QApplication::UnicodeUTF8));
        actionLoad_Texure_Model->setText(QApplication::translate("MainWindow", "Load Texure Model", 0, QApplication::UnicodeUTF8));
        actionSave_Texture_Model->setText(QApplication::translate("MainWindow", "Save Texture Model", 0, QApplication::UnicodeUTF8));
        actionDense_Points->setText(QApplication::translate("MainWindow", "Dense Points", 0, QApplication::UnicodeUTF8));
        actionVertices->setText(QApplication::translate("MainWindow", "Vertices", 0, QApplication::UnicodeUTF8));
        actionWireFrame->setText(QApplication::translate("MainWindow", "WireFrame", 0, QApplication::UnicodeUTF8));
        actionFlat->setText(QApplication::translate("MainWindow", "Flat", 0, QApplication::UnicodeUTF8));
        actionTexture->setText(QApplication::translate("MainWindow", "Texture", 0, QApplication::UnicodeUTF8));
        savePointsAction->setText(QApplication::translate("MainWindow", "Save Points", 0, QApplication::UnicodeUTF8));
        actionCameras->setText(QApplication::translate("MainWindow", "Cameras", 0, QApplication::UnicodeUTF8));
        actionFloorPlanReconstuction->setText(QApplication::translate("MainWindow", "FloorPlan Reconstuction", 0, QApplication::UnicodeUTF8));
        actionInconsistent_Region->setText(QApplication::translate("MainWindow", "Inconsistent Region", 0, QApplication::UnicodeUTF8));
        actionAll_Planes_Triangulations->setText(QApplication::translate("MainWindow", "All Planes Triangulations", 0, QApplication::UnicodeUTF8));
        actionSingle_Plane_Triangulation->setText(QApplication::translate("MainWindow", "Single Plane Triangulation", 0, QApplication::UnicodeUTF8));
        actionProjection->setText(QApplication::translate("MainWindow", "Projection  ", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionProjection->setToolTip(QApplication::translate("MainWindow", "Projection mesh of a plane3D  onto image", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        loadMeshAction->setText(QApplication::translate("MainWindow", "Load Mesh", 0, QApplication::UnicodeUTF8));
        saveMeshAction->setText(QApplication::translate("MainWindow", "Save Mesh", 0, QApplication::UnicodeUTF8));
        fileMenu->setTitle(QApplication::translate("MainWindow", "&File", 0, QApplication::UnicodeUTF8));
        editMenu->setTitle(QApplication::translate("MainWindow", "&Edit", 0, QApplication::UnicodeUTF8));
        settingMenu->setTitle(QApplication::translate("MainWindow", "&Setting", 0, QApplication::UnicodeUTF8));
        displayMenu->setTitle(QApplication::translate("MainWindow", "&Display", 0, QApplication::UnicodeUTF8));
        helpMenu->setTitle(QApplication::translate("MainWindow", "&Help", 0, QApplication::UnicodeUTF8));
        menuDebug->setTitle(QApplication::translate("MainWindow", "Debug", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        toolBar->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        toolBar_2->setWindowTitle(QApplication::translate("MainWindow", "toolBar_2", 0, QApplication::UnicodeUTF8));
        toolBar_3->setWindowTitle(QApplication::translate("MainWindow", "toolBar_3", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
