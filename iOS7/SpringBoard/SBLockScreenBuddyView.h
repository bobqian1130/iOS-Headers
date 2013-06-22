/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBLockOverlayView.h"

@class UIButton, UIImageView, UILabel, UIView;

@interface SBLockScreenBuddyView : SBLockOverlayView
{
    UILabel *_titleLabel;
    UIImageView *_logoImageView;
    BOOL _needToFadeToWhite;
    UIView *_activationInfoView;
    UIButton *_infoButton;
}

@property(retain, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;
@property(retain, nonatomic) UIView *activationInfoView; // @synthesize activationInfoView=_activationInfoView;
- (void)layoutSubviews;
- (void)setTitleString:(id)arg1;
- (void)setTitleHidden:(BOOL)arg1;
- (void)removeLogoView;
- (void)setLogoHidden:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 useWhiteLogo:(BOOL)arg2;

@end

