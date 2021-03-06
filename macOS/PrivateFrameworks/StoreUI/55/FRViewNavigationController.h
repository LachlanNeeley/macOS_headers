//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreUI/FRContentViewController.h>

#import "NSToolbarDelegate.h"
#import "NSTouchBarDelegate.h"

@class FRToolbarManager, FRWindowBackgroundView, NSArray, NSMutableArray, NSSearchField, NSString, NSTimer, NSToolbar, NSToolbarItem, NSView;

@interface FRViewNavigationController : FRContentViewController <NSToolbarDelegate, NSTouchBarDelegate>
{
    NSToolbarItem *_leadingToolbarItem;
    NSToolbarItem *_trailingToolbarItem;
    BOOL _useMonobarStyle;
    BOOL _backButtonEnabled;
    BOOL _forwardButtonEnabled;
    BOOL _searchEnabled;
    BOOL _reloadingTabBar;
    FRWindowBackgroundView *_backgroundView;
    FRToolbarManager *_toolbarManager;
    NSArray *_tabItems;
    NSString *_selectedTab;
    NSToolbar *_toolbar;
    NSMutableArray *_toolbarItems;
    NSView *_tabBar;
    FRContentViewController *_currentContentViewController;
    NSMutableArray *_contentViewControllers;
    long long _activityIndicatorStackDepth;
    NSTimer *_activityIndicatorTimer;
    NSSearchField *_searchField;
    long long _savedWindowTitleVisibility;
    NSArray *_tabBarItems;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *tabBarItems; // @synthesize tabBarItems=_tabBarItems;
@property(nonatomic) long long savedWindowTitleVisibility; // @synthesize savedWindowTitleVisibility=_savedWindowTitleVisibility;
@property(retain, nonatomic) NSSearchField *searchField; // @synthesize searchField=_searchField;
@property(retain, nonatomic) NSTimer *activityIndicatorTimer; // @synthesize activityIndicatorTimer=_activityIndicatorTimer;
@property(nonatomic) long long activityIndicatorStackDepth; // @synthesize activityIndicatorStackDepth=_activityIndicatorStackDepth;
@property(retain, nonatomic) NSMutableArray *contentViewControllers; // @synthesize contentViewControllers=_contentViewControllers;
@property(retain, nonatomic) FRContentViewController *currentContentViewController; // @synthesize currentContentViewController=_currentContentViewController;
@property(nonatomic) BOOL reloadingTabBar; // @synthesize reloadingTabBar=_reloadingTabBar;
@property(retain, nonatomic) NSView *tabBar; // @synthesize tabBar=_tabBar;
@property(retain, nonatomic) NSMutableArray *toolbarItems; // @synthesize toolbarItems=_toolbarItems;
@property(readonly, nonatomic) NSToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(nonatomic, getter=isSearchEnabled) BOOL searchEnabled; // @synthesize searchEnabled=_searchEnabled;
@property(nonatomic, getter=isForwardButtonEnabled) BOOL forwardButtonEnabled; // @synthesize forwardButtonEnabled=_forwardButtonEnabled;
@property(nonatomic, getter=isBackButtonEnabled) BOOL backButtonEnabled; // @synthesize backButtonEnabled=_backButtonEnabled;
@property(retain, nonatomic) NSString *selectedTab; // @synthesize selectedTab=_selectedTab;
@property(readonly, copy, nonatomic) NSArray *tabItems; // @synthesize tabItems=_tabItems;
@property(readonly, nonatomic) FRToolbarManager *toolbarManager; // @synthesize toolbarManager=_toolbarManager;
@property(readonly, nonatomic) FRWindowBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) BOOL useMonobarStyle; // @synthesize useMonobarStyle=_useMonobarStyle;
- (BOOL)validateMenuItem:(id)arg1;
- (void)_updateStoreMenu;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)makeTouchBar;
- (id)_tabToolbarItem;
- (id)_newToolbarItemForIdentifier:(id)arg1;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (void)_updateBackForwardAppearance;
- (void)removeSearchSuggester:(id)arg1;
- (void)addSearchSuggester:(id)arg1;
@property(retain, nonatomic) NSString *searchString;
- (void)_updateSearchAppearance;
- (void)_activityIndicatorTimerFired;
- (void)pushActivityIndicator;
- (void)popActivityIndicator;
- (BOOL)_isDuplicateToolbarItem:(id)arg1;
- (void)_removeCustomToolbarItem:(id)arg1;
- (void)_addCustomToolbarItem:(id)arg1 index:(long long)arg2;
- (void)setTrailingToolbarItem:(id)arg1;
- (void)setLeadingToolbarItem:(id)arg1;
- (BOOL)isTabEnabled:(id)arg1;
- (void)selectTab:(id)arg1;
- (BOOL)isTabSelected:(id)arg1;
- (void)_updateTouchTabBarAppearance;
- (void)reloadTabBar;
- (void)reloadPage:(id)arg1;
- (void)traverseHistory:(id)arg1;
- (void)doSearch:(id)arg1;
- (void)startSearch:(id)arg1;
- (void)itemSelected:(id)arg1;
- (void)goBack;
- (void)goForward;
- (BOOL)canGoBack;
- (BOOL)canGoForward;
- (void)clearHistory;
- (void)reload;
- (void)contentViewController:(id)arg1 searchedForString:(id)arg2;
- (void)contentViewController:(id)arg1 finishedLoadingURL:(id)arg2 selectedToolbarItem:(id)arg3;
- (void)contentViewController:(id)arg1 startedLoadingURL:(id)arg2;
- (BOOL)loadURL:(id)arg1 referrer:(id)arg2;
- (BOOL)canLoadURL:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)loadView;
- (void)_updateTopContentInset;
- (void)_windowDidChangeFullScreen:(id)arg1;
- (void)_windowKeyStatusChanged:(id)arg1;
- (void)removeContentViewController:(id)arg1;
- (void)addContentViewController:(id)arg1;
- (BOOL)acceptsFirstResponder;
- (void)dealloc;
- (id)initWithToolbarItems:(id)arg1;
- (id)init;
- (void)setNavigationController:(id)arg1;
- (id)navigationController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

