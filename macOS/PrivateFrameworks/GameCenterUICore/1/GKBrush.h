//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GameCenterUICore/NSCopying-Protocol.h>

@interface GKBrush : NSObject <NSCopying>
{
}

+ (id)brush;
- (id)drawnImageForSize:(struct CGSize)arg1 opaque:(BOOL)arg2 input:(id)arg3;
- (double)scaleForInput:(id)arg1;
- (struct CGSize)sizeForInput:(id)arg1;
- (void)drawInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 input:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

