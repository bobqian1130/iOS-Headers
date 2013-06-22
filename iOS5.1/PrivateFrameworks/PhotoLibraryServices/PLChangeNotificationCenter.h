/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSNotificationCenter, NSNumber, PLManagedObjectContext;

@interface PLChangeNotificationCenter : NSObject
{
    BOOL _isPostingChanges;
    NSMutableDictionary *_delayedBlocks;
    BOOL _isProcessingRemoteDidSave;
    struct dispatch_queue_s *_thumbnailIndexIsolation;
    NSMutableIndexSet *_changedThumbnailIndexes;
    unsigned int _thumbnailIndexesChangeCounter;
    int _cameraPreviewChangeListenerCount;
    NSNumber *_cameraPreviewChangedToken;
    int _stackViewImageChangeListenerCount;
    NSMutableArray *_snapshots;
    struct changeList_s _changedAlbumLists;
    struct contentChanges_s _albumListsContent;
    struct changeList_s _changedAlbums;
    struct contentChanges_s _albumsContent;
    struct changeList_s _changedAssets;
    PLManagedObjectContext *_moc;
    NSMutableArray *_enqueuedNotifications;
}

+ (void)forceFetchingAlbumReload;
+ (void)getInsertedAssets:(id)arg1 deletedAssets:(id)arg2 changedAssets:(id)arg3 fromContextDidChangeNotification:(id)arg4;
+ (void)getInsertedAssetCount:(unsigned int *)arg1 deletedAssetCount:(unsigned int *)arg2 updatedAssets:(id)arg3 fromContextDidChangeNotification:(id)arg4;
+ (void)processChangeHubEvent:(void *)arg1 withGroup:(struct dispatch_group_s *)arg2;
+ (void)distributeStackViewImageUpdatedForAlbumID:(id)arg1;
+ (void)distributeThumbnailUpdatedAtIndexes:(id)arg1;
+ (void)distributeThumbnailUpdatedAtIndex:(unsigned int)arg1;
+ (id)allManagedObjectKeysStrategy;
+ (id)defaultCenter;
- (void)removeStackViewImageChangeObserver:(id)arg1;
- (void)addStackViewImageChangeObserver:(id)arg1;
- (void)_unregisterForStackViewImageChanges;
- (void)_registerForStackViewImageChanges;
- (void)removeCameraPreviewWellImageChangeObserver:(id)arg1;
- (void)addCameraPreviewWellImageChangeObserver:(id)arg1;
- (void)_unregisterForCameraPreviewWellChanges;
- (void)_registerForCameraPreviewWellChanges;
- (void)managedObjectContext:(id)arg1 didProcessRemoteContextSave:(id)arg2 usingObjectIDs:(BOOL)arg3;
- (void)managedObjectContext:(id)arg1 willProcessRemoteContextSave:(id)arg2 usingObjectIDs:(BOOL)arg3;
@property(readonly, nonatomic) BOOL _shouldForceFetchingAlbumsToReload;
- (id)_takeSnapshotOfObject:(id)arg1 useCommitedValues:(BOOL)arg2;
- (id)_takeSnapshotFromCommittedValuesOfObject:(id)arg1;
- (id)_takeSnapshotOfObject:(id)arg1;
- (void)_takeSnapshotsFromContext:(id)arg1 forRemoteContextSaveNotification:(id)arg2 usingObjectIDs:(BOOL)arg3;
- (id)_snapshotForObject:(id)arg1;
- (id)descriptionOfSplitChanges;
- (id)_keysOfInterestForObject:(id)arg1;
- (BOOL)_isInterestedInUpdatesOfObject:(id)arg1;
- (void)_postEnqueuedNotifications;
- (void)_enqueueNotification:(id)arg1 object:(id)arg2 userInfoWithObjects:(const id *)arg3 forKeys:(const id *)arg4 count:(unsigned int)arg5;
- (void)_enqueueNotification:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)_enqueueAlbumListChangeNotification:(id)arg1;
- (void)_enqueueAlbumChangeNotification:(id)arg1;
- (void)_evaluateContainersWithUpdatedContent;
- (void)_splitContextDidChangeNotification:(id)arg1;
- (void)_cleanupState;
- (void)_persistUserAlbumChanges;
- (void)_enqueueAlbumNotifications;
- (void)_enqueueAlbumListNotifications;
- (void)_enqueuePhotoLibraryNotifications;
- (void)_enqueueAssetsLibraryNotification;
- (void)_sendNotificationsForSplitChanges;
- (void)postShouldReloadNotification;
- (void)processChangeHubEvent:(void *)arg1 withGroup:(struct dispatch_group_s *)arg2;
- (void)_processStackViewAlbumUpdatedEvent:(void *)arg1 withGroup:(struct dispatch_group_s *)arg2;
- (void)_processThumbnailsUpdatedEvent:(void *)arg1;
- (void)enumerateIndexMappingCachesForObject:(id)arg1 withBlock:(id)arg2;
- (id)_toOneRelationshipsOfInterestForObject:(id)arg1;
- (id)_attributesOfInterestForObject:(id)arg1;
- (id)_orderedRelationshipsOfInterestForObject:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)processContextDidChangeNotification:(id)arg1;
- (void)setPostProcessingHandlerForIdentifier:(id)arg1 block:(id)arg2;
- (void)removeObserver:(id)arg1 name:(id)arg2 object:(id)arg3;
- (void)removeObserver:(id)arg1;
- (id)addObserverForName:(id)arg1 object:(id)arg2 queue:(id)arg3 usingBlock:(id)arg4;
- (void)addObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (void)removeShouldReloadObserver:(id)arg1;
- (void)addShouldReloadObserver:(id)arg1;
- (void)removeAlbumListChangeObserver:(id)arg1 albumList:(struct NSObject *)arg2;
- (void)addAlbumListChangeObserver:(id)arg1 albumList:(struct NSObject *)arg2;
- (void)removeAlbumChangeObserver:(id)arg1 album:(struct NSObject *)arg2;
- (void)addAlbumChangeObserver:(id)arg1 album:(struct NSObject *)arg2;
@property(readonly, nonatomic) NSNotificationCenter *backingCenter;
- (void)enqueueNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end
