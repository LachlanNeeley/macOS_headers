//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/BookmarksOperationCoalescerDelegate-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString;

__attribute__((visibility("hidden")))
@interface BookmarksOperationQueue : NSObject <BookmarksOperationCoalescerDelegate>
{
    NSOperationQueue *_queue;
    NSMutableDictionary *_operationClassesToCaches;
    NSMutableSet *_operationClassesRequestingCacheDeletionOnBookmarksChange;
    NSMutableDictionary *_operationClassesToCoalescers;
    NSMapTable *_overridableOperationClassesToMostRecentInstances;
}

+ (id)defaultQueue;
- (void).cxx_destruct;
- (void)_bookmarksDidChange:(id)arg1;
- (void)_scheduleCoalesceableOperation:(id)arg1;
- (void)_setUpResultCachingOperationForOperationIfNecessary:(id)arg1;
- (BOOL)_tryToUseCachedResultForOperation:(id)arg1;
- (BOOL)_tryToReuseResultOfOperation:(id)arg1 forOperation:(id)arg2;
- (void)_overrideExistingOperationsWithOperationIfNecessary:(id)arg1;
- (void)_addOperationIgnoringCoalescing:(id)arg1;
- (id)_initWithBookmarksController:(id)arg1;
- (void)bookmarksOperationCoalescer:(id)arg1 didCoalesceOperationsIntoOperation:(id)arg2;
- (void)addOperation:(id)arg1;
@property unsigned long long maximumConcurrentOperationCount;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

