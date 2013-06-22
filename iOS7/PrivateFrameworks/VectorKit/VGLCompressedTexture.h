/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VGLTexture.h>

@class NSData, NSMutableArray;

@interface VGLCompressedTexture : VGLTexture
{
    NSData *_data;
    NSMutableArray *_imageData;
    unsigned int _surfaces;
    unsigned int _mipmapLevels;
    struct {
        unsigned int hasAlpha:1;
        unsigned int isCubeMap:1;
        unsigned int isMipmapped:1;
        unsigned int isVerticalFlipped:1;
    } _flags;
    unsigned int _internalFormat;
}

- (id).cxx_construct;
- (BOOL)loadTexture;
- (BOOL)decodeTexture;
- (void)dealloc;
- (id)initWithData:(id)arg1;

@end

