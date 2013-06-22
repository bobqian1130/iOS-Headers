/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSURLConnectionDelegate-Protocol.h"

@class MSASPConnectionGate, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface MSASProtocol : NSObject <NSURLConnectionDelegate>
{
    BOOL _isShuttingDown;
    MSASPConnectionGate *_gate;
    NSObject<OS_dispatch_queue> *_pendingConnectionsQueue;
    NSObject<OS_dispatch_group> *_pendingConnectionsGroup;
    NSString *_personID;
    NSURL *_baseURL;
    NSString *_serverSideConfigVersion;
    NSString *_headerVersion;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_memberQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // @synthesize memberQueue=_memberQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSString *headerVersion; // @synthesize headerVersion=_headerVersion;
@property(nonatomic) BOOL isShuttingDown; // @synthesize isShuttingDown=_isShuttingDown;
@property(retain, nonatomic) NSString *serverSideConfigVersion; // @synthesize serverSideConfigVersion=_serverSideConfigVersion;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(readonly, nonatomic) NSString *personID; // @synthesize personID=_personID;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *pendingConnectionsGroup; // @synthesize pendingConnectionsGroup=_pendingConnectionsGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pendingConnectionsQueue; // @synthesize pendingConnectionsQueue=_pendingConnectionsQueue;
@property(retain, nonatomic) MSASPConnectionGate *gate; // @synthesize gate=_gate;
- (void).cxx_destruct;
- (void)getAlbumURLForAlbumWithGUID:(id)arg1 completionBlock:(id)arg2;
- (void)getServerSideConfigCompletionBlock:(id)arg1;
- (void)setAlbumSyncedState:(id)arg1 forAlbum:(id)arg2 albumStateCtag:(id)arg3 completionBlock:(id)arg4;
- (void)setAssetCollectionSyncedState:(id)arg1 forAssetCollection:(id)arg2 inAlbum:(id)arg3 assetCollectionStateCtag:(id)arg4 completionBlock:(id)arg5;
- (void)getAlbumSyncedStateForAlbum:(id)arg1 assetCollectionStateBlock:(id)arg2 completionBlock:(void)arg3;
- (void)getCommentsFromAssetCollection:(id)arg1 inAlbum:(id)arg2 albumURLString:(id)arg3 fromPosition:(int)arg4 completionBlock:(id)arg5;
- (void)acceptInvitationWithToken:(id)arg1 completionBlock:(id)arg2;
- (void)unsubscribeFromAlbum:(id)arg1 completionBlock:(id)arg2;
- (void)subscribeToAlbum:(id)arg1 completionBlock:(id)arg2;
- (void)getTokensForAssets:(id)arg1 inAlbum:(id)arg2 albumURLString:(id)arg3 completionBlock:(id)arg4;
- (id)_couldNotReauthorizeError;
- (void)getAssetCollections:(id)arg1 inAlbum:(id)arg2 albumURLString:(id)arg3 completionBlock:(id)arg4;
- (void)albumSummaryAlbum:(id)arg1 albumURLString:(id)arg2 resetSync:(BOOL)arg3 resetSyncedBlock:(id)arg4 assetCollectionChangeBlock:(void)arg5 albumSharingInfoChangeBlock:(id)arg6 completionBlock:(void)arg7;
- (void)getSharingInfoForAlbum:(id)arg1 albumURLString:(id)arg2 completionBlock:(id)arg3;
- (void)getChangesRootCtag:(id)arg1 completionBlock:(id)arg2;
- (void)deleteComment:(id)arg1 fromAssetCollection:(id)arg2 inAlbum:(id)arg3 albumURLString:(id)arg4 completionBlock:(id)arg5;
- (void)deleteAssetCollections:(id)arg1 inAlbum:(id)arg2 completionBlock:(id)arg3;
- (void)deleteAlbum:(id)arg1 completionBlock:(id)arg2;
- (void)setMultipleContributorsEnabled:(BOOL)arg1 forAlbum:(id)arg2 completionBlock:(id)arg3;
- (void)setPublicAccessEnabled:(BOOL)arg1 forAlbum:(id)arg2 completionBlock:(id)arg3;
- (void)addComment:(id)arg1 toAssetCollection:(id)arg2 inAlbum:(id)arg3 albumURLString:(id)arg4 completionBlock:(id)arg5;
- (void)removeSharingRelationships:(id)arg1 fromAlbum:(id)arg2 completionBlock:(id)arg3;
- (void)addSharingRelationships:(id)arg1 toAlbum:(id)arg2 completionBlock:(id)arg3;
- (void)sendUploadCompleteSuccessfulAssetCollections:(id)arg1 failedAssetCollections:(id)arg2 album:(id)arg3 completionBlock:(id)arg4;
- (BOOL)responseDict:(id)arg1 containsLimitErrorCode:(id)arg2 outMaxAllowed:(id *)arg3;
- (void)getVideoURL:(id)arg1 forAssetCollectionWithGUID:(id)arg2 inAlbumWithGUID:(id)arg3 albumURLString:(id)arg4 completionBlock:(id)arg5;
- (void)getUploadTokens:(id)arg1 forAssetCollectionWithGUID:(id)arg2 inAlbumWithGUID:(id)arg3 albumURLString:(id)arg4 completionBlock:(id)arg5;
- (void)putAssetCollections:(id)arg1 intoAlbum:(id)arg2 albumURLString:(id)arg3 completionBlock:(id)arg4;
- (void)updateAlbum:(id)arg1 albumURLString:(id)arg2 completionBlock:(id)arg3;
- (void)createAlbum:(id)arg1 completionBlock:(id)arg2;
- (id)_getAlbumURL;
- (id)_serverSideConfigURL;
- (id)_setAlbumStateURL;
- (id)_setAssetStateURL;
- (id)_albumStateURL;
- (id)_setCommentPositionURL;
- (id)_getCommentsURLWithBaseURL:(id)arg1;
- (id)_unsubscribeURL;
- (id)_subscribeURL;
- (id)_getTokensURLWithBaseURL:(id)arg1;
- (id)_getAssetsURLWithBaseURL:(id)arg1;
- (id)_albumSummaryURLWithBaseURL:(id)arg1;
- (id)_sharingInfoURLWithBaseURL:(id)arg1;
- (id)_getChangesURL;
- (id)_deleteCommentURLWithBaseURL:(id)arg1;
- (id)_deleteAssetsURLWithBaseURL:(id)arg1;
- (id)_deleteURLWithBaseURL:(id)arg1;
- (id)_enableMultipleContributorsURLWithBaseURL:(id)arg1;
- (id)_enablePublicAccessURLWithBaseURL:(id)arg1;
- (id)_addCommentURLWithBaseURL:(id)arg1;
- (id)_unshareURL;
- (id)_shareURL;
- (id)_uploadCompleteURLWithBaseURL:(id)arg1;
- (id)_getVideoURLWithBaseURL:(id)arg1;
- (id)_getUploadTokensURLWithBaseURL:(id)arg1;
- (id)_putAssetsURLWithBaseURL:(id)arg1;
- (id)_updateAlbumURLWithBaseURL:(id)arg1;
- (id)_createAlbumURL;
- (id)errorFromStandardProcessingOnResponse:(id)arg1 responseObject:(id)arg2 checkServerSideConfigVersion:(BOOL)arg3 error:(id)arg4 body:(id)arg5;
- (id)HTTPErrorWithStatusCode:(int)arg1;
- (void)sendURLRequest:(id)arg1 method:(id)arg2 bodyObj:(id)arg3 checkServerSideConfigVersion:(BOOL)arg4 completionBlock:(id)arg5;
- (void)sendURLRequest:(id)arg1 bodyObj:(id)arg2 completionBlock:(id)arg3;
- (id)stopHandlerBlock;
- (void)dealloc;
- (void)stopCompletionBlock:(id)arg1;
- (void)shutDownCompletionBlock:(id)arg1;
- (id)stoppingError;
- (id)shutDownError;
- (id)initWithPersonID:(id)arg1;

@end

