/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol QLPreviewItemInteractionDelegate <NSObject>
- (void)previewItemDidExitFullScreen:(id)arg1;
- (void)previewItem:(id)arg1 willEnterFullScreenWithHostedWindow:(id)arg2;
- (void)previewItem:(id)arg1 setAVState:(id)arg2;
- (id)clientProcessAlertViewForPreviewItem:(id)arg1;
- (void)previewItem:(id)arg1 receivedTapOnURL:(id)arg2;
- (id)previewItem:(id)arg1 willSendRequest:(id)arg2;
- (void)previewItemDidLoad:(id)arg1 atIndex:(int)arg2 withError:(id)arg3;
- (void)previewItem:(id)arg1 requiresDisplayBundle:(id)arg2 withHints:(id)arg3;
- (void)previewItemWillLoad:(id)arg1;
- (void)previewItem:(id)arg1 willHideOverlayWithDuration:(double)arg2;
- (void)previewItem:(id)arg1 willShowOverlayWithDuration:(double)arg2;
- (void)showContentsWasTappedForPreviewItem:(id)arg1;
- (void)overlayWasInteractedWithOnPreviewItem:(id)arg1;
- (void)viewDidUpdateForPreviewItem:(id)arg1;
- (void)viewWasTappedOnPreviewItem:(id)arg1;
@end

