//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowUI/WFNumberFieldParameterSummaryEditor.h>

@class WFAlert;

@interface WFQuantityFieldParameterSummaryEditor : WFNumberFieldParameterSummaryEditor
{
    WFAlert *_unitAlert;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WFAlert *unitAlert; // @synthesize unitAlert=_unitAlert;
- (id)stateForVariable:(id)arg1;
- (id)stateForEnteredText:(id)arg1;
- (id)variableMenuInitialStateForSlotWithIdentifier:(id)arg1;
- (BOOL)variableMenuSupportsVariableSelectionForSlotWithIdentifier:(id)arg1;
- (void)cancelEditingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4;

@end

