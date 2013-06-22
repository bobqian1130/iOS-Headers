/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotosUI/PUAbstractTransitionLayoutAttributes.h>

@class UICollectionViewLayoutAttributes;

@interface PUInterpolatingLayoutAttributes : PUAbstractTransitionLayoutAttributes
{
    BOOL _interpolatesCenter;
    BOOL _interpolatesSize;
    BOOL _interpolatesTransform;
    BOOL _interpolatesAlpha;
    UICollectionViewLayoutAttributes *_sourceLayoutAttributes;
    UICollectionViewLayoutAttributes *_destinationLayoutAttributes;
}

+ (id)layoutAttributesForCellWithIndexPath:(id)arg1 fromLayoutAttributes:(id)arg2 toLayoutAttributes:(id)arg3;
+ (id)layoutAttributesForCellWithIndexPath:(id)arg1;
@property(retain, nonatomic, getter=_destinationLayoutAttributes, setter=_setDestinationLayoutAttributes:) UICollectionViewLayoutAttributes *destinationLayoutAttributes; // @synthesize destinationLayoutAttributes=_destinationLayoutAttributes;
@property(retain, nonatomic, getter=_sourceLayoutAttributes, setter=_setSourceLayoutAttributes:) UICollectionViewLayoutAttributes *sourceLayoutAttributes; // @synthesize sourceLayoutAttributes=_sourceLayoutAttributes;
- (void).cxx_destruct;
- (void)finishInterpolation;
- (id)dynamicAnimationsAtVelocity:(double)arg1;
- (double)_progressOutsideNormalizedRange:(double)arg1;
- (void)updateForProgress;

@end

