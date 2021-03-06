//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CIFilter.h"

@class NSArray, NSNumber;

@interface NUBrushMaskGenerator : CIFilter
{
    NSNumber *_inputRadius;
    NSNumber *_inputSoftness;
    NSNumber *_inputOpacity;
    NSArray *_inputPoints;
    NSNumber *_inputTiled;
    NSNumber *_inputClosed;
    NSNumber *_inputPressureMode;
}

@property(retain, nonatomic) NSNumber *inputPressureMode; // @synthesize inputPressureMode=_inputPressureMode;
@property(retain, nonatomic) NSNumber *inputClosed; // @synthesize inputClosed=_inputClosed;
@property(retain, nonatomic) NSNumber *inputTiled; // @synthesize inputTiled=_inputTiled;
@property(retain, nonatomic) NSArray *inputPoints; // @synthesize inputPoints=_inputPoints;
@property(retain, nonatomic) NSNumber *inputOpacity; // @synthesize inputOpacity=_inputOpacity;
@property(retain, nonatomic) NSNumber *inputSoftness; // @synthesize inputSoftness=_inputSoftness;
@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius=_inputRadius;
- (void).cxx_destruct;
- (id)outputImage;
- (void)setDefaults;
- (id)_applyOpacity:(double)arg1 toMask:(id)arg2;

@end

