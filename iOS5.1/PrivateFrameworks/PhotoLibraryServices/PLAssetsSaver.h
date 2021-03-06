/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface PLAssetsSaver : NSObject
{
}

+ (id)publicAssetsLibraryErrorFromPrivateError:(id)arg1;
+ (id)publicAssetsLibraryErrorFromPrivateDomain:(id)arg1 withPrivateCode:(int)arg2;
+ (id)sharedAssetsSaver;
- (void)saveSyncedAssets:(id)arg1 completionBlock:(id)arg2;
- (void)_saveSyncedVideoAtPath:(id)arg1 properties:(id)arg2 completionBlock:(id)arg3;
- (void)importFilesWithMasterPath:(id)arg1 sidecarFileInfo:(id)arg2 intoEventWithName:(id)arg3 importSessionIdentifier:(id)arg4 isPhotoStreamsPublishCandidate:(BOOL)arg5;
- (void)saveImageAtPathToCameraRoll:(id)arg1 creationDate:(id)arg2 completionBlock:(id)arg3;
- (void)reenqueueAssetUUIDsForPhotoStreamPublication:(id)arg1;
- (void)deletePhotoStreamAssetsWithUUIDs:(id)arg1 streamID:(id)arg2;
- (void)deletePhotoStreamDataForStreamID:(id)arg1;
- (void)saveOneWayATCSyncedImage:(id)arg1 imageData:(id)arg2 eventUUID:(id)arg3 properties:(id)arg4 completionBlock:(id)arg5;
- (void)savePhotoStreamVideoAtPath:(id)arg1 properties:(id)arg2 completionBlock:(id)arg3;
- (void)savePhotoStreamImage:(id)arg1 imageData:(id)arg2 properties:(id)arg3 completionBlock:(id)arg4;
- (void)saveVideoAtPath:(id)arg1 properties:(id)arg2 completionTarget:(id)arg3 completionSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (void)saveVideoAtPath:(id)arg1 properties:(id)arg2 completionBlock:(id)arg3;
- (void)saveImage:(id)arg1 imageData:(id)arg2 properties:(id)arg3 completionTarget:(id)arg4 completionSelector:(SEL)arg5 contextInfo:(void *)arg6;
- (void)saveImage:(id)arg1 properties:(id)arg2 completionBlock:(id)arg3;
- (void)saveImageRef:(struct CGImage *)arg1 orientation:(int)arg2 imageData:(id)arg3 properties:(id)arg4 completionBlock:(id)arg5;
- (void)_saveVideoAtPath:(id)arg1 properties:(id)arg2 completionBlock:(id)arg3;
- (void)_saveImage:(id)arg1 imageData:(id)arg2 properties:(id)arg3 completionBlock:(id)arg4;
- (id)_createWriteVideoCompletionBlockWithVideoPath:(SEL)arg1 target:(id)arg2 selector:(id)arg3 contextInfo:(SEL)arg4;
- (id)_createWriteImageCompletionBlockWithImage:(SEL)arg1 target:(id)arg2 selector:(id)arg3 contextInfo:(SEL)arg4;
- (void)regenerateVideoThumbnailsForVideo:(id)arg1 withCreationDate:(id)arg2 progressStack:(CDStruct_32410e63 *)arg3 completionBlock:(id)arg4;
- (void)saveCameraVideoAtPath:(id)arg1 withMetadata:(id)arg2 thumbnailImage:(id)arg3 createPreviewWellImage:(BOOL)arg4 progressStack:(CDStruct_32410e63 *)arg5 videoHandler:(id)arg6 requestEnqueuedBlock:(void)arg7 completionBlock:(id)arg8;
- (void)saveCameraImage:(id)arg1 metadata:(id)arg2 additionalProperties:(id)arg3 requestEnqueuedBlock:(id)arg4;
- (void)_addCameraAssetToLibraryWithPath:(id)arg1 thumbnailImage:(id)arg2 metadata:(id)arg3 assetType:(int)arg4 kind:(int)arg5 completionHandler:(id)arg6;
- (void)queueJobData:(id)arg1 completionBlock:(id)arg2;
- (void)queueJobData:(id)arg1 requestEnqueuedBlock:(id)arg2 completionBlock:(void)arg3 imageSurface:(id)arg4 previewImageSurface:(void)arg5;
- (void)requestAsynchronousImageFromAsset:(id)arg1 withFormat:(int)arg2 completionBlock:(id)arg3;
- (void)requestSynchronousImageFromAsset:(id)arg1 withFormat:(int)arg2 completionBlock:(id)arg3;
- (id)defaultExtensionForAssetType:(int)arg1;
- (id)pathForNewAssetOfType:(int)arg1 extension:(id)arg2;
- (void)_requestAccess;
- (void)dealloc;

@end

