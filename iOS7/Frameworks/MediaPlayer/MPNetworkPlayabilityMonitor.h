/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface MPNetworkPlayabilityMonitor : NSObject
{
    int _effectiveNetworkTypeForPlayback;
    int _networkType;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedNetworkPlayabilityMonitor;
- (void).cxx_destruct;
- (int)_onQueueEffectiveNetworkTypeForAverageBitrate:(double)arg1;
@property(readonly, nonatomic) int networkType;
@property(readonly, nonatomic) int effectiveNetworkTypeForPlayback;
- (void)adjustEffectiveNetworkTypeUsingPreviouslyPlayedItem:(id)arg1;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end

