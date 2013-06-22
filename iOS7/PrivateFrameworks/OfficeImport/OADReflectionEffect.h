/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OADEffect.h>

@interface OADReflectionEffect : OADEffect
{
    float mBlurRadius;
    float mStartOpacity;
    float mStartPosition;
    float mEndOpacity;
    float mEndPosition;
    float mDistance;
    float mDirection;
    float mFadeDirection;
    float mXScale;
    float mYScale;
    float mXSkew;
    float mYSkew;
    int mAlignment;
    BOOL mRotateWithShape;
}

- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)setRotateWithShape:(BOOL)arg1;
- (BOOL)rotateWithShape;
- (void)setAlignment:(int)arg1;
- (int)alignment;
- (void)setYSkew:(float)arg1;
- (float)ySkew;
- (void)setXSkew:(float)arg1;
- (float)xSkew;
- (void)setYScale:(float)arg1;
- (float)yScale;
- (void)setXScale:(float)arg1;
- (float)xScale;
- (void)setFadeDirection:(float)arg1;
- (float)fadeDirection;
- (void)setDirection:(float)arg1;
- (float)direction;
- (void)setDistance:(float)arg1;
- (float)distance;
- (void)setEndPosition:(float)arg1;
- (float)endPosition;
- (void)setEndOpacity:(float)arg1;
- (float)endOpacity;
- (void)setStartPosition:(float)arg1;
- (float)startPosition;
- (void)setStartOpacity:(float)arg1;
- (float)startOpacity;
- (void)setBlurRadius:(float)arg1;
- (float)blurRadius;
- (void)setStyleColor:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

