//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBSerializable.h"
#import "NSCopying.h"

@class DBAUTHRateLimitReason, NSNumber, NSString;

@interface DBAUTHRateLimitError : NSObject <DBSerializable, NSCopying>
{
    DBAUTHRateLimitReason *_reason;
    NSNumber *_retryAfter;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) NSNumber *retryAfter; // @synthesize retryAfter=_retryAfter;
@property(readonly, nonatomic) DBAUTHRateLimitReason *reason; // @synthesize reason=_reason;
- (void).cxx_destruct;
- (BOOL)isEqualToRateLimitError:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithReason:(id)arg1;
- (id)initWithReason:(id)arg1 retryAfter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

