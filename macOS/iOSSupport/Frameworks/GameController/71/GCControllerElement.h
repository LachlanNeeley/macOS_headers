//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GCController;

@interface GCControllerElement : NSObject
{
    GCControllerElement *_collection;
    GCController *_controller;
}

@property(nonatomic) __weak GCController *controller; // @synthesize controller=_controller;
@property(nonatomic) __weak GCControllerElement *collection; // @synthesize collection=_collection;
- (void).cxx_destruct;
- (BOOL)_setValue:(float)arg1 queue:(id)arg2;
- (BOOL)_setValue:(float)arg1;
@property(readonly, nonatomic, getter=isAnalog) BOOL analog;
- (float)value;
- (int)getAndResetTimesPressed;

@end

