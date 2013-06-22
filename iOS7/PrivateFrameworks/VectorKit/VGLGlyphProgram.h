/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VGLProgram.h>

@interface VGLGlyphProgram : VGLProgram
{
    int _uChannel;
    int _channel;
    int _uTextureSampler;
    int _textureSampler;
    int _uFadeTime;
    float _fadeTime;
    int _uParallaxNormal;
    Vec2Imp_1782d7e3 _parallaxNormal;
}

+ (id)fragName;
+ (id)vertName;
- (id).cxx_construct;
@property(nonatomic) Vec2Imp_1782d7e3 parallaxNormal;
@property(nonatomic) float fadeTime;
@property(nonatomic) int textureSampler;
@property(nonatomic) int channel;
- (void)setup;

@end

