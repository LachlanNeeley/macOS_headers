//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "FLUTextFieldDelegate.h"
#import "FLUUploadCarouselItemTableCellViewDelegate.h"
#import "NSMenuDelegate.h"
#import "NSPopoverDelegate.h"
#import "NSTextViewDelegate.h"
#import "NSTouchBarDelegate.h"
#import "NSWindowDelegate.h"

@class AVURLAsset, FLUBlurView, FLUBorderView, FLUCaptionTextView, FLUHoverButton, FLUImageView, FLULocationButton, FLUMedia, FLUPlayerView, FLUPopover, FLUSmallTransparentButton, FLUTagSearchResultsViewController, FLUTextFieldLabel, FLUUploadLocationsWindowController, FLUUploadTaggingWindowController, FLUUserSearchResultsViewController, FLUView, ITProgressIndicator, NSMutableArray, NSMutableSet, NSPopoverTouchBarItem, NSString, NSTableView, NSTimer, NSView;

@interface FLUEditWindowController : NSWindowController <NSWindowDelegate, NSTextViewDelegate, FLUTextFieldDelegate, NSPopoverDelegate, NSMenuDelegate, NSTouchBarDelegate, FLUUploadCarouselItemTableCellViewDelegate>
{
    BOOL _isDocumentEdited;
    BOOL _editInProgress;
    BOOL _windowAnimationInProgress;
    BOOL _cancelInProgress;
    BOOL _mediaTagsEdited;
    BOOL _ignoreModifiedObjectsNotification;
    CDUnknownBlockType _completionBlock;
    FLUMedia *_media;
    unsigned long long _windowIndex;
    FLUBlurView *_blurView;
    FLUImageView *_imageView;
    FLUPlayerView *_playerView;
    AVURLAsset *_videoAsset;
    FLUCaptionTextView *_captionTextView;
    FLUImageView *_characterCountImageView;
    FLUTextFieldLabel *_characterCountLabel;
    FLUImageView *_hashtagCountImageView;
    FLUTextFieldLabel *_hashtagCountLabel;
    FLUImageView *_usernameCountImageView;
    FLUTextFieldLabel *_usernameCountLabel;
    ITProgressIndicator *_progressIndicatorView;
    FLUSmallTransparentButton *_updateButton;
    FLUHoverButton *_mediaButton;
    NSView *_contentOptionsView;
    FLUHoverButton *_playButton;
    FLULocationButton *_locationButton;
    FLUHoverButton *_tagButton;
    FLUView *_containerView;
    FLUView *_curtainView;
    FLUBorderView *_titleBorderView;
    FLUBorderView *_topBorderView;
    FLUBorderView *_bottomBorderView;
    FLUBorderView *_statsBorderView;
    NSView *_titleBarView;
    FLUImageView *_logoImageView;
    NSView *_contentView;
    NSView *_detailsView;
    NSView *_actionsView;
    FLUTextFieldLabel *_progressLabel;
    FLUUploadLocationsWindowController *_locationsWindowController;
    FLUUploadTaggingWindowController *_taggingWindowController;
    NSMutableArray *_mediaTags;
    FLUPopover *_usernamesPopover;
    FLUPopover *_tagsPopover;
    FLUUserSearchResultsViewController *_userResultsViewController;
    FLUTagSearchResultsViewController *_tagResultsViewController;
    NSString *_searchTerm;
    NSString *_lastSearchTerm;
    long long _userSymbolPosition;
    long long _tagSymbolPosition;
    NSPopoverTouchBarItem *_locationPopoverItem;
    FLUView *_carouselView;
    FLUView *_carouselContentView;
    NSTableView *_carouselContentTableView;
    FLUBorderView *_carouselBorderView;
    NSMutableSet *_observedObjectIDs;
    NSTimer *_generalTimer;
}

