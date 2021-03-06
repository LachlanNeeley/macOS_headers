//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GEOMapItemAttribution, GEOPDAttribution, GEOPDPlaceCollection, NSData, NSString;

@interface GEOPlaceCollection : NSObject
{
    GEOPDPlaceCollection *_collection;
    GEOPDAttribution *_dataAttribution;
    GEOMapItemAttribution *_attribution;
}

+ (id)placeCollectionForData:(id)arg1;
- (void).cxx_destruct;
- (id)imageURLforSize:(struct CGSize)arg1;
@property(readonly, nonatomic) unsigned long long placeCount;
@property(readonly, nonatomic) NSString *description;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *actionURLString;
@property(readonly, nonatomic) unsigned long long muid;
@property(readonly, nonatomic) NSData *storageData;
- (void)loadAttribution;
- (id)initWithCollection:(id)arg1 attribution:(id)arg2;

@end

