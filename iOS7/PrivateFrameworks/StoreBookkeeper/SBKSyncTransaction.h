/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreBookkeeper/SBKTransaction.h>

@class NSArray, NSString, NSURL;

@interface SBKSyncTransaction : SBKTransaction
{
    NSString *_syncAnchor;
    NSString *_domain;
    NSArray *_keysToUpdate;
    NSArray *_keysToDelete;
    int _conflictDetectionType;
    id <SBKSyncTransactionProcessing> _transactionProcessor;
    int _type;
    NSURL *_syncRequestURL;
}

@property(readonly) NSURL *syncRequestURL; // @synthesize syncRequestURL=_syncRequestURL;
@property(readonly) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)processDataInResponse:(id)arg1 withCompletionHandler:(id)arg2;
@property(readonly) NSArray *keysToDelete; // @synthesize keysToDelete=_keysToDelete;
@property(readonly) NSArray *keysToUpdate; // @synthesize keysToUpdate=_keysToUpdate;
@property(readonly) int conflictDetectionType; // @synthesize conflictDetectionType=_conflictDetectionType;
@property(readonly) NSString *syncAnchor; // @synthesize syncAnchor=_syncAnchor;
- (id)keyValuePairForUpdatedKey:(id)arg1;
- (id)conflictDetectionOrdinalForKey:(id)arg1;
- (id)description;
@property __weak id <SBKSyncTransactionProcessing> transactionProcessor; // @synthesize transactionProcessor=_transactionProcessor;
- (void)_validateTransactionProcessor:(id)arg1;
- (id)newRequest;
- (id)requestURL;
@property(readonly) NSString *domain; // @synthesize domain=_domain;
- (id)clampsKey;
- (id)initWithSyncBagContext:(id)arg1 syncAnchor:(id)arg2 keysToUpdate:(id)arg3 keysToDelete:(id)arg4 conflictDetectionType:(int)arg5;
- (id)initWithSyncRequestURL:(id)arg1 domain:(id)arg2 syncAnchor:(id)arg3 keysToUpdate:(id)arg4 keysToDelete:(id)arg5 conflictDetectionType:(int)arg6;

@end

