//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol iTermTextViewAccessibilityHelperDelegate <NSObject>
- (NSString *)accessibilityHelperSelectedText;
- (CDStruct_7a47e81c)accessibilityHelperSelectedRange;
- (void)accessibilityHelperSetSelectedRange:(CDStruct_7a47e81c)arg1;
- (CDStruct_1ef3fb1f)accessibilityHelperCursorCoord;
- (struct CGRect)accessibilityHelperFrameForCoordRange:(CDStruct_7a47e81c)arg1;
- (CDStruct_1ef3fb1f)accessibilityHelperCoordForPoint:(struct CGPoint)arg1;
- (int)accessibilityHelperNumberOfLines;
- (int)accessibilityHelperWidth;
- (struct screen_char_t *)accessibilityHelperLineAtIndex:(int)arg1;
@end

