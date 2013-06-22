/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VGLProgram.h>

@interface VGLGroundCoverProgram : VGLProgram
{
    int _uVegetationAlpha;
    float _vegetationAlpha;
    int _uVegetationBrightness;
    float _vegetationBrightness;
    int _uLandSampler;
    int _landSampler;
    int _uVegetationSampler;
    int _vegetationSampler;
}

+ (id)fragName;
+ (id)vertName;
@property(nonatomic) int vegetationSampler; // @synthesize vegetationSampler=_vegetationSampler;
@property(nonatomic) int landSampler; // @synthesize landSampler=_landSampler;
@property(nonatomic) float vegetationBrightness; // @synthesize vegetationBrightness=_vegetationBrightness;
@property(nonatomic) float vegetationAlpha; // @synthesize vegetationAlpha=_vegetationAlpha;
- (void)setup;

@end

