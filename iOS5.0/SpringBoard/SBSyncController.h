/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSTimer;

@interface SBSyncController : NSObject
{
    int _restoreState;
    int _resetState;
    int _restoreTimerState;
    NSTimer *_restoreTimer;
    BOOL _showingResetUI;
    BOOL _appsChangedDuringSync;
    int _restoreStartedNotifyToken;
    int _restoreEndedNotifyToken;
}

+ (id)sharedInstance;
- (void)dealloc;
- (void)startObserving;
- (void)stopObserving;
- (void)_setRestoreState:(int)arg1;
- (void)frontLockedWhenPossible;
- (void)syncSessionDidEnd;
- (void)_wirelessSyncEnded:(id)arg1;
- (BOOL)isRestoring;
- (int)restoreState;
- (void)_notifyRestoreCanProceed;
- (void)_killApplications;
- (void)beginRestoring;
- (void)finishedTerminatingApplications;
- (void)cancelRestoring;
- (void)_rebootNow;
- (void)finishEndRestoring;
- (void)didEndRestoring:(int)arg1;
- (BOOL)isResetting;
- (int)resetState;
- (void)_delayedQuitApplications;
- (void)_delayedBeginReset;
- (void)beginResetting:(BOOL)arg1;
- (void)didEndResetting;
- (void)_resetStarted:(id)arg1;
- (void)_resetEnded:(id)arg1;
- (void)_invalidateRestoreTimer;
- (BOOL)_isBackupAgentRunning;
- (void)_restoreTimerFired:(id)arg1;
- (void)_setupRestoreTimer;
- (void)_appInstallationNotification;
- (BOOL)isInUse;

@end

