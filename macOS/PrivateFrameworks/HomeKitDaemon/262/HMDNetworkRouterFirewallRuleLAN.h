//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDNetworkRouterFirewallRule.h>

@interface HMDNetworkRouterFirewallRuleLAN : HMDNetworkRouterFirewallRule
{
    BOOL _allowInterAccessoryConnections;
    unsigned char _direction;
    BOOL _requiredForHAPFunctionality;
    unsigned long long _purpose;
}

+ (id)createWithJSONDictionary:(struct NSDictionary *)arg1 name:(id)arg2 critical:(BOOL)arg3 purpose:(unsigned long long)arg4 allowInterAccessoryConnections:(BOOL)arg5 direction:(unsigned char)arg6 requiredForHAPFunctionality:(BOOL)arg7 ruleDictionary:(struct NSDictionary *)arg8 error:(id *)arg9;
+ (id)createWithJSONDictionary:(struct NSDictionary *)arg1 error:(id *)arg2;
+ (BOOL)__decodeTransportProtocolFromJSONDictionary:(struct NSDictionary *)arg1 key:(id)arg2 transportProtocol:(unsigned char *)arg3 error:(id *)arg4;
+ (BOOL)__decodeDirection:(struct NSDictionary *)arg1 direction:(unsigned char *)arg2 error:(id *)arg3;
+ (BOOL)__decodeType:(struct NSDictionary *)arg1 type:(unsigned char *)arg2 error:(id *)arg3;
+ (BOOL)__decodeFlags:(struct NSDictionary *)arg1 critical:(char *)arg2 allowInterAccessoryConnections:(char *)arg3 requiredForHAPFunctionality:(char *)arg4 error:(id *)arg5;
+ (BOOL)__decodePurpose:(struct NSDictionary *)arg1 purpose:(unsigned long long *)arg2 error:(id *)arg3;
@property(readonly, nonatomic, getter=isRequiredForHAPFunctionality) BOOL requiredForHAPFunctionality; // @synthesize requiredForHAPFunctionality=_requiredForHAPFunctionality;
@property(readonly, nonatomic) unsigned char direction; // @synthesize direction=_direction;
@property(readonly, nonatomic, getter=areConnectionsWithOtherAccessoriesAllowed) BOOL allowInterAccessoryConnections; // @synthesize allowInterAccessoryConnections=_allowInterAccessoryConnections;
@property(readonly, nonatomic) unsigned long long purpose; // @synthesize purpose=_purpose;
- (struct NSDictionary *)prettyJSONDictionary;
- (id)attributeDescriptions;
- (id)initWithJSONDictionary:(struct NSDictionary *)arg1 name:(id)arg2 critical:(BOOL)arg3 purpose:(unsigned long long)arg4 allowInterAccessoryConnections:(BOOL)arg5 direction:(unsigned char)arg6 requiredForHAPFunctionality:(BOOL)arg7;

@end

