//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVCaptureOutputSettings.h>

@class AVVideoOutputSettings;

__attribute__((visibility("hidden")))
@interface AVCaptureVideoSettings : AVCaptureOutputSettings
{
    AVVideoOutputSettings *_avVideoOutputSettings;
}

- (id)cleanApertureDictionary;
- (id)pixelAspectRatioDictionary;
@property(readonly, nonatomic) AVVideoOutputSettings *avVideoOutputSettings; // @synthesize avVideoOutputSettings=_avVideoOutputSettings;
- (id)outputSettingsDictionary;
- (void)dealloc;
- (id)initWithTrustedVideoSettingsDictionary:(id)arg1;
- (id)initWithVideoSettingsDictionary:(id)arg1;

@end

