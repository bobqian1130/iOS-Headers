/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface _CICompositeFilter : CIFilter
{
    CIImage *inputImage;
    CIImage *inputBackgroundImage;
}

+ (id)_kernel;
+ (id)customAttributes;
+ (id)_kernel_source;
+ (id)_kernel_name;
+ (id)_filter_display_name;
@property(retain, nonatomic) CIImage *inputBackgroundImage; // @synthesize inputBackgroundImage;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (struct CGRect)_extentForInputExtent:(struct CGRect)arg1 backgroundExtent:(struct CGRect)arg2;

@end

