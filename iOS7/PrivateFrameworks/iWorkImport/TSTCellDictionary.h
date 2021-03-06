/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class TSUIntegerKeyDictionary;

// Not exported
@interface TSTCellDictionary : NSObject
{
    TSUIntegerKeyDictionary *mDict;
    struct _opaque_pthread_rwlock_t mDictRWLock;
}

- (void)applyBlockToAllCells:(id)arg1;
- (id)allCells;
- (void)removeAllCells;
- (id)cellAtCellID:(CDStruct_0441cfb5)arg1;
- (void)setCell:(id)arg1 atCellID:(CDStruct_0441cfb5)arg2;
- (void)dealloc;
- (id)init;

@end

