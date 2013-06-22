/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface CIImage : NSObject <NSCoding, NSCopying>
{
    void *_priv;
}

+ (id)imageWithInternalRepresentation:(void *)arg1;
+ (id)imageWithContentsOfFile:(id)arg1 options:(id)arg2;
+ (id)imageWithContentsOfFile:(id)arg1;
+ (id)imageWithContentsOfURL:(id)arg1 options:(id)arg2;
+ (id)imageWithContentsOfURL:(id)arg1;
+ (id)imageWithData:(id)arg1 options:(id)arg2;
+ (id)imageWithData:(id)arg1;
+ (id)emptyImage;
+ (id)noiseImagePadded;
+ (id)noiseImage;
+ (id)imageWithColor:(id)arg1;
+ (id)imageWithCVPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2;
+ (id)imageWithCVPixelBuffer:(struct __CVBuffer *)arg1;
+ (id)imageWithTexture:(unsigned int)arg1 size:(struct CGSize)arg2 options:(id)arg3;
+ (id)imageWithTexture:(unsigned int)arg1 size:(struct CGSize)arg2 flipped:(BOOL)arg3 colorSpace:(struct CGColorSpace *)arg4;
+ (id)imageWithBitmapData:(id)arg1 bytesPerRow:(unsigned long)arg2 size:(struct CGSize)arg3 format:(int)arg4 colorSpace:(struct CGColorSpace *)arg5;
+ (id)imageWithBitmapData:(id)arg1 bytesPerRow:(unsigned long)arg2 size:(struct CGSize)arg3 format:(int)arg4 options:(id)arg5;
+ (id)imageWithCGImage:(struct CGImage *)arg1 options:(id)arg2;
+ (id)imageWithCGImage:(struct CGImage *)arg1;
+ (id)imageWithIOSurface:(struct __IOSurface *)arg1 options:(id)arg2;
+ (id)imageWithIOSurface:(struct __IOSurface *)arg1;
- (struct CGRect)regionOfInterestForImage:(id)arg1 inRect:(struct CGRect)arg2;
- (void *)_internalRepresentation;
- (id)_initWithInternalRepresentation:(void *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)filteredImage:(id)arg1 keysAndValues:(id)arg2;
- (id)properties;
- (id)description;
- (void)dealloc;
- (struct CGRect)extent;
- (id)_imageByApplyingBlur:(double)arg1;
- (id)_imageByApplyingGamma:(double)arg1;
- (id)_imageByUnpremultiplying;
- (id)_imageByPremultiplying;
- (id)imageByCroppingToRect:(struct CGRect)arg1;
- (id)imageByApplyingTransform:(struct CGAffineTransform)arg1;
- (id)initWithContentsOfFile:(id)arg1 options:(id)arg2;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 options:(id)arg2;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithData:(id)arg1 options:(id)arg2;
- (id)initWithData:(id)arg1;
- (id)imageByApplyingOrientation:(int)arg1;
- (struct CGAffineTransform)imageTransformForOrientation:(int)arg1;
- (id)initWithColor:(id)arg1;
- (id)initWithColorR:(float)arg1 G:(float)arg2 B:(float)arg3 A:(float)arg4;
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2;
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1;
- (id)initWithTexture:(unsigned int)arg1 size:(struct CGSize)arg2 options:(id)arg3;
- (id)initWithTexture:(unsigned int)arg1 size:(struct CGSize)arg2 flipped:(BOOL)arg3 colorSpace:(struct CGColorSpace *)arg4;
- (id)initWithBitmapData:(id)arg1 bytesPerRow:(unsigned long)arg2 size:(struct CGSize)arg3 format:(int)arg4 options:(id)arg5;
- (id)initWithBitmapData:(id)arg1 bytesPerRow:(unsigned long)arg2 size:(struct CGSize)arg3 format:(int)arg4 colorSpace:(struct CGColorSpace *)arg5;
- (id)_initWithBitmapData:(id)arg1 bytesPerRow:(unsigned long)arg2 size:(struct CGSize)arg3 format:(int)arg4 options:(id)arg5;
- (id)initWithCGImageSource:(struct CGImageSource *)arg1 index:(unsigned long)arg2 options:(id)arg3;
- (id)initWithCGImage:(struct CGImage *)arg1 options:(id)arg2;
- (id)_initNaiveWithCGImage:(struct CGImage *)arg1 options:(id)arg2;
- (id)initWithCGImage:(struct CGImage *)arg1;
- (id)initWithIOSurface:(struct __IOSurface *)arg1 options:(id)arg2;
- (id)initWithIOSurface:(struct __IOSurface *)arg1;
- (id)autoRedEyeFilterWithFeatures:(id)arg1 options:(id)arg2;
- (id)autoRedEyeFilterWithFeatures:(id)arg1 imageProperties:(id)arg2 options:(id)arg3;
- (id)_autoRedEyeFilterWithFeatures:(id)arg1 imageProperties:(id)arg2 context:(id)arg3 options:(id)arg4;
- (id)_dictForFeature:(id)arg1 scale:(float)arg2 imageHeight:(float)arg3;
- (id)autoAdjustmentFiltersWithOptions:(id)arg1;
- (id)autoAdjustmentFilters;
- (id)autoAdjustmentFiltersWithImageProperties:(id)arg1 options:(id)arg2;
- (id)_scaleImageToMaxDimension:(unsigned int)arg1;

@end

