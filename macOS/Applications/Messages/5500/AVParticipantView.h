//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class AVChatParticipant, AVCloseButton, Animator, ColoredSpinner, FileTransfer, IMHandle, MultiBuddyImageView, NSExtendedBox, NSProgressIndicator, NSTabView, NSTextField, NSTimer, StretchyImageView, VolumeIndicator;

@interface AVParticipantView : NSView
{
    AVChatParticipant *_participant;
    BOOL _isLocalParticipant;
    BOOL _invitedByMe;
    BOOL _isNotifier;
    IMHandle *_handle;
    FileTransfer *_fileTransfer;
    BOOL _hasDropHighlight;
    BOOL _whiteText;
    int _stage;
    int _previousStage;
    int _recordingStage;
    NSTimer *_recordingMessageTimer;
    Animator *_animator;
    float _animationDistance;
    int _configurationAt;
    int _configurationTo;
    int _configurationNext;
    long long _viewTag;
    long long _buttonTag;
    NSExtendedBox *_invitedBGView;
    NSTextField *_invitedNameField;
    NSTextField *_invitedStatusField;
    NSTabView *_connectedTabView;
    NSTextField *_connectedNameField;
    AVCloseButton *_connectedCloseButton;
    VolumeIndicator *_vuMeter;
    MultiBuddyImageView *_connectedIconView;
    NSView *_shadowView;
    NSExtendedBox *_statusBGView;
    MultiBuddyImageView *_statusIconView;
    NSTextField *_statusLine1;
    NSTextField *_statusLine2;
    ColoredSpinner *_spinner;
    NSProgressIndicator *_progress;
    AVCloseButton *_closeButton;
    float _statusTextDwForSpinner;
    StretchyImageView *_notifierGreenBGView;
    StretchyImageView *_notifierMediumView;
    NSTextField *_notifierNumberField;
    Animator *_notifierAnimator;
    BOOL _hasShownTimestamp;
    NSView *_connectedContainer;
    NSView *_invitedContainer;
    NSView *_statusContainer;
}

+ (id)bannerCloseImageWithSize:(unsigned long long)arg1 mouseState:(unsigned long long)arg2;
+ (id)greenBGImage;
+ (id)centeredImageFromBaseImageName:(id)arg1 overlayColor:(id)arg2 inRect:(struct CGRect)arg3 maxSize:(struct CGSize)arg4 inView:(id)arg5;
@property(retain, nonatomic) NSView *statusContainer; // @synthesize statusContainer=_statusContainer;
@property(retain, nonatomic) NSView *invitedContainer; // @synthesize invitedContainer=_invitedContainer;
@property(retain, nonatomic) NSView *connectedContainer; // @synthesize connectedContainer=_connectedContainer;
- (void)closeParticipant:(id)arg1;
- (void)_mouseUpOutsideCloseButton:(id)arg1;
- (BOOL)isDisconnected;
- (BOOL)disconnect;
- (BOOL)isConnected;
- (void)recordingPermissionForgotten;
- (void)recordingPermissionDenied;
- (void)recordingPermissionGranted;
- (void)recordingPermissionRequested;
- (void)_setRecordingStage:(int)arg1;
- (void)_timedSetRecordingStage:(id)arg1;
- (void)connect;
- (void)_updateConnectedUIConfiguration;
- (void)_hideStatus;
- (void)_showStatus;
- (void)_animateTo:(int)arg1;
- (void)startConnecting;
- (BOOL)isInvited;
- (void)animator:(id)arg1 doStep:(double)arg2 lastStep:(BOOL)arg3;
- (void)_updateNotifierProgress:(float)arg1;
- (float)animator:(id)arg1 contourForProgress:(double)arg2;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (BOOL)updateMouseTracking:(BOOL)arg1 checkingMouse:(BOOL)arg2 atWindowCoordinates:(struct CGPoint)arg3;
- (void)_clearTrackingRects;
- (struct CGRect)closeButtonFrame;
- (void)hideCloseButton;
- (void)showCloseButtonOver:(BOOL)arg1 down:(BOOL)arg2;
@property double spinnerValue;
- (void)_stopSpinner;
- (void)_startSpinner;
- (void)_updateStatusLineWidths;
- (void)drawRect:(struct CGRect)arg1;
@property BOOL hasDropHighlight;
@property BOOL usesWhiteText;
- (float)bannerHeight;
- (void)updateNotifierUI;
- (double)dxToFitText;
- (void)startMultiwayThrob;
- (void)_setupNotifierUIWithNumber:(BOOL)arg1;
- (void)_setupNumberFieldInBGFrame:(struct CGRect)arg1;
- (void)_stopNotifierThrob;
- (void)_handleInfoChanged:(id)arg1;
- (id)handle;
- (id)participant;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initAsFileTransfer:(id)arg1 isNotifier:(BOOL)arg2;
- (id)initAsAuthorizationRequest:(id)arg1 isNotifier:(BOOL)arg2;
- (id)initWithParticipant:(id)arg1 isNotifier:(BOOL)arg2 saveNib:(BOOL)arg3;
- (id)_initWithParticipant:(id)arg1 handle:(id)arg2 fileTransfer:(id)arg3 isNotifier:(BOOL)arg4 saveNib:(BOOL)arg5;
- (void)_setupStatusContainer;
- (id)_callerParticipant;
- (void)_getEffectiveEndedReason:(unsigned int *)arg1 error:(int *)arg2;
- (void)showTimeField;
- (id)_remoteParticipantNames;
- (void)_insetView:(id)arg1 left:(float)arg2 right:(float)arg3;
- (void)setStatusText:(id)arg1;
- (void)_setStatusTextAlpha:(float)arg1;
- (void)_setStatusTextColor:(id)arg1;
- (void)_setupConnectedContainer;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)_setupAudioOnlyUI;
- (void)_arrangeAudioOnlyUI;
- (void)_startVUMeter;
- (void)_setupInvitedContainer;
- (id)_notificationString:(id)arg1;
- (void)willBeRemoved;
- (void)_removeConnectedContainer;
- (void)_removeInvitedContainer;

@end

