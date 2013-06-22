/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ACAccount, NSOperationQueue, SLFacebookAlbum;

@interface SLFacebookAlbumManager : NSObject
{
    BOOL _isCanceled;
    NSOperationQueue *photoQueue;
    ACAccount *_account;
    id <SLFacebookAlbumManagerDelegate> _delegate;
    SLFacebookAlbum *_selectedAlbum;
}

@property(retain) SLFacebookAlbum *selectedAlbum; // @synthesize selectedAlbum=_selectedAlbum;
@property __weak id <SLFacebookAlbumManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) ACAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)loadCoverImageForAlbum:(id)arg1;
- (void)performAlbumRequestWithBatchRequests:(id)arg1 handler:(id)arg2;
- (void)fetchDefaultAlbum:(id)arg1;
- (void)refreshAlbums;
- (void)handleDefaultAlbumFetchResponse:(id)arg1 handler:(id)arg2 error:(void)arg3;
- (id)defaultAlbumWithDefaultAlbumResponse:(id)arg1;
- (id)parseAlbumsWithResponse:(id)arg1;
- (void)handleAlbumResponse:(id)arg1 error:(id)arg2;
- (id)checkErrorResponse:(id)arg1;
- (id)initWithAccount:(id)arg1;

@end

