//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXViewerOverlayView.h"

#import "PAImageActivityReceiver-Protocol.h"

@class IPXBrushMaskOverlayView, IPXRetouchMouseTrackerBase, NSString;

@interface IPXRetouchToolOverlayView : IPXViewerOverlayView <PAImageActivityReceiver>
{
    IPXBrushMaskOverlayView *_brushOverlayView;
    BOOL _registeredForUpdates;
    IPXRetouchMouseTrackerBase *_activeTracker;
}

@property(retain, nonatomic) IPXRetouchMouseTrackerBase *activeTracker; // @synthesize activeTracker=_activeTracker;
- (void).cxx_destruct;
- (void)scrollWheel:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (void)imageActivityControllerDidUpdateImage:(id)arg1 region:(id)arg2 quality:(unsigned long long)arg3 finalQuality:(unsigned long long)arg4;
- (void)fadeBrushMaskImageOnUpdate;
- (void)setBrushMaskImage:(struct CGImage *)arg1 andSourcePoint:(struct CGPoint)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

