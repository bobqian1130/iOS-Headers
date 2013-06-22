/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSData;

@interface MFMessageHeaders : NSObject <NSCopying>
{
    NSData *_data;
    unsigned long _preferredEncoding;
}

+ (id)uniqueHeaderKeyStringForString:(id)arg1;
+ (id)encodedDataForAddressList:(id)arg1 splittingAtLength:(unsigned int)arg2 firstLineBuffer:(unsigned int)arg3;
+ (id)addressListFromEncodedString:(id)arg1;
+ (id)copyAddressListFromEncodedData:(id)arg1 encoding:(unsigned long)arg2;
+ (BOOL)shouldDecodeHeaderForKey:(id)arg1;
+ (BOOL)isStructuredHeaderKey:(id)arg1;
+ (id)basicHeaders;
- (id)description;
- (void)appendHeaderData:(id)arg1 andRecipients:(id)arg2;
- (id)encodedHeaders;
- (BOOL)messageIsFromEntourage;
- (id)_decodeHeaderKeysFromData:(id)arg1;
- (id)copyFirstStringValueForKey:(id)arg1;
- (id)copyFirstNonDecodedHeaderForKey:(id)arg1;
- (id)copyFirstHeaderForKey:(id)arg1;
- (id)firstHeaderForKey:(id)arg1;
- (id)references;
- (id)copyAddressListForReplyTo;
- (id)copyAddressListForResentFrom;
- (id)copyAddressListForBcc;
- (id)copyAddressListForCc;
- (id)copyAddressListForTo;
- (id)firstSenderAddress;
- (id)copyAddressListForSender;
- (id)_copyAddressListForKey:(id)arg1;
- (id)headersForKey:(id)arg1;
- (id)copyHeadersForKey:(id)arg1;
- (BOOL)hasHeaderForKey:(id)arg1;
- (id)_headerValueForKey:(id)arg1;
- (id)_copyHeaderValueForKey:(id)arg1;
- (id)_headerValueForKey:(id)arg1 offset:(unsigned int *)arg2;
- (id)_copyHeaderValueForKey:(id)arg1 offset:(unsigned int *)arg2 decoded:(BOOL)arg3;
- (id)copyDecodedStringFromHeaderData:(id)arg1 withRange:(struct _NSRange)arg2;
- (unsigned long)_contentTypeEncoding;
- (id)_capitalizedKeyForKey:(id)arg1;
- (void)_setCapitalizedKey:(id)arg1 forKey:(id)arg2;
- (id)allHeaderKeys;
- (BOOL)_isStructuredHeaderKey:(id)arg1;
- (void)setPreferredEncoding:(unsigned long)arg1;
- (unsigned long)preferredEncoding;
- (id)headerData;
- (id)mutableCopy;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHeaderData:(id)arg1 encoding:(unsigned long)arg2;
- (id)init;

@end

