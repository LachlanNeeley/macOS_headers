//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCInterface;

__attribute__((visibility("hidden")))
@interface PODServiceWeakClientProxy : NSObject
{
    NSXPCInterface *_clientInterface;
    id _protocolHandler;
}

@property(readonly, nonatomic) __weak id protocolHandler; // @synthesize protocolHandler=_protocolHandler;
@property(readonly, nonatomic) NSXPCInterface *clientInterface; // @synthesize clientInterface=_clientInterface;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)initWithClientInterface:(id)arg1 protocolHandler:(id)arg2;

@end

