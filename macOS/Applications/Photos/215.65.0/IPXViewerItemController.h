//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXViewController.h"

#import "IPXCanvasItemViewAXDelegate-Protocol.h"
#import "IPXViewerItemControllerDragDelegate-Protocol.h"
#import "IPXViewerLayoutItem-Protocol.h"
#import "IPXViewerOverlayDataSource-Protocol.h"
#import "NSDraggingSource-Protocol.h"

@class IPXCanvasItemView, IPXEditViewConfiguration, IPXReconnectManager, IPXViewerItemDragDropState, IPXViewerItemModel, NSEvent, NSMutableArray, NSString, NSView, PAItemController, PAItemViewController, PFDispatchQueue, RDVersion;
@protocol IPXViewerItemControllerAXDelegate, IPXViewerItemControllerDelegate;

@interface IPXViewerItemController : IPXViewController <IPXViewerOverlayDataSource, IPXCanvasItemViewAXDelegate, IPXViewerItemControllerDragDelegate, NSDraggingSource, IPXViewerLayoutItem>
{
    CDUnknownBlockType _readyHandler;
    PFDispatchQueue *_readyHandlerQueue;
    NSMutableArray *_overlays;
    IPXCanvasItemView *_canvasView;
    IPXReconnectManager *_reconnectManager;
    IPXViewerItemDragDropState *_dragDropState;
    BOOL _didAllowDraggingOnMouseDown;
    NSEvent *_mouseDownEvent;
    BOOL _ready;
    BOOL _showsAdjustmentsLoadingSpinner;
    BOOL _showsCloudPhotosDownloadProgress;
    BOOL _showsCloudPhotosErrorGlyph;
    BOOL _allowItemDrag;
    BOOL _isTransitioning;
    BOOL _editing;
    BOOL _tryToDownloadAgainAfterError;
    IPXViewerItemModel *_viewerItemModel;
    id <IPXViewerItemControllerDelegate> _delegate;
    id <IPXViewerItemControllerAXDelegate> _axDelegate;
    double _zoomValue;
    long long _renderMode;
    PAItemViewController *_itemViewController;
    struct CGPoint _panOffset;
}

+ (Class)viewClass;
@property BOOL tryToDownloadAgainAfterError; // @synthesize tryToDownloadAgainAfterError=_tryToDownloadAgainAfterError;
@property(readonly) PAItemViewController *itemViewController; // @synthesize itemViewController=_itemViewController;
@property(nonatomic) long long renderMode; // @synthesize renderMode=_renderMode;
@property(nonatomic) struct CGPoint panOffset; // @synthesize panOffset=_panOffset;
@property(nonatomic) BOOL editing; // @synthesize editing=_editing;
@property(nonatomic) double zoomValue; // @synthesize zoomValue=_zoomValue;
@property(nonatomic) BOOL isTransitioning; // @synthesize isTransitioning=_isTransitioning;
@property(nonatomic) BOOL allowItemDrag; // @synthesize allowItemDrag=_allowItemDrag;
@property(nonatomic) BOOL showsCloudPhotosErrorGlyph; // @synthesize showsCloudPhotosErrorGlyph=_showsCloudPhotosErrorGlyph;
@property(nonatomic) BOOL showsCloudPhotosDownloadProgress; // @synthesize showsCloudPhotosDownloadProgress=_showsCloudPhotosDownloadProgress;
@property(nonatomic) BOOL showsAdjustmentsLoadingSpinner; // @synthesize showsAdjustmentsLoadingSpinner=_showsAdjustmentsLoadingSpinner;
@property(nonatomic, setter=setAXDelegate:) __weak id <IPXViewerItemControllerAXDelegate> axDelegate; // @synthesize axDelegate=_axDelegate;
@property(readonly, getter=isReady) BOOL ready; // @synthesize ready=_ready;
@property(nonatomic) __weak id <IPXViewerItemControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IPXViewerItemModel *viewerItemModel; // @synthesize viewerItemModel=_viewerItemModel;
- (void).cxx_destruct;
- (id)_axOverlaysWithTransientUI;
- (BOOL)canvasItemViewAXPerformShowDefaultUI:(id)arg1;
- (BOOL)canvasItemViewAXPerformShowAlternateUI:(id)arg1;
- (BOOL)canvasItemViewAXSupportsTransientUI:(id)arg1;
- (BOOL)canvasItemViewAXPerformPress:(id)arg1;
- (void)flipVertical;
- (void)flipHorizontal;
- (void)rotateLeft;
- (void)rotateRight;
- (id)selectedVersionsForOverlay:(id)arg1;
- (id)primarySelectionForOverlay:(id)arg1;
- (BOOL)shouldImmediatelyRecycle;
- (BOOL)allowsZooming;
- (BOOL)allowsEditing;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)_shouldAllowDraggingForEvent:(id)arg1;
- (void)didEndDragging;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggingSession:(id)arg1 willBeginAtPoint:(struct CGPoint)arg2;
- (void)dragImage:(id *)arg1 at:(struct CGPoint *)arg2 event:(id)arg3;
- (id)_previewImageForDragDrop;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (id)namesOfPromisedFilesDroppedAtDestination:(id)arg1;
- (void)_beginDraggingSession;
- (void)flagsChanged:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)ensureItemIsReady;
- (void)_invokeReadyHandler:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (void)setReadyHandler:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (void)_invokeReadyHandler;
- (double)zoomValueForZoomingBy:(double)arg1;
- (struct CGPoint)panOffsetForShowingContentPoint:(struct CGPoint)arg1 atViewPoint:(struct CGPoint)arg2;
- (struct CGPoint)contentPointAtViewPoint:(struct CGPoint)arg1;
- (struct CGPoint)panOffsetForViewPoint:(struct CGPoint)arg1;
- (void)updateOverlay:(Class)arg1 activate:(BOOL)arg2;
- (BOOL)hasInstalledOverlay:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (void)installOverlay:(id)arg1;
- (void)_removeAllOverlays;
- (void)_removeOverlay:(id)arg1;
- (void)_installOverlay:(id)arg1 installOntoCanvas:(BOOL)arg2;
- (void)_installOverlay:(id)arg1;
- (id)preferredFirstResponder;
- (void)endAnimate;
- (void)beginAnimate;
- (id)existingOverlays;
- (id)existingOverlayForClass:(Class)arg1;
- (void)updateAnnotationsUIIfNecessary;
- (void)didEndLiveResize;
- (void)willStartLiveResize;
- (void)setEdgeInsets:(struct NSEdgeInsets)arg1;
- (void)setOverallResourceProgress:(double)arg1;
- (void)setFocusType:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)setViewFrame:(struct CGRect)arg1 animated:(BOOL)arg2;
@property(readonly) IPXCanvasItemView *canvasView;
- (void)loadItem;
@property(readonly) struct CGSize itemSize;
@property(readonly) RDVersion *version;
- (id)_newPAImageItemViewController;
- (void)willBecomeInactive;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLoad;
@property(readonly) NSView *itemView;
- (void)removeFromParentViewController;
- (void)_setupItemViewController;
- (void)_removeItemViewController;
- (void)_removeViewerItemModel;
- (void)_setupViewerItemModel;
@property(readonly) PAItemController *renderItemController;
@property(readonly) IPXEditViewConfiguration *configuration;
- (void)setRenderMode:(long long)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSString *debugDescription;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

