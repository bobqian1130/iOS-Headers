/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIPercentDrivenInteractiveTransition.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class CADisplayLink, UIGestureRecognizer, UIPanGestureRecognizer, UIView, UIViewController, _UINavigationParallaxTransition;

@interface _UINavigationInteractiveTransitionBase : UIPercentDrivenInteractiveTransition <UIGestureRecognizerDelegate>
{
    UIView *_gestureRecognizerView;
    UIPanGestureRecognizer *_gestureRecognizer;
    int __interactionState;
    BOOL __transitionWasStopped;
    BOOL __stoppedTransitionWasCancelled;
    UIViewController *__parent;
    BOOL __useAugmentedShouldPopDecisionProcedure;
    BOOL __completesTransitionOnEnd;
    CADisplayLink *_displayLink;
    float _timestamps[3];
    float _velocities[3];
    float _accelerations[3];
    BOOL _shouldReverseTranslation;
    BOOL _springAnimationIsPending;
    BOOL _inSpringAnimation;
    _UINavigationParallaxTransition *_animationController;
    id <_UINavigationInteractiveTransitionBaseDelegate> _delegate;
    unsigned int _sampleCount;
    float _totalDistance;
    float _previousDisplacement;
    float _previousVelocity;
    float _previousAcceleration;
    float _averageVelocity;
    float _averageAcceleration;
    double _skipTimeStamp;
    double _previousTimeStamp;
}

@property(nonatomic) float averageAcceleration; // @synthesize averageAcceleration=_averageAcceleration;
@property(nonatomic) float averageVelocity; // @synthesize averageVelocity=_averageVelocity;
@property(nonatomic) float previousAcceleration; // @synthesize previousAcceleration=_previousAcceleration;
@property(nonatomic) float previousVelocity; // @synthesize previousVelocity=_previousVelocity;
@property(nonatomic) float previousDisplacement; // @synthesize previousDisplacement=_previousDisplacement;
@property(nonatomic) double previousTimeStamp; // @synthesize previousTimeStamp=_previousTimeStamp;
@property(nonatomic) double skipTimeStamp; // @synthesize skipTimeStamp=_skipTimeStamp;
@property(nonatomic) float totalDistance; // @synthesize totalDistance=_totalDistance;
@property(nonatomic) unsigned int sampleCount; // @synthesize sampleCount=_sampleCount;
@property(nonatomic) BOOL inSpringAnimation; // @synthesize inSpringAnimation=_inSpringAnimation;
@property(nonatomic) BOOL springAnimationIsPending; // @synthesize springAnimationIsPending=_springAnimationIsPending;
@property(nonatomic) id <_UINavigationInteractiveTransitionBaseDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, setter=_setCompletesTransitionOnEnd:) BOOL _completesTransitionOnEnd; // @synthesize _completesTransitionOnEnd=__completesTransitionOnEnd;
@property(nonatomic, setter=_setUseAugmentedShouldPopDecisionProcedure:) BOOL _useAugmentedShouldPopDecisionProcedure; // @synthesize _useAugmentedShouldPopDecisionProcedure=__useAugmentedShouldPopDecisionProcedure;
@property(nonatomic, setter=_setParent:) UIViewController *_parent; // @synthesize _parent=__parent;
@property(nonatomic, setter=_setStoppedTransitionWasCancelled:) BOOL _stoppedTransitionWasCancelled; // @synthesize _stoppedTransitionWasCancelled=__stoppedTransitionWasCancelled;
@property(nonatomic, setter=_setTransitionWasStopped:) BOOL _transitionWasStopped; // @synthesize _transitionWasStopped=__transitionWasStopped;
@property(nonatomic, setter=_setInteractionState:) int _interactionState; // @synthesize _interactionState=__interactionState;
@property(retain, nonatomic) _UINavigationParallaxTransition *animationController; // @synthesize animationController=_animationController;
@property(nonatomic) BOOL shouldReverseTranslation; // @synthesize shouldReverseTranslation=_shouldReverseTranslation;
@property(nonatomic) UIPanGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
- (void)startInteractiveTransition:(id)arg1;
- (void)_clearDisplayLinkBarTransitionDriver;
- (void)_installDisplayLinkBarTransitionDriver;
- (void)_displayLinkTick:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleNavigationTransition:(id)arg1;
- (void)setNotInteractiveTransition;
- (void)startInteractiveTransition;
- (float)_popTransitionRevealInitialDisplacement;
- (BOOL)popGesture:(id)arg1 withRemainingDuration:(float)arg2 shouldPopWithVelocity:(float *)arg3;
- (void)_updateStatistics:(id)arg1 firstSample:(BOOL)arg2 finalSample:(BOOL)arg3;
- (BOOL)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)_completeStoppedInteractiveTransition;
- (void)_stopInteractiveTransition;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
@property(readonly, nonatomic, getter=_navigationGesture) UIGestureRecognizer *navigationGesture;
- (void)_resetInteractionController;
- (void)dealloc;
- (id)initWithGestureRecognizerView:(id)arg1 animator:(id)arg2 delegate:(id)arg3;
- (id)gestureRecognizerView;

@end

