//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CommerceKit/CKAccountAuthentication.h>

@class NSMutableData, NSTimer, NSURLConnection;

@interface CKAppleIDAuthentication : CKAccountAuthentication
{
    NSTimer *_timeoutTimer;
    NSMutableData *_receivedData;
    NSURLConnection *_urlConnection;
}

- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)stop;
- (BOOL)start;
- (id)_createRequest;
- (id)_convertDictionaryToXMLData:(id)arg1;
- (void)_addDict:(id)arg1 toData:(id)arg2 withIndent:(long long)arg3;
- (id)_convertXMLDataToDictionary:(id)arg1;
- (void)_dictionaryFromXMLNode:(id)arg1 dictionary:(id)arg2;
- (void)_cleanupURLConnection;

@end

