//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBSerializable.h"
#import "NSCopying.h"

@class NSString;

@interface DBTEAMTeamFolderInvalidStatusError : NSObject <DBSerializable, NSCopying>
{
    long long _tag;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) long long tag; // @synthesize tag=_tag;
- (BOOL)isEqualToTeamFolderInvalidStatusError:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)tagName;
- (BOOL)isOther;
- (BOOL)isArchiveInProgress;
- (BOOL)isArchived;
- (BOOL)isActive;
- (id)initWithOther;
- (id)initWithArchiveInProgress;
- (id)initWithArchived;
- (id)initWithActive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

