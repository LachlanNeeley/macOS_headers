//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _CDInteractionStore;

@interface BMInteractionProvider : NSObject
{
    _CDInteractionStore *_interactionStore;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _CDInteractionStore *interactionStore; // @synthesize interactionStore=_interactionStore;
- (id)interactionEventsForTypes:(id)arg1 error:(id *)arg2;
- (id)batchFetchedPhotoSuggestionsForInteractions:(id)arg1;
- (id)init;
- (id)initWithInteractionStore:(id)arg1;

@end

