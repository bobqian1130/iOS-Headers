/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iPodUI/IUPortraitInfoOverlay.h>

#import "MFMailComposeViewControllerDelegate-Protocol.h"
#import "SKStoreProductViewControllerDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIActivityItemsSource-Protocol.h"

@class UIActionSheet;

@interface IUNowPlayingPortraitInfoOverlay : IUPortraitInfoOverlay <SKStoreProductViewControllerDelegate, UIActionSheetDelegate, MFMailComposeViewControllerDelegate, UIActivityItemsSource>
{
    id _actionSheetCompletionHandler;
    id _itemToShare;
    UIActionSheet *_radioActionSheet;
}

- (void).cxx_destruct;
- (void)_delayedSeedGeniusForControls:(id)arg1;
- (void)_buttonAvailabilityChanged:(id)arg1;
- (void)_appDefaultsChanged;
- (void)_appDefaultsChanged:(id)arg1;
- (id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)controlsOverlay:(id)arg1 adjustShuffleAndRepeatTypeForItem:(id)arg2;
- (BOOL)controlsOverlay:(id)arg1 shouldUseDetailScrubberForItem:(id)arg2;
- (unsigned int)shuffleTypeForPlaybackControls:(id)arg1;
- (unsigned int)repeatTypeForControlsOverlay:(id)arg1;
- (void)controlsOverlay:(id)arg1 didTapTrackInfoButtonForItem:(id)arg2;
- (void)controlsOverlay:(id)arg1 didTapRadioShareButtonForItem:(id)arg2;
- (void)controlsOverlay:(id)arg1 didTapRadioHistoryButtonForItem:(id)arg2;
- (void)controlsOverlay:(id)arg1 didTapRadioButtonForItem:(id)arg2;
- (BOOL)controlsOverlay:(id)arg1 shouldHideRadioButtonForItem:(id)arg2;
- (BOOL)controlsOverlay:(id)arg1 shouldDisableMailPodcastLinkButtonForItem:(id)arg2;
- (BOOL)controlsOverlay:(id)arg1 shouldHideMailPodcastLinkButtonForItem:(id)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)controlsOverlay:(id)arg1 didClickMailPodcastLinkButtonForItem:(id)arg2;
- (unsigned int)controlsOverlay:(id)arg1 playbackSpeedForItem:(id)arg2;
- (BOOL)controlsOverlay:(id)arg1 shouldDisablePlaybackSpeedButtonForItem:(id)arg2;
- (void)controlsOverlayDidClickPlaybackSpeedButton:(id)arg1;
- (BOOL)controlsOverlay:(id)arg1 shouldDisableFastFowardAndRewindButtonForItem:(id)arg2;
- (void)controlsOverlayDidClickFastForwardButton:(id)arg1;
- (void)controlsOverlayDidClickRewindButton:(id)arg1;
- (BOOL)hideGeniusButtonForPlaybackControls:(id)arg1;
- (BOOL)playbackControlsDidTapGeniusButton:(id)arg1;
- (BOOL)playbackControlsScrubberShouldDisplaySingleChapters:(id)arg1;
- (BOOL)playbackControls:(id)arg1 changedShuffleType:(unsigned int)arg2;
- (BOOL)playbackControls:(id)arg1 changedRepeatType:(unsigned int)arg2;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

