//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MIDISetupManager, NSDate, SelectionManager;

@interface MIDIStudioSetupManager : NSObject
{
    NSDate *inputDataSoundLastTimestamp;
    BOOL _testSetupModeActive;
    MIDISetupManager *_studioSetupManager;
    SelectionManager *_selectionManager;
}

@property(retain) SelectionManager *selectionManager; // @synthesize selectionManager=_selectionManager;
@property(retain) MIDISetupManager *studioSetupManager; // @synthesize studioSetupManager=_studioSetupManager;
- (void)handleEndTestEndpoint:(id)arg1;
- (void)handleStartTestEndpoint:(id)arg1;
- (id)connectionsToEndpoint:(id)arg1;
- (id)connectionsToEntity:(id)arg1;
- (id)connectionsToDevice:(id)arg1;
- (void)playTestSound;
- (void)stopTestForEndpoint:(id)arg1;
- (void)startTestForEndpoint:(id)arg1;
@property(getter=isTestSetupModeActive) BOOL testSetupModeActive; // @synthesize testSetupModeActive=_testSetupModeActive;
- (void)disconnectAllConnections;
- (void)rescanMIDISystem;
- (void)selectAllConnections;
- (void)setSelectedConnections:(id)arg1 withBehavior:(unsigned long long)arg2;
- (id)selectedConnections;
- (void)deselectAll;
- (void)selectAllWidgets;
- (void)setSelectedWidgets:(id)arg1 withBehavior:(unsigned long long)arg2 userInfo:(id)arg3;
- (id)selectedWidgets;
- (id)widgetAtIndex:(unsigned long long)arg1;
- (void)disconnect:(id)arg1;
- (void)connect:(id)arg1 toEndpoint:(id)arg2;
- (id)endpointConnectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)getConnectionCount;
- (unsigned long long)getWidgetCount;
- (void)dealloc;
- (id)init;

@end

