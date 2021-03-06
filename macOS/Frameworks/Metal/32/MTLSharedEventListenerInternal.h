//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Metal/MTLSharedEventListener.h>

@class NSObject<OS_dispatch_queue>;

__attribute__((visibility("hidden")))
@interface MTLSharedEventListenerInternal : MTLSharedEventListener
{
    struct IONotificationPort *_notificationPort;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

- (void)_notifyEventPort:(unsigned int)arg1 event:(id)arg2 atValue:(unsigned long long)arg3 block:(CDUnknownBlockType)arg4;
- (id)dispatchQueue;
- (void)dealloc;
- (id)initWithDispatchQueue:(id)arg1;
- (id)init;

@end

