//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FileProvider/FPEnumerationSettings.h>

@class NSArray, NSNumber, NSString;

@interface FPQueryEnumerationSettings : FPEnumerationSettings
{
    NSArray *_allowedProviders;
    NSNumber *_desiredNumberOfItems;
    NSArray *_excludedFileTypes;
    NSArray *_allowedFileTypes;
    NSString *_tagIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(copy) NSString *tagIdentifier; // @synthesize tagIdentifier=_tagIdentifier;
@property(copy) NSArray *allowedFileTypes; // @synthesize allowedFileTypes=_allowedFileTypes;
@property(copy) NSArray *excludedFileTypes; // @synthesize excludedFileTypes=_excludedFileTypes;
@property(copy) NSNumber *desiredNumberOfItems; // @synthesize desiredNumberOfItems=_desiredNumberOfItems;
@property(copy) NSArray *allowedProviders; // @synthesize allowedProviders=_allowedProviders;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

