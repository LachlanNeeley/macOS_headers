//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableData, NSString;

@protocol ACFCryptographProtocol <NSObject>
- (void)setLength:(unsigned long long)arg1 toData:(NSMutableData *)arg2;
- (NSData *)compressData:(NSData *)arg1;
- (NSData *)compactDataFromPropertyList:(id)arg1;
- (void)clearKey:(NSMutableData *)arg1;
- (void)fillHMACSuffix:(NSMutableData *)arg1;
- (void)fillEncryptionSuffix:(NSMutableData *)arg1;
- (NSData *)hmac256DataWithData:(NSData *)arg1 key:(NSData *)arg2;
- (NSData *)decrypt3DESCBCData:(NSData *)arg1 withKey:(NSData *)arg2;
- (NSData *)encrypt3DESCBCData:(NSData *)arg1 withKey:(NSData *)arg2 pading:(BOOL)arg3;
- (NSData *)decryptAES128CBCData:(NSData *)arg1 withKey:(NSData *)arg2 initializationVector:(NSData *)arg3 pading:(BOOL)arg4;
- (NSData *)encryptAES128CBCData:(NSData *)arg1 withKey:(NSData *)arg2 initializationVector:(NSData *)arg3 pading:(BOOL)arg4;
- (NSString *)randomStringOfLength:(unsigned long long)arg1;
- (NSData *)randomDataOfLength:(unsigned long long)arg1;
- (NSData *)sha1ContextFinalize:(NSData *)arg1;
- (void)sha1Context:(NSData *)arg1 updateWithData:(NSData *)arg2;
- (NSData *)sha1Context;
- (NSString *)hashStringSHA1WithString:(NSString *)arg1;
- (NSData *)hashDataSHA1WithString:(NSData *)arg1;
- (NSString *)hashStringSHA256WithString:(NSString *)arg1;
- (NSData *)hashDataSHA256WithData:(NSData *)arg1;
- (NSData *)encodeObscuredDataWithString:(NSString *)arg1 length:(unsigned long long)arg2;
- (NSString *)decodeStringWithObscuredData:(NSData *)arg1;
- (NSString *)encodeBase16:(NSData *)arg1;
- (NSData *)decodeBase16:(NSString *)arg1;
- (NSString *)encodeBase64:(NSData *)arg1;
- (NSData *)decodeBase64:(NSString *)arg1;
-     // Error parsing type: @"NSData"32@0:8@"NSData"16^{__SecKey={__CFRuntimeBase=QAQ}^{__SecKeyDescriptor}^v}24, name: signatureForData:withKey:
-     // Error parsing type: @"NSData"32@0:8@"NSData"16^{__SecKey={__CFRuntimeBase=QAQ}^{__SecKeyDescriptor}^v}24, name: encryptData:withKey:
@end

