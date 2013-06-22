/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class CKConversation, CKEntity, IMService, NSArray, NSAttributedString, NSDate, NSError, NSString;

@protocol CKMessage <NSObject>
@property(readonly, nonatomic) int failedSendCount;
@property(readonly, nonatomic) int sentCount;
@property(readonly, nonatomic) int pendingCount;
@property(readonly, nonatomic) float percentComplete;
@property(readonly, nonatomic) int rowID;
@property(readonly, nonatomic) BOOL outgoingBubbleColor;
@property(readonly, nonatomic) long long sequenceNumber;
@property(readonly, nonatomic) unsigned int messagePartCount;
@property(readonly, nonatomic) BOOL shouldPlayReceivedTone;
@property(readonly, nonatomic) BOOL isToEmailAddress;
@property(readonly, nonatomic) BOOL shouldUseSeparateSubject;
@property(readonly, nonatomic) BOOL hasAttachments;
@property(readonly, nonatomic) BOOL isRead;
@property(readonly, nonatomic) BOOL supportsDeliveryReceipts;
@property(readonly, nonatomic) BOOL isFromMe;
@property(readonly, nonatomic) BOOL isOutgoing;
@property(readonly, nonatomic) BOOL isFromFilteredSender;
@property(readonly, nonatomic) BOOL isWaitingForDelivery;
@property(readonly, nonatomic) BOOL isDelivered;
@property(readonly, nonatomic) BOOL isTypingIndicator;
@property(readonly, nonatomic) BOOL isPlaceholder;
@property(readonly, nonatomic) BOOL partiallyFailedSend;
@property(readonly, nonatomic) BOOL isSMS;
@property(readonly, nonatomic) BOOL isiMessage;
@property(readonly, nonatomic) BOOL wantsSendStatus;
@property(readonly, nonatomic) BOOL failedSend;
@property(readonly, nonatomic) BOOL hasBeenSent;
@property(nonatomic) BOOL isFromDowngrading;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) CKEntity *sender;
@property(readonly, nonatomic) NSDate *timeRead;
@property(readonly, nonatomic) NSDate *date;
@property(readonly, nonatomic) NSArray *recipients;
@property(readonly, nonatomic) NSArray *parts;
@property(readonly, nonatomic) IMService *service;
@property(nonatomic) CKConversation *conversation;
@property(readonly, nonatomic) NSAttributedString *subject;
@property(readonly, nonatomic) NSString *address;
@property(readonly, nonatomic) NSString *guid;
@property(readonly, nonatomic) NSString *previewText;
- (void)resetParts;
- (void)loadParts;
- (void)deleteMessageParts:(id)arg1;
@end

