//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CalCancelable.h"

@class NSRunLoop;

@interface CalCancelablePerformSelector : NSObject <CalCancelable>
{
    CDUnknownBlockType _block;
    NSRunLoop *_runloop;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSRunLoop *runloop; // @synthesize runloop=_runloop;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void)_performBlock:(CDUnknownBlockType)arg1;
- (void)cancel;
- (void)performAfterDelay:(double)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

