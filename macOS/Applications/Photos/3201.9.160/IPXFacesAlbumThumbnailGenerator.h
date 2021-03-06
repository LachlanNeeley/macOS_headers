//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IPXFacesAlbumThumbnailInfo, PFDispatchQueue, RDDatabase;

@interface IPXFacesAlbumThumbnailGenerator : NSObject
{
    struct PFDirectMessagingMulticaster *_changeMulticaster;
    RDDatabase *_database;
    IPXFacesAlbumThumbnailInfo *_facesAlbumThumbnail;
    PFDispatchQueue *_facesAlbumRenderDispatchQueue;
}

+ (id)thumbnailGeneratorForDatabase:(id)arg1;
- (void).cxx_destruct;
- (struct CGColorSpace *)deviceRGBSpace;
- (struct CGImage *)emptyFacesAlbumCGImage;
- (struct CGImage *)newRenderedThumbnailImageForFaceTiles:(id)arg1 resolution:(unsigned long long)arg2;
- (void)renderFourPersonLayoutForTiles:(id)arg1 inContext:(struct CGContext *)arg2 withResolution:(long long)arg3;
- (void)renderComositionLayerForTiles:(id)arg1 inContext:(struct CGContext *)arg2 withResolution:(long long)arg3 radiusFraction:(double)arg4 positionFractions:(struct CGPoint *)arg5;
- (struct CGPoint)pointForRequestedResolution:(long long)arg1 withFraction:(struct CGPoint)arg2;
- (id)faceLayerForTile:(id)arg1 resolution:(long long)arg2;
- (id)faceTilesForPersonType:(long long)arg1 sortComparator:(CDUnknownBlockType)arg2 limit:(unsigned long long)arg3;
- (void)beginRenderWithResolution:(long long)arg1;
- (void)notifyPeopleCountChanged;
- (void)invalidateThumbnailForFaceAlbum;
- (struct CGImage *)bestThumbnailForFacesAlbumWithResolution:(long long)arg1 colorSpace:(id)arg2;
- (id)thumbnailDiskCacheKey;
- (void)removeChangeReceiver:(id)arg1;
- (void)addChangeReceiver:(id)arg1;
- (struct PFDirectMessagingMulticaster *)_changeMulticasterAllowingCreation:(BOOL)arg1;
- (struct PFDirectMessagingMulticaster *)_newChangeMulticaster;
- (id)initWithDatabase:(id)arg1;

@end

