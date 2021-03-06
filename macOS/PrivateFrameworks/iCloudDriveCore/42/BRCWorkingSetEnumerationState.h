//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileProviderManager, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCWorkingSetEnumerationState : NSObject
{
    BOOL _processingBatch;
    NSString *_name;
    NSObject<OS_dispatch_queue> *_queue;
    NSFileProviderManager *_providerManager;
}

@property(retain, nonatomic) NSFileProviderManager *providerManager; // @synthesize providerManager=_providerManager;
@property(nonatomic, getter=isProcessingBatch) BOOL processingBatch; // @synthesize processingBatch=_processingBatch;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)signal;
- (void)didFinishBatchWithAckedRank:(unsigned long long)arg1 flushedNotifRank:(unsigned long long)arg2;

@end

