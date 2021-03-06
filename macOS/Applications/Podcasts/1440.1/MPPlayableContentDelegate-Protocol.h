//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MPPlayableContentManager, MPPlayableContentManagerContext, NSArray, NSIndexPath;

@protocol MPPlayableContentDelegate <NSObject>

@optional
- (void)playableContentManager:(MPPlayableContentManager *)arg1 didUpdateContext:(MPPlayableContentManagerContext *)arg2;
- (void)playableContentManager:(MPPlayableContentManager *)arg1 initializePlaybackQueueWithContentItems:(NSArray *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)playableContentManager:(MPPlayableContentManager *)arg1 initializePlaybackQueueWithCompletionHandler:(void (^)(NSError *))arg2;
- (void)playableContentManager:(MPPlayableContentManager *)arg1 initiatePlaybackOfContentItemAtIndexPath:(NSIndexPath *)arg2 completionHandler:(void (^)(NSError *))arg3;
@end

