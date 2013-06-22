/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MediaPlayer/MPTransportControls.h>

@class UIImage;

@interface MPFullScreenTransportControls : MPTransportControls
{
    UIImage *_backgroundImage;
    float _requiredFrameSizeWidth;
}

- (void).cxx_destruct;
- (void)_playbackModeDidChange;
- (void)_layoutVolumeSlider:(id)arg1;
- (void)unregisterForPlayerNotifications;
- (void)registerForPlayerNotifications;
- (void)reloadForAdditions:(id)arg1 removals:(id)arg2 animate:(BOOL)arg3;
- (id)newVolumeSlider;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)init;

@end

