/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MediaPlayer/MPVideoOverlay.h>

#import "MPNowPlayingItemQueueInfoButtonDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"

@class MPNowPlayingItemQueueInfoButton, MPPadFullScreenTransportControls, NSString, UIActivityIndicatorView, UIImageView, UILabel, UINavigationBar, UINavigationButton, UINavigationItem, UIPopoverController;

@interface MPPadFullScreenVideoOverlay : MPVideoOverlay <UIPopoverControllerDelegate, MPNowPlayingItemQueueInfoButtonDelegate>
{
    MPPadFullScreenTransportControls *_transportControls;
    MPNowPlayingItemQueueInfoButton *_itemQueueInfoButton;
    UIImageView *_hudImageView;
    UINavigationBar *_navigationBar;
    UINavigationItem *_navigationItem;
    UIImageView *_navigationBarBackgroundShort;
    UIImageView *_navigationBarBackgroundTall;
    UIImageView *_navigationBarShadow;
    NSString *_title;
    UINavigationButton *_scaleModeButton;
    UILabel *_scrubSpeedLabel;
    UILabel *_scrubInstructionsLabel;
    UIPopoverController *_popoverController;
    UILabel *_loadingMovieLabel;
    UIActivityIndicatorView *_loadingMovieIndicator;
    unsigned int _layoutSubviewsActive:1;
    unsigned int _navigationBarHidden:1;
}

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)_scheduleHidePopoverTimer;
- (unsigned long long)_convertedPartsMask:(unsigned long long)arg1;
- (void)_hideScrubInstructions;
- (void)_showScrubInstructions;
- (void)_reconfigureNavigationBarAnimated:(BOOL)arg1;
- (void)_initSubviews;
- (id)_navBarBackgroundImageForProgressControl:(BOOL)arg1 tallStyle:(BOOL)arg2;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_isExternalPlaybackActiveDidChangeNotification:(id)arg1;
- (void)_videoViewScaleModeDidChangeNotification:(id)arg1;
- (void)_itemDurationAvailableNotification:(id)arg1;
- (void)hideAlternateTracks;
- (void)showAlternateTracks;
- (void)_scaleButton:(id)arg1;
- (void)_doneButton:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)detailSlider:(id)arg1 didChangeScrubSpeed:(int)arg2;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (id)navigationBar;
- (void)setDisabledParts:(unsigned long long)arg1;
- (unsigned long long)disabledParts;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setNavigationBarHidden:(BOOL)arg1;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setPlayer:(id)arg1;
- (void)setVideoViewController:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setAllowsWirelessPlayback:(BOOL)arg1;
- (BOOL)navigationBarHidden;
- (BOOL)allowsWirelessPlayback;
- (void)crossedTimeMakerWithEvent:(id)arg1;
- (void)_configureLinkButtonForCurrentItemTime;
- (int)nowPlayingItemQueueInfoButton:(id)arg1 willDisplayInfoType:(int)arg2;
- (void)setAlpha:(float)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
