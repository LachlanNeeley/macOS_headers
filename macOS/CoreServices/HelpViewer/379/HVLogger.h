//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface HVLogger : NSObject
{
    NSArray *logs;
}

+ (void)logMessage:(id)arg1 inFile:(const char *)arg2 line:(int)arg3 category:(int)arg4 type:(unsigned char)arg5;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)logMessage:(id)arg1 inFile:(const char *)arg2 line:(int)arg3 category:(int)arg4 type:(unsigned char)arg5;
- (id)init;

@end

