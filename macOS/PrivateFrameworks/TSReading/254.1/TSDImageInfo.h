//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TSReading/TSDMediaInfo.h>

#import <TSReading/TSDContainerInfo-Protocol.h>
#import <TSReading/TSDMixing-Protocol.h>
#import <TSReading/TSDReducableInfo-Protocol.h>
#import <TSReading/TSKTransformableObject-Protocol.h>
#import <TSReading/TSSPresetSource-Protocol.h>
#import <TSReading/TSSThemedObject-Protocol.h>

@class NSObject, NSString, TSDBezierPath, TSDImageAdjustments, TSDInfoGeometry, TSDMaskInfo, TSDMediaStyle, TSPData, TSPObject;
@protocol TSDContainerInfo, TSDOwningAttachment;

@interface TSDImageInfo : TSDMediaInfo <TSDContainerInfo, TSDMixing, TSSPresetSource, TSSThemedObject, TSKTransformableObject, TSDReducableInfo>
{
    TSPData *mImageData;
    TSPData *mThumbnailImageData;
    TSPData *mOriginalImageData;
    BOOL mInterpretsUntaggedImageDataAsGeneric;
    TSDImageAdjustments *mImageAdjustments;
    TSPData *mAdjustedImageData;
    TSPData *mThumbnailAdjustedImageData;
    TSPData *mEnhancedImageData;
    TSDMediaStyle *mStyle;
    TSDMaskInfo *mMaskInfo;
    TSDBezierPath *mInstantAlphaPath;
    TSDBezierPath *mTracedPath;
    struct CGSize mNaturalSize;
}

+ (id)presetKinds;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3 reservedCount:(unsigned long long)arg4;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (id)bootstrapPropertyMapForPresetIndex:(unsigned long long)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (void)adjustIncomingImageGeometry:(id)arg1 maskGeometry:(id)arg2 forImageData:(id)arg3 maskedWithInstantAlphaPath:(id)arg4 withNaturalSize:(struct CGSize)arg5 forTargetImageGeometry:(id)arg6 withTargetMaskGeometry:(id)arg7;
@property(retain, nonatomic) TSPData *thumbnailAdjustedImageData; // @synthesize thumbnailAdjustedImageData=mThumbnailAdjustedImageData;
@property(retain, nonatomic) TSPData *adjustedImageData; // @synthesize adjustedImageData=mAdjustedImageData;
@property(copy, nonatomic) TSDImageAdjustments *imageAdjustments; // @synthesize imageAdjustments=mImageAdjustments;
@property(retain, nonatomic) TSDBezierPath *instantAlphaPath; // @synthesize instantAlphaPath=mInstantAlphaPath;
@property(retain, nonatomic) TSDMaskInfo *maskInfo; // @synthesize maskInfo=mMaskInfo;
- (id)style;
@property(retain, nonatomic) TSPData *originalImageData; // @synthesize originalImageData=mOriginalImageData;
@property(retain, nonatomic) TSPData *thumbnailImageData; // @synthesize thumbnailImageData=mThumbnailImageData;
@property(retain, nonatomic) TSPData *imageData; // @synthesize imageData=mImageData;
- (void)acceptVisitor:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
@property(nonatomic) struct CGSize naturalSize;
@property(readonly, nonatomic) TSDBezierPath *tracedPath;
- (void)updateGeometryToReplaceMediaInfo:(id)arg1;
- (struct CGPoint)centerForReplacingWithNewMedia;
- (BOOL)isOpaque;
- (BOOL)isValid;
- (BOOL)isPDF;
- (id)updatedMaskInfoGeometryForImageDraggedBy:(struct CGPoint)arg1;
- (id)defaultMaskInfo;
- (id)defaultMaskInfoWithContext:(id)arg1;
- (BOOL)maskCanBeReset;
- (BOOL)isMasked;
- (id)objectForProperty:(int)arg1;
- (struct CGSize)rawDataSize;
- (struct CGSize)defaultOriginalSize;
- (struct CGSize)originalSize;
- (void)setStyle:(id)arg1;
- (id)i_thumbnailForImageData:(id)arg1;
@property(nonatomic) BOOL interpretsUntaggedImageDataAsGeneric;
- (id)mediaFileType;
- (id)mediaDisplayName;
- (struct CGSize)targetSizeForImageData:(id)arg1 associatedHint:(id)arg2;
- (id)imageDatasForReducingFileSizeWithAssociatedHints;
- (struct CGAffineTransform)computeFullTransform;
- (id)geometryWithMask;
- (id)childInfos;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property(copy, nonatomic) TSDInfoGeometry *geometry;
@property(readonly, nonatomic) TSDMediaStyle *imageStyle;
- (id)presetKind;
- (Class)repClass;
- (Class)layoutClass;
- (Class)styleClass;
- (void)setExteriorTextWrap:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (id)copyWithContext:(id)arg1 style:(id)arg2;
- (void)dealloc;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 imageData:(id)arg4 originalImageData:(id)arg5;
@property(retain, nonatomic) TSPData *enhancedImageData;

// Remaining properties
@property(readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText; // @dynamic anchoredToText;
@property(readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText; // @dynamic floatingAboveText;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText; // @dynamic inlineWithText;
@property(nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment; // @dynamic owningAttachment;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse; // @dynamic owningAttachmentNoRecurse;
@property(readonly) Class superclass;

@end

