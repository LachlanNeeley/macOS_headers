//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMALayoutInspectingInspectorPaneController.h"

@class NSStepper, NSTextField;

@interface TMAConnectionLineInspectorPaneController : TMALayoutInspectingInspectorPaneController
{
    NSStepper *_leftOutsetStepper;
    NSStepper *_rightOutsetStepper;
    NSTextField *_connectionLabel;
    NSTextField *_offsetLabel;
    NSTextField *_startLabel;
    NSTextField *_endLabel;
    NSTextField *_startField;
    NSTextField *_endField;
}

@property(nonatomic) NSTextField *endField; // @synthesize endField=_endField;
@property(nonatomic) NSTextField *startField; // @synthesize startField=_startField;
@property(nonatomic) NSTextField *endLabel; // @synthesize endLabel=_endLabel;
@property(nonatomic) NSTextField *startLabel; // @synthesize startLabel=_startLabel;
@property(nonatomic) NSTextField *offsetLabel; // @synthesize offsetLabel=_offsetLabel;
@property(nonatomic) NSTextField *connectionLabel; // @synthesize connectionLabel=_connectionLabel;
@property(nonatomic) NSStepper *rightOutsetStepper; // @synthesize rightOutsetStepper=_rightOutsetStepper;
@property(nonatomic) NSStepper *leftOutsetStepper; // @synthesize leftOutsetStepper=_leftOutsetStepper;
- (void)dealloc;
- (void)loadView;
- (id)nibName;
- (id)keyPathForLayouts;

@end

