/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol APSConnectionDelegate <NSObject>
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;

@optional
- (void)connectionDidReconnect:(id)arg1;
- (void)connection:(id)arg1 didChangeConnectedStatus:(BOOL)arg2;
- (void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3;
- (void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
@end

