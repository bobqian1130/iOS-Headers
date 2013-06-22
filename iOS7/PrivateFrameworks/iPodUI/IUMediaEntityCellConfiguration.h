/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iPodUI/IUArrayCellConfiguration.h>

@class MPDownloadProgressIndicator, MPImageCacheRequest, MPMediaDownloadObserver, MPMediaEntity, UIImage;

@interface IUMediaEntityCellConfiguration : IUArrayCellConfiguration
{
    MPImageCacheRequest *_artworkImageRequest;
    UIImage *_artwork;
    MPMediaEntity *_entity;
    BOOL _isGenius;
    BOOL _isSelectable;
    BOOL _isDisabled;
    MPMediaDownloadObserver *_downloadObserver;
    MPDownloadProgressIndicator *_progressIndicator;
    long long _downloadPersistentID;
}

@property(retain, nonatomic) MPDownloadProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) MPMediaDownloadObserver *downloadObserver; // @synthesize downloadObserver=_downloadObserver;
@property(nonatomic) BOOL isDisabled; // @synthesize isDisabled=_isDisabled;
@property(nonatomic) BOOL isSelectable; // @synthesize isSelectable=_isSelectable;
@property(nonatomic) BOOL isGenius; // @synthesize isGenius=_isGenius;
@property(readonly, nonatomic) MPMediaEntity *entity; // @synthesize entity=_entity;
@property(retain, nonatomic) UIImage *artwork; // @synthesize artwork=_artwork;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL displaysArtworkFromRepresentativeItem;
@property(readonly, nonatomic) struct CGSize artworkSize;
- (void)reloadStringsWithProperties:(id)arg1;
- (void)reloadImages;
- (id)displayProperties;
- (BOOL)canShowPurchasableMediaViews;
- (id)mediaItem;
- (void)setArtworkImageRequest:(id)arg1 artworkLoadCompletionHandler:(id)arg2;
- (id)newImageRequestWithMediaEntity:(id)arg1;
- (void)configureForEntity:(id)arg1 query:(id)arg2 entityIndex:(unsigned int)arg3 entityCount:(unsigned int)arg4;
- (void)reloadData;
- (id)description;
- (void)dealloc;

@end

