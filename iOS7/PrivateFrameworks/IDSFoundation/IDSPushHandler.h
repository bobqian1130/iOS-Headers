/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "APSConnectionDelegate-Protocol.h"

@class APSConnection, NSData, NSMapTable, NSMutableSet, NSObject<OS_dispatch_queue>;

@interface IDSPushHandler : NSObject <APSConnectionDelegate>
{
    APSConnection *_apsConnection;
    NSData *_cachedPushToken;
    Class _APSConnectionClass;
    NSMutableSet *_topicsCache;
    NSMapTable *_handlerMap;
    NSObject<OS_dispatch_queue> *_ivarQueue;
}

+ (id)sharedInstance;
- (void)connection:(id)arg1 didChangeConnectedStatus:(BOOL)arg2;
- (void)connectionDidReconnect:(id)arg1;
- (void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3;
- (void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)setCommands:(id)arg1 forListener:(id)arg2;
- (void)setTopics:(id)arg1 forListener:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1 topics:(id)arg2 commands:(id)arg3 queue:(id)arg4;
- (void)_recalculateTopicsCacheOnIvarQueue;
- (void)_updateTopicsOnIvarQueue;
- (void)requestKeepAlive;
@property(readonly, nonatomic) NSData *pushToken;
- (void)dealloc;
- (id)init;

@end

