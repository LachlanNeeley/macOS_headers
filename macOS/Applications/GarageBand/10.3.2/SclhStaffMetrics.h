//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SclhStaffMetrics : NSObject
{
    int m_absStaffIndex;
    long long m_thisMinX;
    long long m_staffY_min;
    long long m_staffY_max;
    long long m_leftZoneMaxX;
    long long m_clefW;
    long long m_bracketsW;
    long long m_keySigW1;
    long long m_timeSignAndGapW;
    long long m_timeSigW1;
    long long m_timeSigMinX;
    long long m_vabst2;
    struct ScStaffRange m_staffRange0;
    int m_numberOfLines;
}

- (id)description;
- (int)hitTestForStaffPos:(struct CGPoint)arg1 partRect:(struct CGRect *)arg2;
- (void)drawSignature:(const struct ScResolution *)arg1 viewState:(struct ScViewState *)arg2 deltaY:(double)arg3 clockWorld:(struct CLOCKWORLD *)arg4;
- (long long)bracketsW2;
- (long long)thisMinX1;
- (long long)staffY_max1;
- (long long)staffY_min1;
- (void)setup_thisMinX:(long long)arg1 staffY_min:(long long)arg2 staffY_max:(long long)arg3 vabst2:(long long)arg4 clefW:(long long)arg5 keySigW:(long long)arg6 timeSigW:(long long)arg7 timeSignAndGapW:(long long)arg8 maxTimeSignAndGapW:(long long)arg9 staffRange:(struct ScStaffRange)arg10 numberOfLines:(int)arg11 leftZoneMaxX:(long long)arg12 bracketsGroup:(struct ScBracketsGroup *)arg13;
- (struct CGRect)timeSign:(BOOL)arg1;
- (struct CGRect)keySign:(BOOL)arg1;
- (struct CGRect)staffHandle:(BOOL)arg1;
- (BOOL)emergencyStaffHandle;
- (int)timeSignFlags;
- (int)posIndex;
- (int)globalVoiceIndex;
- (int)absStaffIndex;
- (id)initSclhStaffMetrics:(int)arg1;

@end

