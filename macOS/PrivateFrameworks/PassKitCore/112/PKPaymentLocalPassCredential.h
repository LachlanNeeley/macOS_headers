//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPaymentCredential.h>

@class NSString, PKPaymentPass;

@interface PKPaymentLocalPassCredential : PKPaymentCredential
{
    NSString *_serialNumber;
    NSString *_passTypeIdentifier;
    PKPaymentPass *_paymentPass;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) PKPaymentPass *paymentPass; // @synthesize paymentPass=_paymentPass;
@property(copy, nonatomic) NSString *passTypeIdentifier; // @synthesize passTypeIdentifier=_passTypeIdentifier;
@property(copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
- (id)description;
- (unsigned long long)hash;
- (BOOL)_isEqualToCredential:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithPaymentPass:(id)arg1;
- (id)init;

@end

