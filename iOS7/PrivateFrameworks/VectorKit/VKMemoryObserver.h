/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_source>;

@interface VKMemoryObserver : NSObject
{
    id _target;
    SEL _selector;
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
}

- (void)_receivedMemoryNotification;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;

@end

