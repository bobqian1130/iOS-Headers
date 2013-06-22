/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface CTMessageCenter : NSObject
{
}

+ (id)sharedMessageCenter;
- (BOOL)getCharacterCount:(int *)arg1 andMessageSplitThreshold:(int *)arg2 forSmsText:(id)arg3;
- (BOOL)sendSMSWithText:(id)arg1 serviceCenter:(id)arg2 toAddress:(id)arg3 withMoreToFollow:(BOOL)arg4 withID:(unsigned int)arg5;
- (BOOL)sendSMSWithText:(id)arg1 serviceCenter:(id)arg2 toAddress:(id)arg3 withMoreToFollow:(BOOL)arg4;
- (BOOL)sendSMSWithText:(id)arg1 serviceCenter:(id)arg2 toAddress:(id)arg3 withID:(unsigned int)arg4;
- (BOOL)sendSMSWithText:(id)arg1 serviceCenter:(id)arg2 toAddress:(id)arg3;
- (BOOL)isMmsConfigured;
- (BOOL)isMmsEnabled;
- (void)setDeliveryReportsEnabled:(BOOL)arg1;
- (CDStruct_1ef3fb1f)isDeliveryReportsEnabled:(char *)arg1;
- (id)decodeMessage:(id)arg1;
- (id)encodeMessage:(id)arg1;
- (id)statusOfOutgoingMessages;
- (id)deferredMessageWithId:(unsigned int)arg1;
- (id)incomingMessageWithId:(unsigned int)arg1;
- (void)acknowledgeOutgoingMessageWithId:(unsigned int)arg1;
- (void)acknowledgeIncomingMessageWithId:(unsigned int)arg1;
- (id)allIncomingMessages;
- (void)addMessageOfType:(int)arg1 toArray:(id)arg2 withIdsFromArray:(id)arg3;
- (int)incomingMessageCount;
- (id)incomingMessageWithId:(unsigned int)arg1 isDeferred:(BOOL)arg2;
- (CDStruct_1ef3fb1f)send:(id)arg1 withMoreToFollow:(BOOL)arg2;
- (CDStruct_1ef3fb1f)send:(id)arg1;
- (CDStruct_1ef3fb1f)sendMMS:(id)arg1;
- (void)sendMessageAsSmsToShortCodeRecipients:(id)arg1 andReplaceData:(id *)arg2;
- (CDStruct_1ef3fb1f)sendMMSFromData:(id)arg1 messageId:(unsigned int)arg2;
- (CDStruct_1ef3fb1f)sendSMS:(id)arg1 withMoreToFollow:(BOOL)arg2;
- (void)dealloc;
- (id)init;

@end

