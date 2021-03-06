//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

@class NSTrackingArea;

@interface ActionTextFieldView : NSTextField
{
    BOOL _mouseIsIn;
    BOOL _mouseIsDown;
    NSTrackingArea *_trackingArea;
}

@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(nonatomic) BOOL mouseIsDown; // @synthesize mouseIsDown=_mouseIsDown;
@property(nonatomic) BOOL mouseIsIn; // @synthesize mouseIsIn=_mouseIsIn;
- (void).cxx_destruct;
- (void)setClickTarget:(id)arg1 action:(SEL)arg2;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

