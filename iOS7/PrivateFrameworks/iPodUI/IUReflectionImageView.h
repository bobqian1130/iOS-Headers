/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class IUReflectionView, UIColor, UIImageView;

@interface IUReflectionImageView : UIView
{
    float _reflectionHeight;
    float _spacing;
    float _reflectionAlpha;
    BOOL _useImageSize;
    unsigned int _nonSquareImage:1;
    UIImageView *_imageView;
    IUReflectionView *_reflection;
    UIColor *_imageBackgroundColor;
}

@property(retain, nonatomic) UIColor *imageBackgroundColor; // @synthesize imageBackgroundColor=_imageBackgroundColor;
- (void).cxx_destruct;
- (void)setUseImageSize:(BOOL)arg1;
- (void)setReflectionVisible:(BOOL)arg1;
- (void)setReflectionAlphaWhenVisible:(float)arg1;
@property(nonatomic) BOOL nonSquareImage;
- (void)setImage:(id)arg1;
- (id)initWithReflectionHeight:(float)arg1 spacing:(float)arg2;
- (id)init;

@end

