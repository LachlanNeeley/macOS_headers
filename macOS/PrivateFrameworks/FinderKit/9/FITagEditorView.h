//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSControl.h"

@class FI_TTagEditorController, NSArray, NSObject<FITagEditorDelegate>;

@interface FITagEditorView : NSControl
{
    NSObject<FITagEditorDelegate> *_delegate;
    id _controller;
    id _reserved;
    id _reserved2;
    id _reserved3;
    struct TNotificationCenterObserver _tagEditorDidFinishEditingObserver;
    struct TNotificationCenterObserver _suggestionsWillShowObserver;
}

+ (_Bool)accessibilityIsSingleCelled;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) FI_TTagEditorController *controller; // @synthesize controller=_controller;
@property __weak NSObject<FITagEditorDelegate> *delegate; // @synthesize delegate=_delegate;
- (BOOL)accessibilityIsIgnored;
- (void)selectText:(id)arg1;
- (void)setSelectable:(_Bool)arg1;
- (BOOL)isSelectable;
- (void)setEditable:(BOOL)arg1;
- (_Bool)isEditable;
- (void)setUserInterfaceLayoutDirection:(long long)arg1;
- (long long)userInterfaceLayoutDirection;
- (void)sizeToFit;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (void)setTag:(long long)arg1;
- (long long)tag;
- (void)setAction:(SEL)arg1;
- (SEL)action;
- (void)setTarget:(id)arg1;
- (id)target;
- (void)setOptions:(id)arg1;
@property(copy) NSArray *tags; // @dynamic tags;
- (void)didFinishEditing;
- (void)suggestionsWindowWillShow;
- (id)taggingTokenField;
- (void)dealloc;
- (void)viewDidChangeEffectiveAppearance;
- (id)initWithFrame:(struct CGRect)arg1;

@end

