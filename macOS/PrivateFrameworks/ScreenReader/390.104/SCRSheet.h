//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScreenReader/SCRMapElement.h>

@class SCRUIElement;

__attribute__((visibility("hidden")))
@interface SCRSheet : SCRMapElement
{
    SCRUIElement *_growAreaUIElement;
    BOOL _hasToolbarPalette;
}

- (BOOL)shouldFocusOntoChild:(id)arg1;
- (void)setKeyboardChild:(id)arg1 force:(BOOL)arg2;
- (void)setFocusedChild:(id)arg1;
- (void)setKeyboardChild:(id)arg1;
- (BOOL)shouldSpeakItemCountWhenFocusingIn;
- (BOOL)_handleNavigateToFirstLastElement:(id)arg1 commandKey:(id)arg2 event:(id)arg3 request:(id)arg4;
- (void)addItemDescriptionForFallbackToRequest:(id)arg1;
- (void)addItemDescriptionToRequest:(id)arg1;
- (id)typeDescription;
- (BOOL)shouldTrackKBOnFocusInto;
- (BOOL)startWindowContentFeedback:(id)arg1;
- (BOOL)handleUntaggedOperationWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)enableResizeModeWithRequest:(id)arg1 handleIndex:(unsigned long long)arg2;
- (void)buildResizeOptionsMenu:(id)arg1;
- (BOOL)performDefaultActionWithRequest:(id)arg1 allowClick:(BOOL)arg2;
- (BOOL)interactLeftCommandShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactRightCommandShiftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactLeftWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactUpWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)_moveLastInSheetWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)_moveFirstInSheetWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)interactHomeWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)_moveToToolbarWithEvent:(id)arg1 request:(id)arg2;
- (BOOL)isValid;
- (id)_growAreaUIElement;
- (struct CGRect)visibleBounds;
- (BOOL)canStopInteracting;
- (id)removeSpecialChildren:(id)arg1;
- (id)buildDefaultChildrenWithUIElements:(id)arg1;
- (void)dealloc;
- (id)initWithUIElement:(id)arg1 parent:(id)arg2;

@end

