//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface PGHighlightItemEnrichment : NSObject
{
    id <PGHighlightItemEnrichmentRule> _rule;
    NSDictionary *_contextualKeyAssetByHighlighItemUUID;
}

@property(readonly, nonatomic) NSDictionary *contextualKeyAssetByHighlighItemUUID; // @synthesize contextualKeyAssetByHighlighItemUUID=_contextualKeyAssetByHighlighItemUUID;
@property(readonly, nonatomic) id <PGHighlightItemEnrichmentRule> rule; // @synthesize rule=_rule;
- (void).cxx_destruct;
- (void)enrichHighlightItemLists:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)initWithRule:(id)arg1 contextualKeyAssetByHighlighItemUUID:(id)arg2;

@end

