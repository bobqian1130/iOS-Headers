/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface PKImageResizingConstraints : NSObject
{
    int _constraintType;
    float _fixedDimension;
    struct CGSize _size;
    float _minAspectRatio;
    float _maxAspectRatio;
    BOOL _respectAspectRatioRange;
    BOOL _outputMirrored;
    float _outputScale;
    float _outputBorderTrim;
}

+ (id)constraintsWithFixedSize:(struct CGSize)arg1;
+ (id)constraintsWithMinSize:(struct CGSize)arg1;
+ (id)constraintsWithMaxSize:(struct CGSize)arg1;
+ (id)constraintsWithMinSize:(struct CGSize)arg1 minAspectRatio:(float)arg2 maxAspectRatio:(float)arg3;
+ (id)constraintsWithMaxSize:(struct CGSize)arg1 minAspectRatio:(float)arg2 maxAspectRatio:(float)arg3;
+ (id)constraintsWithFixedSmallDimenstion:(float)arg1 minAspectRatio:(float)arg2 maxAspectRatio:(float)arg3;
+ (id)constraintsWithFixedLargeDimenstion:(float)arg1 minAspectRatio:(float)arg2 maxAspectRatio:(float)arg3;
+ (id)constraintsWithFixedHeight:(float)arg1 minAspectRatio:(float)arg2 maxAspectRatio:(float)arg3;
+ (id)constraintsWithFixedWidth:(float)arg1 minAspectRatio:(float)arg2 maxAspectRatio:(float)arg3;
@property(nonatomic) BOOL outputMirrored; // @synthesize outputMirrored=_outputMirrored;
@property(nonatomic) float outputBorderTrim; // @synthesize outputBorderTrim=_outputBorderTrim;
@property(nonatomic) float outputScale; // @synthesize outputScale=_outputScale;
- (id)_flippedConstraints;
- (BOOL)_reasonable;
- (BOOL)_getPixelCropRect:(struct CGRect *)arg1 pixelOutputSize:(struct CGSize *)arg2 forImageSize:(struct CGSize)arg3 scale:(float)arg4;
- (BOOL)getPixelCropRect:(struct CGRect *)arg1 pixelOutputSize:(struct CGSize *)arg2 forImage:(id)arg3;
- (id)resizedImage:(id)arg1;
- (id)init;

@end

