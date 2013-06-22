/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class PKPassGroupView, UIPanGestureRecognizer, _UIDynamicValueAnimation;

@interface PKPassGroupViewVerticalPanAnimator : NSObject
{
    _UIDynamicValueAnimation *_panningAnimation;
    UIPanGestureRecognizer *_gestureRecognizer;
    PKPassGroupView *_panningGroupView;
    float _panningViewTargetScale;
    struct CGPoint _panningViewStartPosition;
    struct CGPoint _panningViewTargetPosition;
}

@property(nonatomic) float panningViewTargetScale; // @synthesize panningViewTargetScale=_panningViewTargetScale;
@property(nonatomic) struct CGPoint panningViewTargetPosition; // @synthesize panningViewTargetPosition=_panningViewTargetPosition;
@property(nonatomic) struct CGPoint panningViewStartPosition; // @synthesize panningViewStartPosition=_panningViewStartPosition;
@property(retain, nonatomic) PKPassGroupView *panningGroupView; // @synthesize panningGroupView=_panningGroupView;
@property(retain, nonatomic) UIPanGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
- (void)dismissWithStartVelocity:(float)arg1 completion:(id)arg2;
- (id)_dynamicAnimationWithStart:(float)arg1 target:(float)arg2 initialVelocity:(float)arg3;
- (void)layoutViewsWithY:(float)arg1;
- (void)stop;
- (void)dealloc;
- (id)initWithGroupView:(id)arg1;

@end

