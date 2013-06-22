/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class SBAwayViewPluginController, SBLockOverlayContext, SBLockScreenViewController;

@interface SBLockScreenPluginTransition : NSObject
{
    SBAwayViewPluginController *_fromController;
    SBAwayViewPluginController *_toController;
    SBLockScreenViewController *_lockScreenViewController;
    SBLockOverlayContext *_fromOverlay;
    SBLockOverlayContext *_toOverlay;
}

@property(readonly) SBLockOverlayContext *toOverlay; // @synthesize toOverlay=_toOverlay;
@property(readonly) SBAwayViewPluginController *toController; // @synthesize toController=_toController;
@property(readonly) SBLockOverlayContext *fromOverlay; // @synthesize fromOverlay=_fromOverlay;
@property(readonly) SBAwayViewPluginController *fromController; // @synthesize fromController=_fromController;
@property(readonly) SBLockScreenViewController *lockScreenViewController; // @synthesize lockScreenViewController=_lockScreenViewController;
- (void)_addToView;
- (void)_removeFromView;
- (void)beginTransition;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

@end

