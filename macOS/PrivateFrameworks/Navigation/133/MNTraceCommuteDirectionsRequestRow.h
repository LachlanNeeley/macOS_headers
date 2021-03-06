//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEODirectionsRequest, GEODirectionsResponse, NSError;

@interface MNTraceCommuteDirectionsRequestRow : NSObject
{
    unsigned long long _destinationID;
    double _requestTimestamp;
    double _responseTimestamp;
    GEODirectionsRequest *_request;
    GEODirectionsResponse *_response;
    NSError *_responseError;
}

@property(retain, nonatomic) NSError *responseError; // @synthesize responseError=_responseError;
@property(retain, nonatomic) GEODirectionsResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) GEODirectionsRequest *request; // @synthesize request=_request;
@property(nonatomic) double responseTimestamp; // @synthesize responseTimestamp=_responseTimestamp;
@property(nonatomic) double requestTimestamp; // @synthesize requestTimestamp=_requestTimestamp;
@property(nonatomic) unsigned long long destinationID; // @synthesize destinationID=_destinationID;
- (void).cxx_destruct;

@end

