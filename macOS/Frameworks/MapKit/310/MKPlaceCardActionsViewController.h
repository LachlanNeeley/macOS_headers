//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MapKit/MKPlaceSectionViewController.h>

#import "MKPlaceCardActionSectionViewDelegate.h"
#import "_MKInfoCardChildViewControllerAnalyticsDelegate.h"
#import "_MKStackViewDelegate.h"

@class MKPlaceActionManager, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MKPlaceCardActionsViewController : MKPlaceSectionViewController <MKPlaceCardActionSectionViewDelegate, _MKStackViewDelegate, _MKInfoCardChildViewControllerAnalyticsDelegate>
{
    BOOL _haveTwoColumns;
    BOOL _useSmallFonts;
    BOOL _showTopSeparator;
    BOOL _allowRowSelection;
    BOOL _useMarginLayout;
    BOOL _showTopButtonSeparator;
    NSArray *_actionItemArray;
    NSArray *_viewArray;
    MKPlaceActionManager *_actionManager;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MKPlaceActionManager *actionManager; // @synthesize actionManager=_actionManager;
@property(nonatomic) BOOL showTopButtonSeparator; // @synthesize showTopButtonSeparator=_showTopButtonSeparator;
@property(nonatomic) BOOL useMarginLayout; // @synthesize useMarginLayout=_useMarginLayout;
@property(nonatomic) BOOL allowRowSelection; // @synthesize allowRowSelection=_allowRowSelection;
@property(retain, nonatomic) NSArray *viewArray; // @synthesize viewArray=_viewArray;
@property(copy, nonatomic) NSArray *actionItemArray; // @synthesize actionItemArray=_actionItemArray;
@property(nonatomic) BOOL showTopSeparator; // @synthesize showTopSeparator=_showTopSeparator;
@property(nonatomic) BOOL useSmallFonts; // @synthesize useSmallFonts=_useSmallFonts;
@property(nonatomic) BOOL haveTwoColumns; // @synthesize haveTwoColumns=_haveTwoColumns;
- (id)infoCardChildUnactionableUIElements;
- (id)infoCardChildPossibleActions;
- (void)placeCardActionSectionView:(id)arg1 buttonWithActionItemPressed:(id)arg2;
- (void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3;
- (double)stackView:(id)arg1 distanceBetweenUpperView:(id)arg2 andLowerView:(id)arg3;
- (void)_setUpSectionViews;
- (id)_makePlaceActionButton;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

