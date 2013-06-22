/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GeoServices/GEOTileServerProxy.h>

@class NSLock, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface GEOTileServerRemoteProxy : GEOTileServerProxy
{
    NSObject<OS_dispatch_queue> *_connQueue;
    NSObject<OS_xpc_object> *_conn;
    NSLock *_connLock;
    int _suspendCount;
    unsigned long long _handleCounter;
    BOOL _cancelling;
}

- (BOOL)skipNetworkForKeysWhenPreloading:(id)arg1;
- (void)endPreloadSession;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1;
- (void)flushPendingWrites;
- (void)open;
- (void)close;
- (void)reportCorruptTile:(const struct _GEOTileKey *)arg1;
- (void)cancel:(const struct _GEOTileKey *)arg1;
- (void)loadTiles:(id)arg1 priorities:(unsigned int *)arg2 options:(unsigned int)arg3 client:(id)arg4;
- (void)_handleEditionUpgrade:(id)arg1;
- (void)_handleNetworkBegan:(id)arg1;
- (void)_handleError:(id)arg1;
- (void)_handleTile:(id)arg1;
- (void)_handleEvent:(id)arg1;
- (void)dealloc;
- (id)init;

@end

