/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSIndexPath, UIView;

@interface UIViewAnimation : NSObject
{
    UIView *_view;
    NSIndexPath *_indexPath;
    struct CGRect _endRect;
    float _endAlpha;
    float _startFraction;
    float _endFraction;
    int _curve;
    BOOL _animateFromCurrentPosition;
    BOOL _shouldDeleteAfterAnimation;
    BOOL _editing;
    BOOL _shouldAnimateShadow;
    BOOL _shouldResetGroupOpacityAfterAnimation;
    BOOL _shouldAllowGroupOpacityAfterAnimation;
    BOOL _shouldClipToBoundsAfterAnimation;
}

@property(nonatomic) BOOL shouldClipToBoundsAfterAnimation; // @synthesize shouldClipToBoundsAfterAnimation=_shouldClipToBoundsAfterAnimation;
@property(nonatomic) BOOL shouldAllowGroupOpacityAfterAnimation; // @synthesize shouldAllowGroupOpacityAfterAnimation=_shouldAllowGroupOpacityAfterAnimation;
@property(nonatomic) BOOL shouldResetGroupOpacityAfterAnimation; // @synthesize shouldResetGroupOpacityAfterAnimation=_shouldResetGroupOpacityAfterAnimation;
@property(nonatomic) BOOL shouldAnimateShadow; // @synthesize shouldAnimateShadow=_shouldAnimateShadow;
@property(readonly, nonatomic) BOOL editing; // @synthesize editing=_editing;
@property(readonly, nonatomic) BOOL shouldDeleteAfterAnimation; // @synthesize shouldDeleteAfterAnimation=_shouldDeleteAfterAnimation;
@property(readonly, nonatomic) BOOL animateFromCurrentPosition; // @synthesize animateFromCurrentPosition=_animateFromCurrentPosition;
@property(readonly, nonatomic) int curve; // @synthesize curve=_curve;
@property(readonly, nonatomic) float endFraction; // @synthesize endFraction=_endFraction;
@property(readonly, nonatomic) float startFraction; // @synthesize startFraction=_startFraction;
@property(readonly, nonatomic) float endAlpha; // @synthesize endAlpha=_endAlpha;
@property(readonly, nonatomic) struct CGRect endRect; // @synthesize endRect=_endRect;
@property(readonly, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
- (id)description;
- (void)dealloc;
- (id)initWithView:(id)arg1 indexPath:(id)arg2 endRect:(struct CGRect)arg3 endAlpha:(float)arg4 startFraction:(float)arg5 endFraction:(float)arg6 curve:(int)arg7 animateFromCurrentPosition:(BOOL)arg8 shouldDeleteAfterAnimation:(BOOL)arg9 editing:(BOOL)arg10;

@end

