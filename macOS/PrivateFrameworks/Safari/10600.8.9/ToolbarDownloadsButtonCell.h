//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSButtonCell.h>

__attribute__((visibility("hidden")))
@interface ToolbarDownloadsButtonCell : NSButtonCell
{
    float _progress;
}

- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)_drawProgressBarWithCellFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)updateWithProgress:(float)arg1;

@end

