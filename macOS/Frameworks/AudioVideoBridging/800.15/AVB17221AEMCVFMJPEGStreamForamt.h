//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AEMCVFStreamFormat.h>

@interface AVB17221AEMCVFMJPEGStreamForamt : AVB17221AEMCVFStreamFormat
{
}

+ (id)keyPathsForValuesAffectingHeight;
+ (id)keyPathsForValuesAffectingWidth;
+ (id)keyPathsForValuesAffectingType;
+ (id)keyPathsForValuesAffectingProgressiveScan;
- (unsigned int)maximumPDUSize;
@property unsigned char height;
@property unsigned char width;
@property unsigned char type;
@property(getter=isProgressiveScan) BOOL progressiveScan;
- (id)init;

@end

