/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/MFPBrush.h>

@class NSArray;

@interface MFPGradientBrush : MFPBrush
{
    struct CGAffineTransform mTransform;
    NSArray *mBlend;
    NSArray *mColorBlend;
    int mWrapMode;
    NSArray *mStops;
    struct CGShading *mShading;
    struct CGFunction *mShadingFunction;
}

- (id).cxx_construct;
- (void)createPhoneBrush;
- (id)color;
- (void)fillPath:(id)arg1;
- (void)setWrapMode:(int)arg1;
- (void)setColorBlend:(id)arg1;
- (void)setBlend:(id)arg1;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (void)dealloc;
- (id)init;
- (void)createShading;
- (void)createShadingFunction;
- (void)createStopsFromStartAndEndColors;
- (void)createStopsFromBlend;
- (void)createStopsFromColorBlend;
- (id)colorAtPosition:(float)arg1;
- (id)endColor;
- (id)startColor;

@end

