/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_xpc_object>;

@interface BKSXPCReply : NSObject
{
    NSObject<OS_xpc_object> *_message;
}

+ (id)messageWithReply:(id)arg1;
- (void)sendReply:(id)arg1;
- (id)message;
- (long long)messageKind;
- (void)dealloc;
- (id)initWithReply:(id)arg1;

@end

