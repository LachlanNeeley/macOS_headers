//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSImage, NSMatrix, NSMutableAttributedString;

@interface SFPasswordErrorSource : NSObject
{
    NSImage *_iconWarning;
    NSImage *_iconError;
    NSMutableAttributedString *_attrString;
    id _controller;
    NSMatrix *_theMatrix;
    int SFPasswordErrorType;
}

- (id)attrStringForWarning:(id)arg1 type:(int)arg2 font:(id)arg3;
- (void)matrixReloaded;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(int)arg3;
- (int)numberOfRowsInTableView:(id)arg1;
- (void)dealloc;
- (id)init;

@end

