//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface DDLoggerNode : NSObject
{
    id <DDLogger> logger;
    NSObject<OS_dispatch_queue> *loggerQueue;
}

+ (id)nodeWithLogger:(id)arg1 loggerQueue:(id)arg2;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithLogger:(id)arg1 loggerQueue:(id)arg2;

@end

