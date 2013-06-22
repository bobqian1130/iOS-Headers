/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIImageView.h"

@class NSString, UIColor, UILabel, UIView;

@interface SKUICountdownFlapView : UIImageView
{
    UIView *_backgroundViewBot;
    UIView *_backgroundViewTop;
    UIImageView *_backgroundViewTransitionBot;
    UIImageView *_backgroundViewTransitionTop;
    float _factor;
    UIColor *_flapTopColor;
    UIColor *_flapBottomColor;
    UILabel *_labelBot;
    UILabel *_labelTop;
    UILabel *_labelTransitionBot;
    UILabel *_labelTransitionTop;
    int _position;
    NSString *_string;
    UIColor *_textColor;
}

@property(readonly, nonatomic) int position; // @synthesize position=_position;
@property(readonly, nonatomic) UIColor *flapBottomColor; // @synthesize flapBottomColor=_flapBottomColor;
@property(readonly, nonatomic) UIColor *flapTopColor; // @synthesize flapTopColor=_flapTopColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;
- (struct CATransform3D)_transformForAngle:(float)arg1 isTop:(BOOL)arg2;
- (id)_newBackgroundImageForTop:(int)arg1;
- (id)_newLabel;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithPosition:(int)arg1 flapTopColor:(id)arg2 flapBottomColor:(id)arg3;

@end

