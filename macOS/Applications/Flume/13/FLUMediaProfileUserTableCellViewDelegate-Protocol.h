//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FLUUser;

@protocol FLUMediaProfileUserTableCellViewDelegate <NSObject>

@optional
- (void)flu_didPressMediaProfileUserCellViewToggleButtonForUser:(FLUUser *)arg1;
- (void)flu_didPressMediaProfileUserCellViewFavouriteButtonForUser:(FLUUser *)arg1;
- (void)flu_didPressMediaProfileUserCellViewIgnoreButtonForUser:(FLUUser *)arg1;
- (void)flu_didPressMediaProfileUserCellViewAcceptButtonForUser:(FLUUser *)arg1;
- (void)flu_didPressMediaProfileUserCellViewStatusButtonForUser:(FLUUser *)arg1;
- (void)flu_didPressMediaProfileUserCellViewAvatarButtonForUser:(FLUUser *)arg1 longPress:(BOOL)arg2;
@end

