/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MusicLibrary/ML3QueryResultSet.h>

@class ML3QueryResultSet_BackingStore;

@interface ML3ContainerQueryResultSet : ML3QueryResultSet
{
    BOOL _needsSorting;
    BOOL _needsReversing;
    ML3QueryResultSet_BackingStore *_sortedBackingStore;
    long long _containerPID;
    unsigned int _entityLimit;
}

- (void).cxx_destruct;
- (BOOL)_updateToLibraryCurrentRevision;
- (unsigned int)entityLimit;
- (void)enumerateSectionsUsingBlock:(id)arg1;
- (void)enumeratePersistentIDsUsingBlock:(id)arg1;
- (long long)persistentIDAtIndex:(unsigned int)arg1;
- (id)sortedBackingStoreForDisplayOrdering;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_loadCurrentFullResults;
- (id)initWithQuery:(id)arg1;

@end

