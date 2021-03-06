//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSURL;

@interface MTLCaptureDescriptor : NSObject <NSCopying>
{
    id _captureObject;
    long long _destination;
    NSURL *_outputURL;
}

@property(copy, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(nonatomic) long long destination; // @synthesize destination=_destination;
@property(retain, nonatomic) id captureObject; // @synthesize captureObject=_captureObject;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

