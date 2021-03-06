//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableSet, NSURL;

@interface TCQuickTimeExtractor : NSObject
{
    unsigned long long _depth;
    NSData *_data;
    NSURL *_relativeToURL;
    NSMutableSet *_externalUrls;
}

@property(readonly, nonatomic) NSMutableSet *externalUrls; // @synthesize externalUrls=_externalUrls;
@property(readonly, copy, nonatomic) NSURL *relativeToURL; // @synthesize relativeToURL=_relativeToURL;
@property(readonly, retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) unsigned long long depth; // @synthesize depth=_depth;
- (void).cxx_destruct;
- (BOOL)extractExternalUrls;
- (void)scanRecord:(const char **)arg1 parentEnd:(const char *)arg2;
- (id)initWithData:(id)arg1 relativeToURL:(id)arg2;

@end

