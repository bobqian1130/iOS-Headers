/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class SSAppPurchaseHistoryCache;

@interface ISDeleteDaemonModule : NSObject
{
    struct __CFURLStorageSession *_storageSession;
    struct _CFURLCache *_urlCache;
    SSAppPurchaseHistoryCache *_purchaseHistoryCache;
}

- (unsigned long long)purgeableSpace;
- (unsigned long long)purge:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

@end

