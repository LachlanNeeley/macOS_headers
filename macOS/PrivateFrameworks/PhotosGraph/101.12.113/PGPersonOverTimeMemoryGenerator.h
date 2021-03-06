//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSString;

@interface PGPersonOverTimeMemoryGenerator : PGFeaturedMemoryGenerator
{
    unsigned long long _numberOfInsufficientlyFacedRejects;
    unsigned long long _numberOfBuildFailureRejects;
    NSString *_personUUID;
}

@property(retain, nonatomic) NSString *personUUID; // @synthesize personUUID=_personUUID;
- (void).cxx_destruct;
- (BOOL)canFallbackToDejunkAndDedupeForShowMore;
- (id)_potentialMemoriesForDryTesting;
- (void)_generateExtendedCuratedSetForMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (id)_computeOverTheTimeFacedAssetsForPersonWithUUID:(id)arg1 inFacedAssets:(id)arg2;

@end

