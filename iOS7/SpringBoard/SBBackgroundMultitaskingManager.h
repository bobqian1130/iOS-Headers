/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SBWorkStoreObserver-Protocol.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, SBWorkStore;

@interface SBBackgroundMultitaskingManager : NSObject <SBWorkStoreObserver>
{
    NSMutableDictionary *_appToBackgroundTasks;
    NSMutableDictionary *_backgroundFetchTaskValueToWatchdoggableCompletion;
    NSObject<OS_dispatch_queue> *_queue;
    SBWorkStore *_pendingWorkStore;
    double _watchdogTimeout;
}

+ (BOOL)shouldFakeAdoption;
+ (id)sharedInstance;
- (void)handlePushNotificationFromApplication:(id)arg1 userInfo:(id)arg2 priority:(int)arg3 completion:(id)arg4;
- (id)_opportunisticallyUpdateApplications:(id)arg1 trigger:(unsigned int)arg2;
- (void)_performPendingWorkForBundleID:(id)arg1;
- (BOOL)_launchAppForUpdating:(id)arg1 trigger:(unsigned int)arg2 pushNotificationUserInfo:(id)arg3 withWatchdoggableCompletion:(id)arg4;
- (void)_startBackgroundFetchTaskForApplication:(id)arg1 trigger:(unsigned int)arg2 sequenceNumber:(int)arg3 withWatchdoggableCompletion:(id)arg4;
- (void)queue_startBackgroundFetchTaskForApplication:(id)arg1 trigger:(unsigned int)arg2 sequenceNumber:(int)arg3 withWatchdoggableCompletion:(id)arg4;
- (void)_backgroundTaskFinished:(id)arg1 forApplication:(id)arg2;
- (void)queue_backgroundTaskFinished:(id)arg1 forApplication:(id)arg2;
- (void)_watchdogCompletionForBackgroundFetchTaskValue:(id)arg1;
- (void)queue_fireWatchdoggableCompletionForBackgroundFetchTaskValue:(id)arg1;
- (void)_appStateDidChange:(id)arg1;
- (void)_startBackgroundFetchForNotification:(id)arg1;
- (void)_appFinishedBackgroundUpdating:(id)arg1;
- (void)queue_appFinishedBackgroundUpdating:(id)arg1 userInfo:(id)arg2;
- (void)workDidChange:(id)arg1;
@property(readonly, nonatomic) double watchdogTimeout; // @synthesize watchdogTimeout=_watchdogTimeout;
- (void)application:(id)arg1 didSetMinimumFetchInterval:(double)arg2;
- (int)nextSequenceNumber;
- (id)init;

@end

