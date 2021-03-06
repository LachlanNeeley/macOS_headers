//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GQDNameMappable-Protocol.h"
#import "ICExportable-Protocol.h"

@class GQDBGAbstractSlide, GQDBGBuildAttributes, GQDDrawable, NSString;

@interface GQDBGBuild : NSObject <ICExportable, GQDNameMappable>
{
    GQDDrawable *mBuiltInfo;
    GQDBGBuildAttributes *mRenderingStyle;
    double mDuration;
    unsigned long long mChunkingStyle;
    BOOL mIsChunkingStyleDowngraded;
    NSString *mFilter;
    GQDBGAbstractSlide *mSlide;
    char *mUid;
}

+ (const struct StateSpec *)stateForReading;
@property(nonatomic) GQDBGAbstractSlide *slide; // @synthesize slide=mSlide;
@property(copy, nonatomic) NSString *filter; // @synthesize filter=mFilter;
@property(nonatomic) BOOL isChunkingStyleDowngraded; // @synthesize isChunkingStyleDowngraded=mIsChunkingStyleDowngraded;
@property(nonatomic) unsigned long long chunkingStyle; // @synthesize chunkingStyle=mChunkingStyle;
@property(nonatomic) double duration; // @synthesize duration=mDuration;
@property(retain, nonatomic) GQDBGBuildAttributes *renderingStyle; // @synthesize renderingStyle=mRenderingStyle;
@property(retain, nonatomic) GQDDrawable *builtInfo; // @synthesize builtInfo=mBuiltInfo;
- (const char *)uid;
- (BOOL)isGizmo;
- (void)dealloc;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;
- (id)initFromNativeBuild:(id)arg1 exporter:(id)arg2;
- (BOOL)encodeWithExporter:(id)arg1;
- (void)encodeAttributesWithExporter:(id)arg1;
- (char *)elementName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

