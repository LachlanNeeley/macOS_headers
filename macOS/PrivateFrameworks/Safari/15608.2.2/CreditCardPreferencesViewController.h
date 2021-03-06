//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "AuthorizationSheetViewControllerDelegate.h"
#import "CreditCardDataEditorDelegate.h"
#import "SecureWindow.h"

@class AuthorizationSheetViewController, CreditCardDataEditor, NSString, NSWindow, SecureWindowLockPolicyEnforcer;

__attribute__((visibility("hidden")))
@interface CreditCardPreferencesViewController : NSViewController <AuthorizationSheetViewControllerDelegate, SecureWindow, CreditCardDataEditorDelegate>
{
    NSViewController *_currentViewController;
    CreditCardDataEditor *_creditCardDataEditor;
    AuthorizationSheetViewController *_authorizationSheetViewController;
    SecureWindowLockPolicyEnforcer *_lockPolicyEnforcer;
}

- (void).cxx_destruct;
- (void)creditCardDataEditorDidFinish:(id)arg1;
- (void)authorizationSheetViewControllerWasCancelled:(id)arg1;
- (void)authorizationSheetViewControllerDidSucceed:(id)arg1;
@property(readonly, nonatomic) NSWindow *windowToSecure;
- (void)lockFromPolicyEnforcer:(id)arg1;
- (void)_dismissSheet;
- (void)_installViewController:(id)arg1;
- (void)_refreshAuthorizationSheetViewController;
@property(readonly, nonatomic) SecureWindowLockPolicyEnforcer *lockPolicyEnforcer; // @synthesize lockPolicyEnforcer=_lockPolicyEnforcer;
@property(readonly, nonatomic) AuthorizationSheetViewController *authorizationSheetViewController; // @synthesize authorizationSheetViewController=_authorizationSheetViewController;
@property(readonly, nonatomic) CreditCardDataEditor *creditCardDataEditor; // @synthesize creditCardDataEditor=_creditCardDataEditor;
- (void)viewWillAppear;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

