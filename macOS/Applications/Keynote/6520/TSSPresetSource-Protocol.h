//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSSet, NSString, TSSTheme;

@protocol TSSPresetSource
+ (void)bootstrapPresetsOfKind:(NSString *)arg1 inTheme:(TSSTheme *)arg2 alternate:(int)arg3;
+ (NSSet *)presetKinds;
@end

