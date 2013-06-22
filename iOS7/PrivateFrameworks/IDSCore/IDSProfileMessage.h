/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IDSBaseMessage.h"

#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface IDSProfileMessage : IDSBaseMessage <NSCopying>
{
    NSData *_pushCert;
    struct __SecKey *_pushKey;
    struct __SecKey *_pushPublicKey;
    NSData *_pushToken;
    NSString *_authToken;
    NSString *_profileID;
}

@property(copy, nonatomic) NSString *profileID; // @synthesize profileID=_profileID;
@property(copy, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(copy, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property(nonatomic) struct __SecKey *pushPublicKey; // @synthesize pushPublicKey=_pushPublicKey;
@property(nonatomic) struct __SecKey *pushPrivateKey; // @synthesize pushPrivateKey=_pushKey;
@property(copy, nonatomic) NSData *pushCertificate; // @synthesize pushCertificate=_pushCert;
- (void)handleResponseDictionary:(id)arg1;
- (id)additionalMessageHeaders;
- (id)additionalMessageHeadersForOutgoingPush;
- (BOOL)hasRequiredKeys:(id *)arg1;
- (int)responseCommand;
- (int)command;
- (BOOL)wantsBinaryPush;
- (BOOL)wantsCompressedBody;
- (BOOL)wantsHTTPHeaders;
- (BOOL)wantsBagKey;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

