//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CLgView.h"

@class NSView;

@interface CLgArrangeView : CLgView
{
    BOOL _observersAdded;
    NSView *_coverView;
}

@property(retain, nonatomic) NSView *coverView; // @synthesize coverView=_coverView;
- (void)setupSubviews;
- (void)viewWindowWillClose;
- (void)dealloc;
- (void)viewVisibilityChange:(BOOL)arg1;
- (void)removeObservers;
- (void)addObservers;
- (void)workspacesChangedHandler:(id)arg1;
- (id)newSectionViewWithFrame:(struct CGRect)arg1 section:(int)arg2;
- (double)constrainContentsHeaderWidth:(double)arg1;
@property __weak id accessibilityParent;

@end

