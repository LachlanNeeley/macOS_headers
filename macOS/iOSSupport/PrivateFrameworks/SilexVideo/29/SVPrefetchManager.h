//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoTransitionObserver-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol SVPrefetcherFactory, SVVideoQueueObserving, SVVideoQueueProviding;

@interface SVPrefetchManager : NSObject <SVVideoTransitionObserver>
{
    id <SVVideoQueueProviding> _queueProvider;
    id <SVVideoQueueObserving> _queueObserver;
    id <SVPrefetcherFactory> _prefetcherFactory;
    NSMutableDictionary *_prefetchers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *prefetchers; // @synthesize prefetchers=_prefetchers;
@property(readonly, nonatomic) id <SVPrefetcherFactory> prefetcherFactory; // @synthesize prefetcherFactory=_prefetcherFactory;
@property(readonly, nonatomic) id <SVVideoQueueObserving> queueObserver; // @synthesize queueObserver=_queueObserver;
@property(readonly, nonatomic) id <SVVideoQueueProviding> queueProvider; // @synthesize queueProvider=_queueProvider;
- (void)createPrefetcherForVideo:(id)arg1 afterVideo:(id)arg2;
- (void)updatePrefetchersWithCurrentVideo:(id)arg1;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)initWithPrefetcherFactory:(id)arg1 queueProvider:(id)arg2 queueObserver:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

