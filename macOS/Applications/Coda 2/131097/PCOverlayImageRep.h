//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSImageRep.h"

@class NSColor, NSImage;

__attribute__((visibility("hidden")))
@interface PCOverlayImageRep : NSImageRep
{
    NSColor *iTintColor;
    NSImage *iBaseImage;
    NSImage *iOverlayImage;
}

@property(readonly, copy, nonatomic) NSImage *overlayImage; // @synthesize overlayImage=iOverlayImage;
@property(readonly, copy, nonatomic) NSImage *baseImage; // @synthesize baseImage=iBaseImage;
- (BOOL)draw;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithImage:(id)arg1 overlay:(id)arg2;

@end

