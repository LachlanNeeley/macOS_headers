//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FIRAuthCredential.h"

#import "NSSecureCoding.h"

@class NSString;

@interface FIRGoogleAuthCredential : FIRAuthCredential <NSSecureCoding>
{
    NSString *_IDToken;
    NSString *_accessToken;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)prepareVerifyAssertionRequest:(id)arg1;
- (id)initWithIDToken:(id)arg1 accessToken:(id)arg2;
- (id)initWithProvider:(id)arg1;

@end

