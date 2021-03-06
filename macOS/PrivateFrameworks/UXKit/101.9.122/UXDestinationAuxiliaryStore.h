//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UXKit/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, NSString;

@interface UXDestinationAuxiliaryStore : NSObject <NSSecureCoding>
{
    NSMutableDictionary *_namespaceDict;
    NSMutableDictionary *_globalDict;
    NSString *_lastAction;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_dictionaryForNamespace:(id)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_allowedClassesForNSCoding;
- (id)nextActionForNamespace:(id)arg1;
- (void)setNextAction:(id)arg1 forNamespace:(id)arg2;
- (id)dictionaryWithValuesForKeys:(id)arg1 inNamespace:(id)arg2;
- (void)addEntriesFromDictionary:(id)arg1 inNamespace:(id)arg2;
- (id)valueForKey:(id)arg1 inNamespace:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2 inNamespace:(id)arg3;
- (id)init;

@end

