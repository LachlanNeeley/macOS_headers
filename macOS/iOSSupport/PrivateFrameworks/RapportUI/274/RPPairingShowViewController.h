//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, UIButton, UILabel;

@interface RPPairingShowViewController : UIViewController
{
    CDUnknownBlockType _dismissHandler;
    NSString *_password;
    UIButton *_cancelButton;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_verificationCodeLabel;
}

+ (id)instantiateViewController;
@property(retain, nonatomic) UILabel *verificationCodeLabel; // @synthesize verificationCodeLabel=_verificationCodeLabel;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler=_dismissHandler;
- (void).cxx_destruct;
- (void)_updatePasswordUI;
- (void)handleCancelButton:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end

