/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLAssetContainerListChangeNotification.h>

#import "PLIndexMapperDataSource-Protocol.h"

@class NSIndexSet, PLFilteredAlbumList, PLIndexMapper;

@interface PLFilteredAlbumListChangeNotification : PLAssetContainerListChangeNotification <PLIndexMapperDataSource>
{
    PLFilteredAlbumList *_albumList;
    NSIndexSet *_oldFilteredIndexes;
    NSIndexSet *_filteredIndexes;
    PLIndexMapper *_indexMapper;
    PLAssetContainerListChangeNotification *_backingNotification;
}

+ (id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(id)arg3;
- (id)_changedObjects;
- (BOOL)_getOldSet:(id *)arg1 newSet:(id *)arg2;
- (id)_diffDescription;
- (id)description;
- (BOOL)countDidChange;
- (BOOL)shouldReload;
- (id)albumList;
- (id)object;
- (void)dealloc;
- (id)initWithFilteredAlbumList:(id)arg1 albumListChangeNotification:(id)arg2;
- (id)init;
- (BOOL)shouldIncludeObjectAtIndex:(unsigned int)arg1;
@property(copy, nonatomic) NSIndexSet *filteredIndexes;
@property(readonly, nonatomic) PLIndexMapper *indexMapper;
@property(readonly, nonatomic) NSIndexSet *updatedFilteredIndexes;

@end

