//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSObject<OS_dispatch_queue>, SSXPCConnection;

@interface SSPreorderManager : NSObject
{
    SSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSArray *_itemKinds;
    SSXPCConnection *_observerConnection;
    NSObject<OS_dispatch_queue> *_observerQueue;
    struct __CFArray *_observers;
    NSArray *_preorders;
}

+ (id)musicStoreItemKinds;
+ (id)bookStoreItemKinds;
- (void)_sendMessageToObservers:(SEL)arg1;
- (void)_registerAsObserver;
- (void)_handleMessage:(id)arg1 fromServerConnection:(id)arg2;
- (void)_connectAsObserver;
- (void)removeObserver:(id)arg1;
- (void)reloadFromServer;
@property(readonly) NSArray *preorders;
@property(readonly) NSArray *itemKinds;
- (void)cancelPreorders:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithItemKinds:(id)arg1;
- (id)init;

@end
