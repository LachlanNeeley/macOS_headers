//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BrailleClientDispatcher : NSObject
{
}

- (void)handleBrailleTableFailedToLoad:(id)arg1;
- (void)handleFailedToLoadBluetoothDevice:(id)arg1;
- (void)handleBrailleKeyMemorize:(id)arg1;
- (void)handleBrailleKeyWillMemorize:(id)arg1;
- (void)handleBrailleKeypress:(id)arg1;
- (void)handleBrailleConfigurationChanged:(id)arg1;
- (void)handleBrailleDidReconnect:(id)arg1;
- (void)handleBrailleDidDisconnect:(id)arg1;

@end

