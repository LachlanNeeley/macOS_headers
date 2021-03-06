//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/_MKResizingLayer.h>

@class CALayer, NSColor;

@interface _MKCalloutLayer : _MKResizingLayer
{
    struct CGImage *_contentImage;
    CALayer *_leftLayer;
    CALayer *_rightLayer;
    long long _arrowPosition;
    double _arrowOffset;
    NSColor *_fillColor;
    NSColor *_strokeColor;
}

@property(retain, nonatomic) NSColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(retain, nonatomic) NSColor *fillColor; // @synthesize fillColor=_fillColor;
@property(nonatomic) double arrowOffset; // @synthesize arrowOffset=_arrowOffset;
@property(nonatomic) long long arrowPosition; // @synthesize arrowPosition=_arrowPosition;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)setContentsScale:(double)arg1;
- (id)init;
- (struct CGImage *)_newContentImage;
- (struct CGSize)_contentSize;

@end

