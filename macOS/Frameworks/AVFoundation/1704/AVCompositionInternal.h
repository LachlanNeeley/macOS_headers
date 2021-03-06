//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetInspector, AVAssetInspectorLoader, AVDispatchOnce, NSDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVCompositionInternal : NSObject
{
    struct OpaqueFigMutableComposition *mutableComposition;
    AVDispatchOnce *formatReaderInitializationOnce;
    AVDispatchOnce *assetInspectorInitializationOnce;
    AVDispatchOnce *tracksInitializationOnce;
    struct OpaqueFigFormatReader *formatReader;
    AVAssetInspectorLoader *assetInspectorLoader;
    AVAssetInspector *assetInspector;
    struct CGSize naturalSize;
    NSDictionary *URLAssetInitializationOptions;
    NSMutableArray *tracks;
    AVDispatchOnce *figAssetInitializationOnce;
    struct OpaqueFigAsset *figAsset;
}

@end

