//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebCore/AbstractPasteboard-Protocol.h>

@class NSArray, NSString;

@interface WebItemProviderPasteboard : NSObject <AbstractPasteboard>
{
    struct RetainPtr<NSArray> _itemProviders;
    struct RetainPtr<NSArray> _supportedTypeIdentifiers;
    struct RetainPtr<NSArray<WebItemProviderRegistrationInfoList *>> _stagedRegistrationInfoLists;
    struct Vector<WTF::RetainPtr<WebItemProviderLoadResult>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> _loadResults;
    long long _numberOfItems;
    long long _changeCount;
    long long _pendingOperationCount;
}

+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) long long pendingOperationCount; // @synthesize pendingOperationCount=_pendingOperationCount;
@property(nonatomic) long long changeCount; // @synthesize changeCount=_changeCount;
@property(nonatomic) long long numberOfItems; // @synthesize numberOfItems=_numberOfItems;
- (id)takeRegistrationLists;
- (void)clearRegistrationLists;
- (void)stageRegistrationLists:(id)arg1;
- (void)enumerateItemProvidersWithBlock:(CDUnknownBlockType)arg1;
- (void)decrementPendingOperationCount;
- (void)incrementPendingOperationCount;
@property(readonly, nonatomic) BOOL hasPendingOperation;
- (id)itemProviderAtIndex:(unsigned long long)arg1;
- (void)doAfterLoadingProvidedContentIntoFileURLs:(CDUnknownBlockType)arg1 synchronousTimeout:(double)arg2;
- (void)doAfterLoadingProvidedContentIntoFileURLs:(CDUnknownBlockType)arg1;
- (id)typeIdentifiersToLoad:(id)arg1;
@property(readonly, nonatomic) long long numberOfFiles;
@property(readonly, nonatomic) NSArray *allDroppedFileURLs;
- (id)fileUploadURLsAtIndex:(unsigned long long)arg1 fileTypes:(id *)arg2;
- (id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (id)dataForPasteboardType:(id)arg1;
- (id)_preLoadedDataConformingToType:(id)arg1 forItemProviderAtIndex:(unsigned long long)arg2;
@property(copy, nonatomic) NSArray *itemProviders;
- (id)pasteboardTypes;
- (void)updateSupportedTypeIdentifiers:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

