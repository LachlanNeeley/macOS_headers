//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UIImageContentRendition : NSObject
{
    BOOL _requiresMasking;
    struct CGImage *_CGImage;
    UIColor *_multiplyColor;
}

+ (id)renditionWithCGImage:(struct CGImage *)arg1 color:(id)arg2 requiresMasking:(BOOL)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL requiresMasking; // @synthesize requiresMasking=_requiresMasking;
@property(readonly, nonatomic) UIColor *multiplyColor; // @synthesize multiplyColor=_multiplyColor;
@property(readonly, nonatomic) struct CGImage *CGImage; // @synthesize CGImage=_CGImage;
- (void)dealloc;

@end

