//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface HIDHelper : NSObject
{
    struct __IOHIDManager *hidManagerRef;
    NSMutableArray *_hidDeviceArray;
}

@property(retain) NSMutableArray *hidDeviceArray; // @synthesize hidDeviceArray=_hidDeviceArray;
@property(nonatomic) struct __IOHIDManager *hidManagerRef; // @synthesize hidManagerRef;
- (void).cxx_destruct;
- (void)deattachDeviceWithHidReference:(void *)arg1 forVendorId:(unsigned long long)arg2 andProductId:(unsigned long long)arg3;
- (void)attachDeviceWithHidReference:(void *)arg1 forVendorId:(unsigned long long)arg2 andProductId:(unsigned long long)arg3;
- (id)hidDeviceForReference:(void *)arg1;
- (id)init;

@end

