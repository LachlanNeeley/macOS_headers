//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ActionKit/FATException.h>

@class NSString;

@interface EDAMNotFoundException : FATException
{
    NSString *_identifier;
    NSString *_key;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;

@end

