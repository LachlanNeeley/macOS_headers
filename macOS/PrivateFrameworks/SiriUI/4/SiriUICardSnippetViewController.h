//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SiriUI/SiriUISnippetViewController.h>

#import "CRKCardPresentationDelegate.h"
#import "CRKCardViewControllerDelegate.h"
#import "SFResourceLoader.h"

@class CRKCardPresentation, CRKCardViewController, NSMutableDictionary, NSString, SACardSnippet, SiriUICardSnippetView;

__attribute__((visibility("hidden")))
@interface SiriUICardSnippetViewController : SiriUISnippetViewController <CRKCardViewControllerDelegate, CRKCardPresentationDelegate, SFResourceLoader>
{
    SACardSnippet *_snippet;
    id <CRCard> _baseCard;
    CDUnknownBlockType _newlyLoadedCardCompletionHandler;
    NSMutableDictionary *_referenceableCommandsByIdentifierMap;
    NSMutableDictionary *_referenceableSnippetsByIdentifierMap;
    CRKCardViewController *_cardViewController;
    CRKCardPresentation *_cardPresenter;
}

@property(retain) CRKCardPresentation *cardPresenter; // @synthesize cardPresenter=_cardPresenter;
@property(retain) CRKCardViewController *cardViewController; // @synthesize cardViewController=_cardViewController;
- (void).cxx_destruct;
- (void)_applyUserInfoDictionary:(id)arg1 toCommand:(id)arg2;
- (id)_cardForData:(id)arg1;
- (BOOL)_loadCard:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_addCardViewControllerAsChildViewController:(id)arg1;
- (void)_removeCardViewControllerFromParentViewController:(id)arg1;
- (void)siriDidStopSpeakingWithIdentifier:(id)arg1 speechQueueIsEmpty:(BOOL)arg2;
- (void)siriDidStartSpeakingWithIdentifier:(id)arg1;
- (double)desiredHeight;
- (struct CGSize)desiredSize;
- (double)desiredHeightForWidth:(double)arg1;
- (struct CGSize)desiredSizeForWidth:(double)arg1;
- (BOOL)loadCard:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)performNextCardCommand:(id)arg1 forCardViewController:(id)arg2;
- (BOOL)performReferentialCommand:(id)arg1 forCardViewController:(id)arg2;
- (void)cardViewControllerBoundsDidChange:(id)arg1;
@property(readonly, nonatomic) id <CRKCardViewControllerDelegate> cardViewControllerDelegate;
- (long long)_pinAnimationType;
- (void)setSnippet:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain) SiriUICardSnippetView *view; // @dynamic view;

@end

