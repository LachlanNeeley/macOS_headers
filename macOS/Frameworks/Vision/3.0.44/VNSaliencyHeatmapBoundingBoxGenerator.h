//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Vision/VNEspressoModelFileBasedDetector.h>

__attribute__((visibility("hidden")))
@interface VNSaliencyHeatmapBoundingBoxGenerator : VNEspressoModelFileBasedDetector
{
}

+ (id)configurationOptionKeysForDetectorKey;
+ (void)recordDefaultConfigurationOptionsInDictionary:(id)arg1;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;
- (BOOL)supportsProcessingDevice:(id)arg1;
- (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1;
- (id)espressoModelFileNameForConfigurationOptions:(id)arg1;
- (struct __CVBuffer *)_createScaledOneComponent32FloatPixelBufferFromImageBuffer:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)_observationsForOneComponent32FloatPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2 regionOfInterest:(struct CGRect)arg3 error:(id *)arg4;

@end

