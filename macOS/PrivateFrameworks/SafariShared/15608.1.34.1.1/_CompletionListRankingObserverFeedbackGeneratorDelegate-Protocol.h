//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SafariShared/NSObject-Protocol.h>

@protocol WBSCompletionListItem, _CompletionListRankingObserverFeedbackGenerator;

@protocol _CompletionListRankingObserverFeedbackGeneratorDelegate <NSObject>

@optional
- (unsigned long long)completionListRankingObserverFeedbackGenerator:(id <_CompletionListRankingObserverFeedbackGenerator>)arg1 frequentlyVisitedSitesIndexOfItem:(id <WBSCompletionListItem>)arg2 hidingItem:(id <WBSCompletionListItem>)arg3;
@end

