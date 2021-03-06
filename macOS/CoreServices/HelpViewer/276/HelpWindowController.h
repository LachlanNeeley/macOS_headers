//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "NSWindowDelegate-Protocol.h"

@class HVHelpViewController, HelpSearchController, HelpViewToolbarController, NSString;

@interface HelpWindowController : NSWindowController <NSWindowDelegate>
{
    HVHelpViewController *_helpViewController;
    NSString *_initialPath;
    HelpViewToolbarController *_toolbarController;
    HelpSearchController *_helpSearchController;
}

@property(readonly) HVHelpViewController *helpViewController; // @synthesize helpViewController=_helpViewController;
- (void).cxx_destruct;
- (void)_createToolbarController;
- (void)swipeWithEvent:(id)arg1;
- (void)updateWindowState:(id)arg1;
- (BOOL)window:(id)arg1 willHandleMouseDownEvent:(id)arg2;
- (id)windowWillReturnFieldEditor:(id)arg1 toObject:(id)arg2;
- (void)windowWillClose:(id)arg1;
- (id)windowNibName;
- (void)setDocumentEdited:(BOOL)arg1;
- (void)bagDidFailToLoad;
- (void)bagDidUpdate;
- (void)windowDidLoad;
- (BOOL)loadFile:(id)arg1;
- (id)helpSearchController;
- (id)toolbarController;
- (void)setInitialPath:(id)arg1;
- (id)initialPath;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

