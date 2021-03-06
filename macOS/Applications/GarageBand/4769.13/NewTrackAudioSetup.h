//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface NewTrackAudioSetup : NSObject
{
}

+ (id)inputDriverIDForOutputDriverID:(id)arg1;
+ (long long)firstOutBusIndexForChannelMode:(int)arg1 inDocument:(struct CDocumentLogic *)arg2;
+ (long long)firstInBusIndexForChannelMode:(int)arg1 inDocument:(struct CDocumentLogic *)arg2;
+ (long long)nrOfOutputsForChannelMode:(int)arg1 audioDeviceSetup:(id)arg2;
+ (long long)nrOfInputsForChannelMode:(int)arg1 audioDeviceSetup:(id)arg2;
+ (long long)globalIndexOfOutputWithType:(int)arg1 withIndex:(int)arg2 withChannelMode:(int)arg3 inDocument:(struct CDocumentLogic *)arg4 audioDeviceSetup:(id)arg5 GetType:(int *)arg6 getLocalIndex:(int *)arg7;
+ (long long)globalIndexOfInputWithType:(int)arg1 withIndex:(int)arg2 withChannelMode:(int)arg3 inDocument:(struct CDocumentLogic *)arg4 audioDeviceSetup:(id)arg5 GetType:(int *)arg6 getLocalIndex:(int *)arg7;
+ (int)activeInputIsInternaMic:(char *)arg1;
+ (id)audioDeviceSetupForDocument:(struct CDocumentLogic *)arg1;
+ (id)_bussesForDocument:(struct CDocumentLogic *)arg1;
+ (id)_outputDevices;
+ (id)_outputSourcesForAudioDeviceID:(unsigned int)arg1;
+ (id)_inputDevices;
+ (id)_inputSourcesForAudioDeviceID:(unsigned int)arg1;
+ (id)_outputDeviceGlyphKeyForID:(int)arg1;
+ (id)_inputDeviceGlyphKeyForID:(int)arg1;

@end

