/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IMAVChat, IMAVChatProxy, NSDictionary, NSString;

@interface IMAVChatParticipantProxy : NSObject
{
    NSDictionary *_info;
    IMAVChatProxy *_chat;
}

- (void)forwardInvocation:(id)arg1;
@property(readonly, nonatomic) BOOL _inviteDelivered;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) IMAVChat *avChat;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 chat:(id)arg2;

@end

