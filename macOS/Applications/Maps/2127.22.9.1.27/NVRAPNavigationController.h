//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "NSWindowDelegate-Protocol.h"
#import "RAPInstrumentableTarget-Protocol.h"
#import "RAPRouter-Protocol.h"

@class NSButton, NSIndexSet, NSLayoutConstraint, NSMutableArray, NSString, NSView, NVRAPViewController, RAPReport;

__attribute__((visibility("hidden")))
@interface NVRAPNavigationController : NSWindowController <NSWindowDelegate, RAPInstrumentableTarget, RAPRouter>
{
    BOOL _loaded;
    NSIndexSet *_availableTypes;
    NSView *_contentView;
    NSMutableArray *_stepControllers;
    RAPReport *_report;
    NSButton *_gobackButton;
    NSButton *_sendButton;
    NSButton *_continueButton;
    NVRAPViewController *_currentController;
    NSView *_actionsView;
    NSView *_container;
    NSLayoutConstraint *_actionsHeightConstraint;
    NSLayoutConstraint *_containerHeightConstraint;
    NSLayoutConstraint *_containerWidthConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *containerWidthConstraint; // @synthesize containerWidthConstraint=_containerWidthConstraint;
@property(nonatomic) __weak NSLayoutConstraint *containerHeightConstraint; // @synthesize containerHeightConstraint=_containerHeightConstraint;
@property __weak NSLayoutConstraint *actionsHeightConstraint; // @synthesize actionsHeightConstraint=_actionsHeightConstraint;
@property(nonatomic) __weak NSView *container; // @synthesize container=_container;
@property __weak NSView *actionsView; // @synthesize actionsView=_actionsView;
@property(retain, nonatomic) NVRAPViewController *currentController; // @synthesize currentController=_currentController;
@property __weak NSButton *continueButton; // @synthesize continueButton=_continueButton;
@property __weak NSButton *sendButton; // @synthesize sendButton=_sendButton;
@property __weak NSButton *gobackButton; // @synthesize gobackButton=_gobackButton;
- (void).cxx_destruct;
- (void)_displayAcknowledgement;
- (void)sendAction:(id)arg1;
- (void)continueAction:(id)arg1;
- (void)gobackAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)proceedToLineNameIncorrectQuestion:(id)arg1;
- (void)proceedToSchedulesIncorrectQuestion:(id)arg1;
- (void)proceedToStationAccessPointQuestion:(id)arg1;
- (void)proceedToStationAccessPointSelectionQuestion:(id)arg1;
- (void)proceedToLineSelectionQuestion:(id)arg1;
- (void)proceedToPlaceClosureQuestion:(id)arg1;
- (void)proceedToLocationDetailsIncorrectQuestion:(id)arg1;
- (void)proceedToMenuQuestion:(id)arg1;
- (void)proceedToTransitStationInfoQuestion:(id)arg1;
- (id)_rightViewControllerForAddNewPlaceFollowupQuestion:(id)arg1;
- (void)proceedToAddNewPlaceFollowUpQuestion:(id)arg1;
- (void)proceedToAddNewPlaceQuestion:(id)arg1;
- (void)proceedToPlaceCorrectionsQuestion:(id)arg1;
- (void)proceedToLabelCorrectionsQuestion:(id)arg1;
- (void)proceedToProblemWithImageryQuestion:(id)arg1;
- (void)proceedToBadRouteSuggestionsQuestion:(id)arg1;
- (void)proceedToProblemWithDirectionsQuestion:(id)arg1;
- (void)proceedToIncorrectSearchResultsQuestion:(id)arg1;
- (void)proceedToCommentQuestion:(id)arg1;
- (void)proceedToArrivalEntryPointIncorrectQuestion:(id)arg1;
- (void)proceedToProblemNotListedQuestion:(id)arg1;
- (void)proceedToNextQuestion:(id)arg1;
@property(readonly, nonatomic) int analyticTarget;
- (void)runAnimationGroup:(CDUnknownBlockType)arg1 view:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_updateNavigationButtons;
- (void)pushViewController:(id)arg1;
- (void)updateContraintsView:(id)arg1 withOffset:(struct CGSize)arg2 animated:(BOOL)arg3;
- (void)updateContraintsView:(id)arg1 animated:(BOOL)arg2;
- (void)updateContainerSizeAnimated:(BOOL)arg1;
- (void)updateContainerSize;
- (id)windowNibName;
- (void)setNeedsUpdate;
- (void)awakeFromNib;
- (id)initWithRootViewController:(id)arg1 report:(id)arg2;
@property(readonly, nonatomic) BOOL canGoback;

// Remaining properties
@property(readonly, nonatomic) int backAction;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

