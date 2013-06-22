/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface CMActivityAlarmProxy : NSObject
{
    id _internal;
    struct CLConnectionClient *fLocationdConnection;
    int fAlarmCounter;
    NSMutableDictionary *fAlarms;
    NSObject<OS_dispatch_queue> *fReplyQueue;
    _Bool fAlarmAvailable;
}

+ (id)sharedInstance;
- (void)stopListeningForActivityAlarm:(id)arg1;
- (void)listenForActivityAlarm:(id)arg1;
- (BOOL)activityAlarmAvailable;
- (void)dealloc;
- (id)init;

@end

