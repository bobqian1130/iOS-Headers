/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreImage/CIFilter.h>

@class CIColor, CIImage, CIVector, NSNumber;

@interface CUIInnerGlowOrShadowFilter : CIFilter
{
    CIImage *inputImage;
    CIVector *inputOffset;
    NSNumber *inputRange;
    NSNumber *inputRadius;
    CIColor *inputColor;
}

+ (id)customAttributes;
@property(retain, nonatomic) CIColor *inputColor; // @synthesize inputColor;
@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;
@property(retain, nonatomic) NSNumber *inputRange; // @synthesize inputRange;
@property(retain, nonatomic) CIVector *inputOffset; // @synthesize inputOffset;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (void)setDefaults;
- (id)_kernel;

@end

