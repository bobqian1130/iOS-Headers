/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface ABDelayedNotificationSender : NSObject
{
    struct __CFArray *_delegatesForDelayedNotification;
    NSMutableArray *_delayedNotifications;
    struct __CFDictionary *_delayedNotificationInfos;
}

- (void)addDelayedNotification:(id)arg1;
- (void)addDelayedNotification:(id)arg1 withInfo:(struct __CFDictionary *)arg2 allowDuplicateNotification:(BOOL)arg3;
- (void)removeDelegate:(id)arg1 andDeliverDelayedNotifications:(BOOL)arg2;
- (BOOL)containsDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)dealloc;

@end

