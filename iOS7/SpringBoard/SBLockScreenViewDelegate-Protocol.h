/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol SBLockScreenViewDelegate <NSObject>
- (void)lockScreenView:(id)arg1 didChangeTopLegibleColor:(id)arg2;
- (void)lockScreenView:(id)arg1 didEndScrollingOnPage:(int)arg2;
- (void)lockScreenViewWillEndDraggingWithPercentScrolled:(float)arg1 percentScrolledVelocity:(float)arg2 targetScrollPercentage:(float)arg3;
- (void)lockScreenViewDidScrollWithNewScrollPercentage:(float)arg1 tracking:(BOOL)arg2;
- (void)lockScreenViewDidBeginScrolling:(id)arg1;
- (void)lockScreenView:(id)arg1 didScrollToPage:(int)arg2;
@end

