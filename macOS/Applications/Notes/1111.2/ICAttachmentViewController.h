//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class ICAttachment, ICTextAttachment, NSRegularExpression;

@interface ICAttachmentViewController : NSViewController
{
    BOOL _forManualRendering;
    BOOL _isInResponderChain;
    ICAttachment *_attachment;
    ICTextAttachment *_textAttachment;
    NSRegularExpression *_highlightPatternRegex;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSRegularExpression *highlightPatternRegex; // @synthesize highlightPatternRegex=_highlightPatternRegex;
@property(readonly, nonatomic) BOOL isInResponderChain; // @synthesize isInResponderChain=_isInResponderChain;
@property(nonatomic) BOOL forManualRendering; // @synthesize forManualRendering=_forManualRendering;
@property(nonatomic) __weak ICTextAttachment *textAttachment; // @synthesize textAttachment=_textAttachment;
@property(readonly, nonatomic) __weak ICAttachment *attachment; // @synthesize attachment=_attachment;
- (BOOL)_canShowWhileLocked;
- (void)zoomFactorOrInsetsDidChange;
- (void)contentSizeCategoryDidChange;
- (void)prepareForPrinting;
- (void)loadView;
- (id)initWithTextAttachment:(id)arg1 forManualRendering:(BOOL)arg2 layoutManager:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

