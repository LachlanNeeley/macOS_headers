//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIBarBackgroundLayout.h>

@class NSArray, UIColor, UIImage, UIVibrancyEffect;

__attribute__((visibility("hidden")))
@interface _UIBarBackgroundLayoutLegacy : _UIBarBackgroundLayout
{
    long long _translucence;
    UIImage *_backgroundImage;
    UIColor *_backgroundTintColor;
    NSArray *_backgroundEffects;
    UIImage *_shadowImage;
    UIColor *_shadowColor;
    UIVibrancyEffect *_shadowEffect;
    BOOL _hasShadow;
    double _topInset;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *backgroundEffects; // @synthesize backgroundEffects=_backgroundEffects;
@property(nonatomic) double topInset; // @synthesize topInset=_topInset;
- (void)describeInto:(id)arg1;
- (void)configureWithoutShadow;
- (void)configureShadowForBarStyle:(long long)arg1;
- (void)configureShadowImage:(id)arg1;
- (void)configureWithEffects:(id)arg1;
- (void)configureAsTransparent;
- (void)configureImage:(id)arg1 forceOpaque:(BOOL)arg2 barStyle:(long long)arg3;
- (void)configureImage:(id)arg1 forceOpaque:(BOOL)arg2 backgroundTintColor:(id)arg3;
- (void)configureImage:(id)arg1 forceTranslucent:(BOOL)arg2;
- (void)configureBackgroundColor:(id)arg1 barStyle:(long long)arg2 translucent:(BOOL)arg3;
- (void)configureEffectForStyle:(long long)arg1 backgroundTintColor:(id)arg2 forceOpaque:(BOOL)arg3;
- (id)_blurWithStyle:(long long)arg1 tint:(id)arg2;
- (id)_colorForStyle:(long long)arg1;
@property(readonly, nonatomic) BOOL hasBackgroundEffect;
@property(readonly, nonatomic) UIImage *shadowImage;
- (double)bg1ShadowAlpha;
- (id)bg1ShadowEffect;
- (id)bg1ShadowImage;
- (id)bg1ShadowColor;
- (BOOL)bg1HasShadow;
- (double)bg1ImageAlpha;
- (id)bg1Image;
- (id)bg1Color;
- (id)bg1Effects;
- (double)bg1Alpha;
- (BOOL)shouldUseExplicitGeometry;
- (double)bgInset;
- (void)setUseExplicitGeometry:(BOOL)arg1;
- (id)initWithLayout:(id)arg1;

// Remaining properties
@property(nonatomic) BOOL disableTinting; // @dynamic disableTinting;

@end

