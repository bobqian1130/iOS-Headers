/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "SBLockOverlayViewController-Protocol.h"

@class SBAwayViewPluginController;

@interface SBLockScreenPluginOverlayViewController : UIViewController <SBLockOverlayViewController>
{
    SBAwayViewPluginController *_pluginController;
}

- (id)_newOverlayView;
- (id)overlayView;
- (void)loadView;
- (id)initWithPluginController:(id)arg1;

@end

