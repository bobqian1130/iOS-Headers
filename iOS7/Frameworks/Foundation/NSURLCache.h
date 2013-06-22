/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSURLCacheInternal;

@interface NSURLCache : NSObject
{
    NSURLCacheInternal *_internal;
}

+ (void)_diskCacheSyncLoop:(id)arg1;
+ (void)_performDiskCacheSync;
+ (void)setSharedURLCache:(id)arg1;
+ (id)sharedURLCache;
- (void)_diskCacheExecuteRemoval:(id)arg1;
- (void)_diskCacheScheduleRemoval:(id)arg1;
- (void)_diskCacheExecuteWrite:(id)arg1;
- (void)_diskCacheScheduleWrite:(id)arg1;
- (void)_diskCacheTruncate:(unsigned int)arg1;
- (void)_diskCacheClear;
- (id)_diskCacheGet:(id)arg1;
- (BOOL)_diskCacheCreateDirectory;
- (id)_diskCacheDefaultPath;
- (id)_cacheDirectory;
- (void)_diskCacheCreateLRUList:(id)arg1;
- (void)_diskCacheSync;
- (void)_diskCacheSetSyncTimer;
- (void)_memoryCacheClear;
- (void)_memoryCacheRemove:(id)arg1;
- (void)_memoryCachePut:(id)arg1;
- (id)_memoryCacheGet:(id)arg1;
- (void)_memoryCacheTruncate:(unsigned int)arg1;
- (void)_memoryCacheTouchNode:(id)arg1;
- (void)_memoryCacheAppendNodeToLRUList:(id)arg1;
- (void)_memoryCacheRemoveNodeFromLRUList:(id)arg1;
- (struct _CFURLCache *)_CFURLCache;
- (void)dealloc;
- (CDStruct_1ef3fb1f)_cacheStatistics;
- (unsigned int)currentDiskUsage;
- (unsigned int)currentMemoryUsage;
- (void)setDiskCapacity:(unsigned int)arg1;
- (void)setMemoryCapacity:(unsigned int)arg1;
- (unsigned int)diskCapacity;
- (unsigned int)memoryCapacity;
- (void)removeAllCachedResponses;
- (void)removeCachedResponseForRequest:(id)arg1;
- (void)storeCachedResponse:(id)arg1 forRequest:(id)arg2;
- (id)cachedResponseForRequest:(id)arg1;
- (id)initWithMemoryCapacity:(unsigned int)arg1 diskCapacity:(unsigned int)arg2 diskPath:(id)arg3;
- (id)_initWithExistingCFURLCache:(struct _CFURLCache *)arg1;
- (id)initWithExistingSharedCFURLCache:(struct _CFURLCache *)arg1;
- (id)init;
- (long)_nscfBridgeURLCacheCurrentDiskUsage;
- (long)_nscfBridgeURLCacheCurrentMemoryUsage;
- (long)_nscfBridgeURLCacheMemoryCapacity;
- (void)_nscfBridgeURLCacheRemoveAllCachedResponses;
- (void)_nscfBridgeURLCacheRemoveCachedResponseForRequest:(id)arg1;
- (void)_nscfBridgeURLCacheSetDiskCapacity:(long)arg1;
- (void)_nscfBridgeURLCacheSetMemoryCapacity:(long)arg1;
- (long)_nscfBridgeURLCacheDiskCapacity;
- (void)_nscfBridgeURLCacheStoreCachedResponse:(struct _CFCachedURLResponse *)arg1 forRequest:(struct _CFURLRequest *)arg2;
- (struct _CFCachedURLResponse *)_nscfBridgeURLCacheCopyResponseForRequest:(struct _CFURLRequest *)arg1;

@end

