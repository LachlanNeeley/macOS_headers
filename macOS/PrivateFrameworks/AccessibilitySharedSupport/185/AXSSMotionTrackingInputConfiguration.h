//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSDictionary, NSSet;

@interface AXSSMotionTrackingInputConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _allowSeparateInputForExpressions;
    NSArray *_orderedInputPreference;
    NSSet *_allowedTrackingTypes;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) BOOL allowSeparateInputForExpressions; // @synthesize allowSeparateInputForExpressions=_allowSeparateInputForExpressions;
@property(copy, nonatomic) NSSet *allowedTrackingTypes; // @synthesize allowedTrackingTypes=_allowedTrackingTypes;
@property(copy, nonatomic) NSArray *orderedInputPreference; // @synthesize orderedInputPreference=_orderedInputPreference;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqualToMotionTrackingInputConfiguration:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)supportsTrackingType:(unsigned long long)arg1;
- (id)description;
@property(readonly, copy, nonatomic) NSArray *orderedCameraInputPreference;
@property(readonly, copy, nonatomic) NSDictionary *plistDictionary;
- (id)initWithPlistDictionary:(id)arg1;
- (id)init;
- (id)initWithOrderedInputPreference:(id)arg1 allowedTrackingTypes:(id)arg2 allowSeparateInputForExpressions:(BOOL)arg3;

@end

