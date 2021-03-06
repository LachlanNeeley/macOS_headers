//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSControl.h>

#import <AppKit/NSAccessibilityCheckBox-Protocol.h>

@class NSAttributedString, NSStackView, NSString, NSTextField, _NSTouchBarCustomizationPaletteCheckboxBox;

__attribute__((visibility("hidden")))
@interface NSTouchBarCustomizationPaletteCheckbox : NSControl <NSAccessibilityCheckBox>
{
    _NSTouchBarCustomizationPaletteCheckboxBox *_box;
    NSTextField *_titleField;
    NSStackView *_stackView;
    NSString *_title;
    BOOL _isHighlighted;
    BOOL _isChecked;
    id _autounbinder;
    double _paletteScaleFactor;
}

+ (id)keyPathsForValuesAffecting_stackViewSpacing;
+ (id)keyPathsForValuesAffecting_labelFontAttributedString;
+ (id)keyPathsForValuesAffecting_labelFontSize;
+ (id)checkboxWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
@property(copy) NSString *title; // @synthesize title=_title;
@property double paletteScaleFactor; // @synthesize paletteScaleFactor=_paletteScaleFactor;
@property(getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_isHighlighted;
@property(getter=isChecked) BOOL checked; // @synthesize checked=_isChecked;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)lastBaselineAnchor;
- (id)firstBaselineAnchor;
@property(readonly) double _stackViewSpacing;
- (void)_accessibilityDisplayOptionsDidChange:(id)arg1;
- (id)_labelTextColor;
@property(readonly, copy) NSAttributedString *_labelFontAttributedString;
@property(readonly) double _labelFontSize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_autounbinder;
- (oneway void)release;
- (id)accessibilityRole;
- (id)accessibilityValue;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

