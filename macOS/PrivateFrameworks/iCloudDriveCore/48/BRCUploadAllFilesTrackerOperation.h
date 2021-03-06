//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iCloudDriveCore/_BRCOperation.h>

#import "BRCAllItemsDidUploadTracker.h"
#import "BRCOperationSubclass.h"
#import "ICDBRCancellable.h"

@class BRCAccountSession, NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface BRCUploadAllFilesTrackerOperation : _BRCOperation <BRCAllItemsDidUploadTracker, ICDBRCancellable, BRCOperationSubclass>
{
    BRCAccountSession *_session;
    NSMutableArray *_mangledIDsStillUploading;
    NSMutableDictionary *_mangledIDsWithRetryError;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)main;
- (void)clientZone:(id)arg1 encounteredErrorRequiringThrotting:(id)arg2;
- (void)clientZone:(id)arg1 didFinishUploadingAllItemsWithError:(id)arg2;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (oneway void)invalidate;
- (void)cancel;
- (id)createActivity;
- (BOOL)shouldRetryForError:(id)arg1;
- (id)initWithSession:(id)arg1 forSyncBubble:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

