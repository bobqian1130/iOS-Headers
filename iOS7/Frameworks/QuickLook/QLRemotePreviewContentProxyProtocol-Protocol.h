/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol QLRemotePreviewContentProxyProtocol <NSObject>
- (void)_didExitFullScreen;
- (void)_willEnterFullScreenWithContext:(id)arg1;
- (void)_setAVState:(id)arg1 forPreviewItem:(id)arg2;
- (void)_previewContentControllerDidUnloadItem:(id)arg1;
- (void)_previewContentControllerDidLoadItem:(id)arg1 atIndex:(int)arg2 withError:(id)arg3;
- (void)_previewContentControllerReceivedTapOnURL:(id)arg1;
- (void)_previewContentControllerDidMoveToItemAtIndex:(int)arg1;
- (void)_previewContentControllerWillMoveToItemAtIndex:(int)arg1;
- (void)_showContentsWasTappedInPreviewContentController;
- (void)_overlayWasTappedInPreviewContentController;
- (void)_contentWasTappedInPreviewContentController;
- (void)_previewContentControllerWillHideOverlayWithDuration:(double)arg1;
- (void)_previewContentControllerWillShowOverlayWithDuration:(double)arg1;
- (void)_previewContentControllerGetPreviewItemAtIndex:(int)arg1 sourceUUID:(int)arg2 handler:(id)arg3;
@end

