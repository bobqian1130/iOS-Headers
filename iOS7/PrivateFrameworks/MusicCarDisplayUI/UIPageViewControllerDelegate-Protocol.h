/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol UIPageViewControllerDelegate <NSObject>

@optional
- (int)pageViewControllerPreferredInterfaceOrientationForPresentation:(id)arg1;
- (unsigned int)pageViewControllerSupportedInterfaceOrientations:(id)arg1;
- (int)pageViewController:(id)arg1 spineLocationForInterfaceOrientation:(int)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(BOOL)arg2 previousViewControllers:(id)arg3 transitionCompleted:(BOOL)arg4;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
@end

