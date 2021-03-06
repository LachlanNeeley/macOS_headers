//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKCollaboratorCursor.h"

#import "GSSPAutoEncodable-Protocol.h"

@class TSWPSelection;

@interface TSWPCollaboratorTextCursor : TSKCollaboratorCursor <GSSPAutoEncodable>
{
    TSWPSelection *_textSelection;
}

@property(readonly, nonatomic) TSWPSelection *selection; // @synthesize selection=_textSelection;
- (void).cxx_destruct;
- (id)subselection;
- (id)operationProvider;
- (id)textStorageFromContext:(id)arg1;
- (id)copyWithNewVisualRanges:(id)arg1;
- (id)copyWithNewRange:(struct _NSRange)arg1;
@property(readonly, nonatomic) struct _NSRange range;
- (id)init;
- (id)initWithIdPath:(id)arg1 selection:(id)arg2;
- (void)populateGSSPCollaborationTextSelection:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

