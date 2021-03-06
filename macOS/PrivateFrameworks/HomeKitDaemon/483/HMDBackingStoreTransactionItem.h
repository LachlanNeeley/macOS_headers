//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

#import "HMDBackingStoreChangeObject.h"

@class HMDBackingStoreModelObject, HMFMessage, NSSet, NSString;

@interface HMDBackingStoreTransactionItem : HMFObject <HMDBackingStoreChangeObject>
{
    HMDBackingStoreModelObject *_change;
    NSSet *_dependentUUIDs;
    HMFMessage *_message;
}

@property(readonly, nonatomic) HMFMessage *message; // @synthesize message=_message;
@property(readonly, nonatomic) NSSet *dependentUUIDs; // @synthesize dependentUUIDs=_dependentUUIDs;
@property(readonly, nonatomic) HMDBackingStoreModelObject *change; // @synthesize change=_change;
- (void).cxx_destruct;
- (id)initWithChange:(id)arg1 message:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

