/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MediaPlayer/MPViewController.h>

@interface MPAbstractAlternateTracksViewController : MPViewController
{
    unsigned int _selectedTracks[2];
    unsigned int _previousTracks[2];
}

- (BOOL)_hasSubtitlesGroup;
- (BOOL)_hasAudioGroup;
- (unsigned int)typeForGroup:(int)arg1;
- (unsigned int)indexForGroup:(int)arg1;
- (id)arrayForGroup:(int)arg1;
- (unsigned int)countOfGroups;
- (id)alternateTracks;
- (void)saveChanges;
- (void)removeLoadingUI;
- (void)addLoadingUI;
- (void)reloadData;
- (void)_alternateTypesChangedNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end

