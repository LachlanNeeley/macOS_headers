//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeUI/HMHomeManagerDelegatePrivate-Protocol.h>

@class HFHomeKitDispatcher, HMHome, HMHomeManager;

@protocol HFHomeManagerObserver <HMHomeManagerDelegatePrivate>

@optional
- (void)homeManager:(HMHomeManager *)arg1 didUpdateLocationSensingAvailability:(BOOL)arg2;
- (void)homeManagerDidFinishUnknownChange:(HMHomeManager *)arg1;
- (void)homeManagerDidFinishInitialDatabaseLoad:(HMHomeManager *)arg1;
- (void)homeKitDispatcher:(HFHomeKitDispatcher *)arg1 manager:(HMHomeManager *)arg2 didChangeHome:(HMHome *)arg3;
@end

