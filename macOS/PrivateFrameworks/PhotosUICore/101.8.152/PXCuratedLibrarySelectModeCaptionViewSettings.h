//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@interface PXCuratedLibrarySelectModeCaptionViewSettings : PXSettings
{
    double _legibilityGradientAlpha;
    double _legibilityGradientHeight;
    double _topAlignedLabelOffset;
    double _overBackgroundBottomDistance;
    double _appearanceAnimationDuration;
}

+ (id)sharedInstance;
@property(nonatomic) double appearanceAnimationDuration; // @synthesize appearanceAnimationDuration=_appearanceAnimationDuration;
@property(nonatomic) double overBackgroundBottomDistance; // @synthesize overBackgroundBottomDistance=_overBackgroundBottomDistance;
@property(nonatomic) double topAlignedLabelOffset; // @synthesize topAlignedLabelOffset=_topAlignedLabelOffset;
@property(nonatomic) double legibilityGradientHeight; // @synthesize legibilityGradientHeight=_legibilityGradientHeight;
@property(nonatomic) double legibilityGradientAlpha; // @synthesize legibilityGradientAlpha=_legibilityGradientAlpha;
- (void)setDefaultValues;
- (id)parentSettings;

@end

