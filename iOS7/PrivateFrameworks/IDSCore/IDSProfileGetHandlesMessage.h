/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "FTIDSMessage.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSDictionary;

@interface IDSProfileGetHandlesMessage : FTIDSMessage <NSCopying>
{
    NSArray *_responseHandles;
    NSDictionary *_selfHandle;
}

@property(copy) NSDictionary *selfHandle; // @synthesize selfHandle=_selfHandle;
@property(copy) NSArray *responseHandles; // @synthesize responseHandles=_responseHandles;
- (void)handleResponseDictionary:(id)arg1;
- (id)messageBody;
- (id)requiredKeys;
- (id)bagKey;
- (id)additionalMessageHeaders;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

