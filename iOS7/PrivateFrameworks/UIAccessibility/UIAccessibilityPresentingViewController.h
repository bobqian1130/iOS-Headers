/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

@class UIWindow;

@interface UIAccessibilityPresentingViewController : UIViewController
{
    UIWindow *_presentationWindow;
}

- (void)_voiceOverStatusChanged;
- (void)_cleanUpPresentationWindow;
- (void)dismissViewControllerWithTransition:(int)arg1 completion:(id)arg2;
- (void)presentViewController:(id)arg1 withTransition:(int)arg2 completion:(id)arg3;
- (void)loadView;
- (void)dealloc;
- (id)init;

@end