@property(retain, nonatomic) NSTimer *generalTimer; // @synthesize generalTimer=_generalTimer;
@property(nonatomic) BOOL ignoreModifiedObjectsNotification; // @synthesize ignoreModifiedObjectsNotification=_ignoreModifiedObjectsNotification;
@property(retain, nonatomic) NSMutableSet *observedObjectIDs; // @synthesize observedObjectIDs=_observedObjectIDs;
@property(nonatomic) __weak FLUBorderView *carouselBorderView; // @synthesize carouselBorderView=_carouselBorderView;
@property(nonatomic) __weak NSTableView *carouselContentTableView; // @synthesize carouselContentTableView=_carouselContentTableView;
@property(nonatomic) __weak FLUView *carouselContentView; // @synthesize carouselContentView=_carouselContentView;
@property(nonatomic) __weak FLUView *carouselView; // @synthesize carouselView=_carouselView;
@property(retain, nonatomic) NSPopoverTouchBarItem *locationPopoverItem; // @synthesize locationPopoverItem=_locationPopoverItem;
@property(nonatomic) long long tagSymbolPosition; // @synthesize tagSymbolPosition=_tagSymbolPosition;
@property(nonatomic) long long userSymbolPosition; // @synthesize userSymbolPosition=_userSymbolPosition;
@property(retain, nonatomic) NSString *lastSearchTerm; // @synthesize lastSearchTerm=_lastSearchTerm;
@property(retain, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
@property(retain, nonatomic) FLUTagSearchResultsViewController *tagResultsViewController; // @synthesize tagResultsViewController=_tagResultsViewController;
@property(retain, nonatomic) FLUUserSearchResultsViewController *userResultsViewController; // @synthesize userResultsViewController=_userResultsViewController;
@property(retain, nonatomic) FLUPopover *tagsPopover; // @synthesize tagsPopover=_tagsPopover;
@property(retain, nonatomic) FLUPopover *usernamesPopover; // @synthesize usernamesPopover=_usernamesPopover;
@property(nonatomic) BOOL mediaTagsEdited; // @synthesize mediaTagsEdited=_mediaTagsEdited;
@property(retain, nonatomic) NSMutableArray *mediaTags; // @synthesize mediaTags=_mediaTags;
@property(retain, nonatomic) FLUUploadTaggingWindowController *taggingWindowController; // @synthesize taggingWindowController=_taggingWindowController;
@property(retain, nonatomic) FLUUploadLocationsWindowController *locationsWindowController; // @synthesize locationsWindowController=_locationsWindowController;
@property(nonatomic) BOOL cancelInProgress; // @synthesize cancelInProgress=_cancelInProgress;
@property(nonatomic) BOOL windowAnimationInProgress; // @synthesize windowAnimationInProgress=_windowAnimationInProgress;
@property(nonatomic) BOOL editInProgress; // @synthesize editInProgress=_editInProgress;
@property(nonatomic) __weak FLUTextFieldLabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(nonatomic) __weak NSView *actionsView; // @synthesize actionsView=_actionsView;
@property(nonatomic) __weak NSView *detailsView; // @synthesize detailsView=_detailsView;
@property(nonatomic) __weak NSView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak FLUImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(nonatomic) __weak NSView *titleBarView; // @synthesize titleBarView=_titleBarView;
@property(nonatomic) __weak FLUBorderView *statsBorderView; // @synthesize statsBorderView=_statsBorderView;
@property(nonatomic) __weak FLUBorderView *bottomBorderView; // @synthesize bottomBorderView=_bottomBorderView;
@property(nonatomic) __weak FLUBorderView *topBorderView; // @synthesize topBorderView=_topBorderView;
@property(nonatomic) __weak FLUBorderView *titleBorderView; // @synthesize titleBorderView=_titleBorderView;
@property(nonatomic) __weak FLUView *curtainView; // @synthesize curtainView=_curtainView;
@property(nonatomic) __weak FLUView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak FLUHoverButton *tagButton; // @synthesize tagButton=_tagButton;
@property(nonatomic) __weak FLULocationButton *locationButton; // @synthesize locationButton=_locationButton;
@property(nonatomic) __weak FLUHoverButton *playButton; // @synthesize playButton=_playButton;
@property(nonatomic) __weak NSView *contentOptionsView; // @synthesize contentOptionsView=_contentOptionsView;
@property(nonatomic) __weak FLUHoverButton *mediaButton; // @synthesize mediaButton=_mediaButton;
@property(nonatomic) __weak FLUSmallTransparentButton *updateButton; // @synthesize updateButton=_updateButton;
@property(nonatomic) __weak ITProgressIndicator *progressIndicatorView; // @synthesize progressIndicatorView=_progressIndicatorView;
@property(nonatomic) __weak FLUTextFieldLabel *usernameCountLabel; // @synthesize usernameCountLabel=_usernameCountLabel;
@property(nonatomic) __weak FLUImageView *usernameCountImageView; // @synthesize usernameCountImageView=_usernameCountImageView;
@property(nonatomic) __weak FLUTextFieldLabel *hashtagCountLabel; // @synthesize hashtagCountLabel=_hashtagCountLabel;
@property(nonatomic) __weak FLUImageView *hashtagCountImageView; // @synthesize hashtagCountImageView=_hashtagCountImageView;
@property(nonatomic) __weak FLUTextFieldLabel *characterCountLabel; // @synthesize characterCountLabel=_characterCountLabel;
@property(nonatomic) __weak FLUImageView *characterCountImageView; // @synthesize characterCountImageView=_characterCountImageView;
@property(nonatomic) FLUCaptionTextView *captionTextView; // @synthesize captionTextView=_captionTextView;
@property(retain, nonatomic) AVURLAsset *videoAsset; // @synthesize videoAsset=_videoAsset;
@property(nonatomic) __weak FLUPlayerView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) __weak FLUImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak FLUBlurView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) BOOL isDocumentEdited; // @synthesize isDocumentEdited=_isDocumentEdited;
@property(nonatomic) unsigned long long windowIndex; // @synthesize windowIndex=_windowIndex;
@property(retain, nonatomic) FLUMedia *media; // @synthesize media=_media;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (double)windowHeightForScreen:(id)arg1;
- (double)previewHeightForScreen:(id)arg1;
- (BOOL)stopVideoWithAnimation:(BOOL)arg1;
- (void)preparePlayerViewForPlayback;
- (void)preparePlayerViewForPause;
- (void)highlightEntitiesInText;
- (id)linkAttributes:(id)arg1;
- (id)usernameAttributes:(id)arg1 duplicate:(BOOL)arg2;
- (id)hashtagAttributes:(id)arg1 duplicate:(BOOL)arg2;
- (id)captionAttributes;
- (id)mediaTagsAtIndex:(long long)arg1;
- (id)currentMediaTags;
- (void)closeForTermination;
- (void)updatePreviewForCarouselItem;
- (void)selectCarouselItemAtIndex:(unsigned long long)arg1;
- (void)reloadCarouselTableViewMaintainingSelection:(BOOL)arg1;
- (void)showCarouselView;
- (void)hideCurtainViewWithProgressIndicator:(BOOL)arg1;
- (void)showCurtainViewWithProgressIndicator:(BOOL)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)showCurtainViewWithProgressIndicator:(BOOL)arg1;
- (void)refreshContentOptionsView;
- (void)updateWindowLevel;
- (void)showTaggingWindow;
- (void)showLocationsWindow;
- (void)resizePreviewToHeight:(double)arg1;
- (void)updatePreviewImage:(id)arg1 video:(id)arg2 resizePreview:(BOOL)arg3;
- (void)didSelectTagObject:(id)arg1;
- (void)didSelectUser:(id)arg1;
- (void)filteredTagsWithString:(id)arg1;
- (void)filteredUsersWithString:(id)arg1;
- (void)refreshView;
- (BOOL)refreshForm;
- (void)setDocumentEdited:(BOOL)arg1;
- (BOOL)blockingOperationInProgress;
- (void)cleanupWindow;
- (void)flu_uploadCarouselItemTableCellViewSelectItem:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (long long)numberOfSections;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (void)popoverDidClose:(id)arg1;
- (void)didPressUpdateButton:(id)arg1;
- (void)didPressPlayButton:(id)arg1;
- (void)didPressTagButton:(id)arg1;
- (void)didPressRemoveLocationItem:(id)arg1;
- (void)didPressEditLocationItem:(id)arg1;
- (void)didPressLocationButton:(id)arg1;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (struct CGRect)window:(id)arg1 willPositionSheet:(id)arg2 usingRect:(struct CGRect)arg3;
- (void)flu_textViewTextDidChange:(id)arg1;
- (unsigned long long)usernameMatches;
- (unsigned long long)hashtagMatches;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (id)textView:(id)arg1 shouldChangeTypingAttributes:(id)arg2 toAttributes:(id)arg3;
- (id)control:(id)arg1 textView:(id)arg2 completions:(id)arg3 forPartialWordRange:(struct _NSRange)arg4 indexOfSelectedItem:(long long *)arg5;
- (void)menuDidClose:(id)arg1;
- (void)didPressTouchBarEditSaveItem:(id)arg1;
- (void)didPressTouchBarTaggingItem:(id)arg1;
- (void)didPressTouchBarLocationRemoveItem:(id)arg1;
- (void)didPressTouchBarLocationEditItem:(id)arg1;
- (void)didPressTouchBarLocationItem:(id)arg1;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)makeTouchBar;
- (void)refreshTouchBar;
- (void)playerItemDidReachEnd:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)didChangeDesignModeOption:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)applicationDidPruneDatabase:(id)arg1;
- (void)applicationWillPruneDatabase:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)windowLevelStatusWillChange:(id)arg1;
- (void)didChangeLanguage:(id)arg1;
- (void)didChangeCurrentLocale:(id)arg1;
- (void)updateFrames;
- (void)setupCarouselView;
- (void)setupAccessibility;
- (void)dealloc;
- (void)setupWindowController;
- (void)localizeUserInterface;
- (void)awakeFromNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

