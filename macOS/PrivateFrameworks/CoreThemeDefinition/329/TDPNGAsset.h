//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreThemeDefinition/TDAsset.h>

@class NSSet;

@interface TDPNGAsset : TDAsset
{
    int _exifOrientation;
    unsigned int _fileScaleFactor;
}

- (BOOL)hasProduction;
- (BOOL)hasCursorProduction;
- (unsigned int)fileScaleFactor;
- (void)setFileScaleFactor:(unsigned int)arg1;
- (int)exifOrientation;
- (id)sourceImageWithDocument:(id)arg1;
- (struct CGSize)sourceImageSizeWithDocument:(id)arg1;
- (void)_logError:(id)arg1;

// Remaining properties
@property(nonatomic) BOOL rawData; // @dynamic rawData;
@property(retain, nonatomic) NSSet *renditions; // @dynamic renditions;

@end

