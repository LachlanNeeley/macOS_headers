//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSScreenConfiguration : NSObject
{
}

+ (double)latestGreatestBackingScaleFactor;
+ (BOOL)latestZeroScreenIsNew;
+ (double)latestZeroScreenHeight;
+ (id)latestScreens;
+ (void)invalidateDisplayProfile;
+ (BOOL)invalidatePresentationConfigIfNeeded;
+ (BOOL)invalidateDockConfigIfNeeded;
+ (void)invalidateDisplayConfig;
+ (void)prepare;

@end

