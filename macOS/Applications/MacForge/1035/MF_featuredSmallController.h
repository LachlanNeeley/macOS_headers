//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class MSPlugin, NSButton, NSProgressIndicator, NSTextField, SYFlatButton;

__attribute__((visibility("hidden")))
@interface MF_featuredSmallController : NSViewController
{
    MSPlugin *plug;
    NSTextField *_bundleName;
    NSTextField *_bundleDesc;
    NSButton *_bundleBanner;
    NSButton *_bundleButton;
    SYFlatButton *_bundleGet;
    NSProgressIndicator *_bundleProgress;
}

@property(retain) NSProgressIndicator *bundleProgress; // @synthesize bundleProgress=_bundleProgress;
@property(retain) SYFlatButton *bundleGet; // @synthesize bundleGet=_bundleGet;
@property(retain) NSButton *bundleButton; // @synthesize bundleButton=_bundleButton;
@property(retain) NSButton *bundleBanner; // @synthesize bundleBanner=_bundleBanner;
@property(retain) NSTextField *bundleDesc; // @synthesize bundleDesc=_bundleDesc;
@property(retain) NSTextField *bundleName; // @synthesize bundleName=_bundleName;
- (void).cxx_destruct;
- (void)moreInfo:(id)arg1;
- (void)getOrOpen:(id)arg1;
- (void)setupWithPlugin:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

