//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PGSuggester.h"

@class NSString, PGSuggestionSession;

@interface PGAbstractSuggester : NSObject <PGSuggester>
{
    PGSuggestionSession *_session;
}

+ (id)assetCollectionFilteringSharedAssetsForAssetCollection:(id)arg1 loggingConnection:(id)arg2;
+ (id)suggestedPersonLocalIdentifiersFromSharingSuggestionResults:(id)arg1 forMomentNodes:(id)arg2 containsUnverifiedPersons:(char *)arg3;
+ (id)sharingSuggestionResultsForMomentNodes:(id)arg1;
+ (id)suggestionSubtypes;
+ (id)suggestionTypes;
+ (id)suggesterWithSession:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak PGSuggestionSession *session; // @synthesize session=_session;
- (id)reasonsForSuggestion:(id)arg1;
- (id)suggestionsWithOptions:(id)arg1 progress:(CDUnknownBlockType)arg2;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

