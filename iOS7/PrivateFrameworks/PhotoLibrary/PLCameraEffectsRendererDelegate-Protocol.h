/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol PLCameraEffectsRendererDelegate <NSObject>
- (void)cameraEffectsRenderer:(id)arg1 didFinishTransitionToShowGrid:(_Bool)arg2;
- (void)cameraEffectsRenderer:(id)arg1 didStartTransitionToShowGrid:(_Bool)arg2 animated:(_Bool)arg3;
- (void)cameraEffectsRenderer:(id)arg1 willTransitionToShowGrid:(_Bool)arg2;
- (void)cameraEffectsRenderer:(id)arg1 requestsVideoDataOutputEnabled:(_Bool)arg2;
- (void)cameraEffectsRenderer:(id)arg1 requestsPreviewLayerEnabled:(_Bool)arg2;
- (void)cameraEffectsRendererDidStartPreview:(id)arg1;
@end

