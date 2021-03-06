//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_os_log>, NSString;

@interface AMSLogConfig : NSObject <NSCopying, NSMutableCopying>
{
    NSString *_category;
    NSString *_subsystem;
    NSObject<OS_os_log> *_backingOSLogObject;
    NSObject<OS_dispatch_queue> *_propertyAccessQueue;
}

+ (BOOL)_debugLogsEnabled:(id)arg1;
+ (id)_createLogConfigWithBaseConfig:(id)arg1 subystem:(id)arg2 category:(id)arg3;
+ (id)_createLogConfigWithSubsystem:(id)arg1 category:(id)arg2;
+ (id)sharedMediaServiceOwnerConfig;
+ (id)sharedUserNotificationConfig;
+ (id)sharedPushNotificationConfig;
+ (id)sharedPurchaseConfig;
+ (id)sharedPrivacyConfig;
+ (id)sharedMediaConfig;
+ (id)sharedKeychainConfig;
+ (id)sharedFollowUpConfig;
+ (id)sharedBagCacheConfig;
+ (id)sharedBagConfig;
+ (id)sharedAttestationConfig;
+ (id)sharedAnisetteConfig;
+ (id)sharedAccountsSyncPluginConfig;
+ (id)sharedAccountsStorefrontConfig;
+ (id)sharedAccountsOversizeConfig;
+ (id)sharedAccountsNotificationPluginConfig;
+ (id)sharedAccountsMigrationConfigOversize;
+ (id)sharedAccountsMigrationConfig;
+ (id)sharedAccountsLogoutConfig;
+ (id)sharedDeviceOffersConfig;
+ (id)sharedDataMigrationConfig;
+ (id)sharedAccountsCookiesConfig;
+ (id)sharedAccountsConfig;
+ (id)sharedAccountsDaemonConfig;
+ (id)sharedAccountsAuthenticationPluginConfig;
+ (id)sharedConfigOversize;
+ (id)sharedConfig;
@property(retain) NSObject<OS_dispatch_queue> *propertyAccessQueue; // @synthesize propertyAccessQueue=_propertyAccessQueue;
@property(retain) NSObject<OS_os_log> *backingOSLogObject; // @synthesize backingOSLogObject=_backingOSLogObject;
@property(copy) NSString *subsystem; // @synthesize subsystem=_subsystem;
@property(copy) NSString *category; // @synthesize category=_category;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(readonly) NSObject<OS_os_log> *OSLogObject;
@property(readonly) BOOL debugLogsEnabled;
- (id)init;

@end

