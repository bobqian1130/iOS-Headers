/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/OADFill.h>

@class OADBlipRef, OADImageFillTechnique, OADRelativeRect;

@interface OADImageFill : OADFill
{
    OADBlipRef *mBlipRef;
    BOOL mIsBlipRefOverridden;
    OADRelativeRect *mSourceRect;
    BOOL mIsSourceRectOverridden;
    long mDpi;
    BOOL mIsDpiOverridden;
    BOOL mRotateWithShape;
    BOOL mIsRotateWithShapeOverridden;
    OADImageFillTechnique *mTechnique;
    BOOL mIsTechniqueOverridden;
}

+ (id)defaultProperties;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)setStyleColor:(id)arg1;
- (BOOL)isTechniqueOverridden;
- (void)setTechnique:(id)arg1;
- (id)technique;
- (BOOL)isRotateWithShapeOverridden;
- (void)setRotateWithShape:(BOOL)arg1;
- (BOOL)rotateWithShape;
- (BOOL)isDpiOverridden;
- (void)setDpi:(long)arg1;
- (long)dpi;
- (BOOL)isSourceRectOverridden;
- (void)setSourceRect:(id)arg1;
- (id)sourceRect;
- (BOOL)isBlipRefOverridden;
- (void)setBlipRef:(id)arg1;
- (id)blipRef;
- (id)color;
- (void)setParent:(id)arg1;
- (id)initWithDefaults;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

