//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString, NSXPCConnection;

@protocol PLTrackableRequest
@property(nonatomic) unsigned long long signpostID;
@property __weak id <PLTrackableRequestDelegate> delegate;
@property(readonly) NSString *taskIdentifier;
@property(readonly) NSXPCConnection *clientConnection;
- (void)runDaemonSide;
- (void)cancel;
@end

