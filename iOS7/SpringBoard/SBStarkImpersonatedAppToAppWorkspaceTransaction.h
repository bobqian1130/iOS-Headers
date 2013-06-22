/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBStarkAppToAppWorkspaceTransaction.h"

@class SBAlert;

@interface SBStarkImpersonatedAppToAppWorkspaceTransaction : SBStarkAppToAppWorkspaceTransaction
{
    SBAlert *_deactivatingAlert;
    BOOL _animatedAppActivation;
}

- (void)animationControllerDidFinishAnimation:(id)arg1;
- (void)animationController:(id)arg1 willBeginAnimation:(BOOL)arg2;
- (void)_deactivateAlertIfPossible;
- (void)_handleFailureToLaunch;
- (BOOL)selfStarkAlertDidDeactivate:(id)arg1;
- (BOOL)selfStarkAlertWillDeactivate:(id)arg1;
- (BOOL)selfApplicationExited:(id)arg1;
- (BOOL)selfApplicationLaunchDidFail:(id)arg1;
- (id)_newAnimationFromLauncherToApp;
- (id)_newAnimationFromAppToLauncher;
- (id)_newAnimationFromAppToApp;
- (void)_transactionComplete;
- (int)_setupMilestonesFrom:(id)arg1 to:(id)arg2;
- (void)_doCommit;
- (void)dealloc;
- (id)initWithWorkspace:(id)arg1 mainScreenAlertManager:(id)arg2 starkScreenController:(id)arg3 from:(id)arg4 to:(id)arg5;

@end

