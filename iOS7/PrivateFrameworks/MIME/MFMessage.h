/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class MFMessageStore, MFMimePart, NSArray, NSString;

@interface MFMessage : NSObject <NSCopying>
{
    MFMessageStore *_store;
    unsigned long _preferredEncoding;
    NSString *_senderAddressComment;
    unsigned int _dateSentInterval;
    unsigned int _dateReceivedInterval;
    unsigned long long _generationNumber;
    NSString *_subject;
    NSArray *_to;
    NSArray *_cc;
    NSArray *_bcc;
    NSArray *_sender;
    NSString *_contentType;
    long long _messageIDHeaderHash;
    long long _conversationID;
    NSString *_summary;
    NSString *_externalID;
    MFMimePart *_parentPart;
    unsigned int _calculatedAttachmentInfo:1;
    unsigned short _numberOfAttachments;
}

+ (void)setMessageClassForStore:(id)arg1;
+ (id)messageWithRFC822Data:(id)arg1 withParentPart:(id)arg2;
+ (id)messageWithRFC822Data:(id)arg1;
+ (Class)dataMessageStoreToUse;
@property(retain, nonatomic) MFMimePart *parentPart; // @synthesize parentPart=_parentPart;
- (id)additionalHeadersForForward;
- (id)additionalHeadersForReply;
- (BOOL)isLibraryMessage;
- (BOOL)canBeDeleted;
- (id)bestAlternativeInPart:(id)arg1;
- (id)defaultAlternativeInPart:(id)arg1;
- (int)generationCompare:(id)arg1;
- (unsigned long long)generationNumber;
- (void)setGenerationNumber:(unsigned long long)arg1;
- (void)setNumberOfAttachments:(unsigned int)arg1;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3;
- (void)calculateAttachmentInfoFromBody:(id)arg1;
- (void)_calculateAttachmentInfoFromBody:(id)arg1;
- (id)dataPathForMimePart:(id)arg1;
- (id)dataForMimePart:(id)arg1 inRange:(struct _NSRange)arg2 isComplete:(char *)arg3 downloadIfNecessary:(BOOL)arg4 didDownload:(char *)arg5;
- (id)dataForMimePart:(id)arg1 inRange:(struct _NSRange)arg2 isComplete:(char *)arg3;
- (id)dataForMimePart:(id)arg1;
- (id)headerDataDownloadIfNecessary:(BOOL)arg1;
- (id)headerData;
- (id)bodyDataIsComplete:(char *)arg1 isPartial:(char *)arg2 downloadIfNecessary:(BOOL)arg3;
- (id)bodyDataIsComplete:(char *)arg1 isPartial:(char *)arg2;
- (id)bodyDataIsComplete:(char *)arg1;
- (id)bodyData;
- (id)persistentID;
- (id)attachmentStorageLocation;
- (id)path;
- (unsigned long)uid;
- (id)remoteID;
- (void)setMessageInfoFromMessage:(id)arg1;
- (void)setSubject:(id)arg1 to:(id)arg2 cc:(id)arg3 bcc:(id)arg4 sender:(id)arg5 dateReceived:(double)arg6 dateSent:(double)arg7 messageIDHash:(long long)arg8 conversationIDHash:(long long)arg9 summary:(id)arg10 withOptions:(unsigned int)arg11;
- (void)setMessageInfo:(id)arg1 to:(id)arg2 cc:(id)arg3 bcc:(id)arg4 sender:(id)arg5 dateReceivedTimeIntervalSince1970:(double)arg6 dateSentTimeIntervalSince1970:(double)arg7 messageIDHash:(long long)arg8 conversationID:(long long)arg9 summary:(id)arg10;
- (id)uniqueArray:(id)arg1 withStore:(id)arg2;
- (id)summary;
- (void)setExternalID:(id)arg1;
- (id)externalID;
- (void)setConversationID:(long long)arg1;
- (void)setMessageIDHash:(long long)arg1;
- (long long)conversationID;
- (void)setBcc:(id)arg1;
- (id)bccIfCached;
- (id)bcc;
- (void)setCc:(id)arg1;
- (id)ccIfCached;
- (id)cc;
- (void)setTo:(id)arg1;
- (id)toIfCached;
- (id)to;
- (id)senderAddressComment;
- (void)setSender:(id)arg1;
- (id)firstSender;
- (id)sendersIfCached;
- (id)senders;
- (void)setContentType:(id)arg1;
- (id)contentType;
- (void)setDateSentTimeIntervalSince1970:(double)arg1;
- (double)dateSentAsTimeIntervalSince1970;
- (BOOL)needsDateReceived;
- (double)dateReceivedAsTimeIntervalSince1970;
- (void)setDateReceivedTimeIntervalSince1970:(double)arg1;
- (id)dateSent;
- (id)dateReceived;
- (void)setSubject:(id)arg1;
- (id)subject;
- (void)loadCachedHeaderValuesFromHeaders:(id)arg1;
- (void)_setDateSentFromHeaders:(id)arg1;
- (void)_setDateReceivedFromHeaders:(id)arg1;
- (id)_copyDateFromDateHeaderInHeaders:(id)arg1;
- (id)_copyDateFromReceivedHeadersInHeaders:(id)arg1;
- (BOOL)_doesDateAppearToBeSane:(id)arg1;
- (void)setPreferredEncoding:(unsigned long)arg1;
- (unsigned long)preferredEncoding;
- (BOOL)calculatedNumberOfAttachments;
- (unsigned short)numberOfAttachments;
- (BOOL)isMessageContentsLocallyAvailable;
- (long long)_messageIDHeaderHashIvar;
- (id)messageIDHeaderInFortyBytesOrLess;
- (id)messageIDHeader;
- (long long)messageIDHash;
- (id)messageURL;
- (id)messageID;
- (id)preferredEmailAddressToReplyWith;
- (unsigned int)messageSize;
- (void)dealloc;
- (id)dataConsumerForMimePart:(id)arg1;
- (void)setMessageData:(id)arg1 isPartial:(BOOL)arg2;
- (id)messageData;
- (id)messageDataIsComplete:(char *)arg1 downloadIfNecessary:(BOOL)arg2;
- (BOOL)messageData:(id *)arg1 messageSize:(unsigned int *)arg2 isComplete:(char *)arg3 downloadIfNecessary:(BOOL)arg4;
- (id)messageBodyIfAvailableUpdatingFlags:(BOOL)arg1;
- (id)messageBodyUpdatingFlags:(BOOL)arg1;
- (id)messageBodyIfAvailable;
- (id)messageBody;
- (id)headersIfAvailable;
- (id)headers;
- (void)setMessageStore:(id)arg1;
- (id)messageStore;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

