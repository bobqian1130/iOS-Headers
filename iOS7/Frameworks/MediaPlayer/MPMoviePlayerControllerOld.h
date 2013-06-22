/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MPMoviePlayerController, MPMoviePlayerControllerInternalOld;

@interface MPMoviePlayerControllerOld : NSObject
{
    MPMoviePlayerController *_moviePlayer;
    MPMoviePlayerControllerInternalOld *_internalOld;
}

+ (id)_playerKeysToObserve;
+ (BOOL)_playbackInProgress;
+ (void)_setPlaybackInProgress:(BOOL)arg1;
+ (id)_currentMoviePlayerController;
+ (void)_setCurrentMoviePlayerController:(id)arg1;
+ (Class)windowClass;
- (void).cxx_destruct;
- (void)viewControllerRequestsExit:(id)arg1;
- (void)_videoViewScaleModeDidChange:(id)arg1;
- (void)_bufferingStatusDidChangeNotification:(id)arg1;
- (void)_delayedHideOverlay;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (void)_expireImplicitAudioRouteChangePlaybackRestart;
- (void)_playbackEnded:(id)arg1;
- (void)_playbackRateChangedFrom:(float)arg1 to:(float)arg2;
- (void)_audioRouteChanged:(id)arg1;
- (void)_mediaServerDied:(id)arg1;
- (void)_itemFailedToPlay:(id)arg1;
- (void)_simpleRemoteNotification:(id)arg1;
- (void)_willTerminateNotification:(id)arg1;
- (void)_willResignNotification:(id)arg1;
- (void)_willBeginSuspendAnimationNotification:(id)arg1;
- (void)_willSuspendNotification:(id)arg1;
- (void)_pausePlaybackForNotification:(id)arg1;
- (void)_preloadingComplete;
- (void)_updateForCurrentMovieControlMode;
- (unsigned long long)_visiblePartsForMovieControlMode;
- (id)_localizedDescriptionForErrorCode:(int)arg1;
- (void)_playbackFailedWithError:(id)arg1;
- (void)_playerFadeOutAnimationDidEnd:(id)arg1 finished:(id)arg2;
- (void)_playerFadeInAnimationDidEnd:(id)arg1 finished:(id)arg2;
- (void)_delayedBeginFadeOut;
- (void)_playerFinishAndFadeOut;
- (void)_play;
- (void)_tearDownPlayer:(BOOL)arg1;
- (void)_createPlayer;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_unobserveAVPlayer;
- (void)_observeAVPlayer;
- (void)_checkNetworkMediaType;
- (id)_volumeAudioCategory;
- (void)_setMoviePlayer:(id)arg1;
- (double)initialPlaybackTime;
- (void)setInitialPlaybackTime:(double)arg1;
- (int)movieControlMode;
- (void)setMovieControlMode:(int)arg1;
- (int)scalingMode;
- (void)setScalingMode:(int)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
- (void)stop;
- (void)play;
- (id)contentURL;
- (id)initWithContentURL:(id)arg1;
- (void)dealloc;

@end

