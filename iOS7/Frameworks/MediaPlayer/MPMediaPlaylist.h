/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MediaPlayer/MPMediaItemCollection.h>

@class NSString;

@interface MPMediaPlaylist : MPMediaItemCollection
{
}

+ (BOOL)_isValidPlaylistProperty:(id)arg1;
+ (void)_createFilterableDictionary;
+ (BOOL)canFilterByProperty:(id)arg1;
- (id)representativeItem;
- (unsigned int)mediaTypes;
- (unsigned int)count;
- (id)items;
@property(readonly, nonatomic) int playlistAttributes;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) unsigned long long persistentID;
- (BOOL)existsInLibrary;
- (id)loadGeniusMixArtworkWithTileLength:(float)arg1 completionBlock:(id)arg2;
- (id)valueForProperty:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)initWithPersistentID:(unsigned long long)arg1;

@end

