//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol NotificationObserver;

__attribute__((visibility("hidden")))
@interface VCPowerNotifier : NSObject
{
    NSObject<NotificationObserver> *observer;
}

+ (id)VCPowerNotifier;
- (BOOL)getPowerUpdate:(float *)arg1 cpuCount:(int *)arg2 scheduleLimit:(float *)arg3;
- (void)startNotifications;
- (void)dealloc;
- (id)setNotificationObserver:(id)arg1;
- (id)init;

@end

