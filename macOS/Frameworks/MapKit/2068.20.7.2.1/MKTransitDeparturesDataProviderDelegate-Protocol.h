//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class GEOMapServiceTraits, MKTransitDeparturesDataProvider;

@protocol MKTransitDeparturesDataProviderDelegate <NSObject>
- (void)transitDeparturesDataProviderDidReload:(MKTransitDeparturesDataProvider *)arg1;
- (void)transitDeparturesDataProviderDidUpdateDepartures:(MKTransitDeparturesDataProvider *)arg1;
- (void)transitDeparturesDataProviderWillUpdateDepartures:(MKTransitDeparturesDataProvider *)arg1;
- (GEOMapServiceTraits *)traitsForTransitDeparturesDataProvider:(MKTransitDeparturesDataProvider *)arg1;
@end

