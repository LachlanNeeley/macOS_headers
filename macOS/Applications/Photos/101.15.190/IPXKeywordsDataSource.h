//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSource.h>

@class PHFetchResult;

__attribute__((visibility("hidden")))
@interface IPXKeywordsDataSource : PXSectionedDataSource
{
    PHFetchResult *_keywords;
}

@property(retain, nonatomic) PHFetchResult *keywords; // @synthesize keywords=_keywords;
- (void).cxx_destruct;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (BOOL)_shortcutUsed:(id)arg1;
- (id)suggestedShortcutForKeywordTitle:(id)arg1;
- (id)keywordTitlesWithPrefix:(id)arg1 sort:(BOOL)arg2;
- (long long)numberOfKeywords;
- (id)keywordAtIndex:(long long)arg1;
- (long long)indexForKeywordWithTitle:(id)arg1;
- (id)keywordForShortcut:(id)arg1;
- (id)keywordForTitle:(id)arg1;
- (id)init;
- (id)initWithKeywords:(id)arg1;

@end

