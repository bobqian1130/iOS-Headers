/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@interface _MKCalloutBackgroundMaskView : UIView
{
    UIView *_baseView;
    UIView *_topArrow;
    UIView *_bottomArrow;
    UIView *_leftArrow;
    UIView *_rightArrow;
}

@property(readonly, nonatomic) UIView *rightArrow; // @synthesize rightArrow=_rightArrow;
@property(readonly, nonatomic) UIView *leftArrow; // @synthesize leftArrow=_leftArrow;
@property(readonly, nonatomic) UIView *bottomArrow; // @synthesize bottomArrow=_bottomArrow;
@property(readonly, nonatomic) UIView *topArrow; // @synthesize topArrow=_topArrow;
@property(readonly, nonatomic) UIView *baseView; // @synthesize baseView=_baseView;
- (void)_removeArrows;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_setupViews;

@end

