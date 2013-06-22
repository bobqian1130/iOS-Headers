/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/CMShapeBuilder.h>

@interface CMCanonicalShapeBuilder : CMShapeBuilder
{
}

- (struct CGAffineTransform)affineTransform;
- (struct CGPath *)createShapeWithTransform:(struct CGAffineTransform)arg1;
- (struct CGPath *)_rectangleWithTransform:(struct CGAffineTransform)arg1 andAspectRatio:(float)arg2;
- (struct CGPath *)_parallelogramWithTransform:(struct CGAffineTransform)arg1 andAspectRatio:(float)arg2;
- (struct CGPath *)_trapezoidWithTransform:(struct CGAffineTransform)arg1 andAspectRatio:(float)arg2;
- (struct CGPath *)_ellipseWithTransform:(struct CGAffineTransform)arg1 andAspectRatio:(float)arg2;
- (struct CGPath *)_roundedRectWithTransform:(struct CGAffineTransform)arg1 andAspectRatio:(float)arg2;
- (struct CGPath *)_diamondWithTransform:(struct CGAffineTransform)arg1 andAspectRatio:(float)arg2;
- (struct CGPath *)_triangleWithTransform:(struct CGAffineTransform)arg1 andAspectRatio:(float)arg2;
- (struct CGPath *)_rightTriangleWithTransform:(struct CGAffineTransform)arg1 andAspectRatio:(float)arg2;
- (struct CGPath *)_plusWithTransform:(struct CGAffineTransform)arg1 andAspectRatio:(float)arg2;
- (struct CGPath *)_pentagonWithTransform:(struct CGAffineTransform)arg1 andAspectRatio:(float)arg2;
- (struct CGPath *)_hexagonWithTransform:(struct CGAffineTransform)arg1 andAspectRatio:(float)arg2;
- (struct CGPath *)_octagonWithTransform:(struct CGAffineTransform)arg1 andAspectRatio:(float)arg2;
- (struct CGPath *)_canWithTransform:(struct CGAffineTransform)arg1 andAspectRatio:(float)arg2;
- (struct CGPath *)_cubeWithTransform:(struct CGAffineTransform)arg1 andAspectRatio:(float)arg2;
- (struct CGPath *)_wedgeRectWithTransform:(struct CGAffineTransform)arg1 andAspectRatio:(float)arg2;
- (struct CGPath *)_straightConnector1tWithTransform:(struct CGAffineTransform)arg1 andAspectRatio:(float)arg2;
- (struct CGPath *)_lineWithTransform:(struct CGAffineTransform)arg1 andAspectRatio:(float)arg2;
- (struct CGPath *)_rightArrowWithTransform:(struct CGAffineTransform)arg1 andAspectRatio:(float)arg2;
- (struct CGPath *)_leftArrowWithTransform:(struct CGAffineTransform)arg1 andAspectRatio:(float)arg2;
- (struct CGPath *)_upArrowWithTransform:(struct CGAffineTransform)arg1 andAspectRatio:(float)arg2;
- (struct CGPath *)_downArrowWithTransform:(struct CGAffineTransform)arg1 andAspectRatio:(float)arg2;
- (struct CGPath *)_leftRightArrowWithTransform:(struct CGAffineTransform)arg1 andAspectRatio:(float)arg2;
- (struct CGPath *)_upDownArrowWithTransform:(struct CGAffineTransform)arg1 andAspectRatio:(float)arg2;
- (struct CGPath *)_quadArrowWithTransform:(struct CGAffineTransform)arg1 andAspectRatio:(float)arg2;
- (struct CGPath *)_leftRightUpArrowWithTransform:(struct CGAffineTransform)arg1 andAspectRatio:(float)arg2;
- (struct CGPath *)_starWithTransform:(struct CGAffineTransform)arg1 aspectRatio:(float)arg2 andBranchNumber:(int)arg3;
- (struct CGPath *)_homePlateWithTransform:(struct CGAffineTransform)arg1 andAspectRatio:(float)arg2;
- (struct CGPath *)_chevronWithTransform:(struct CGAffineTransform)arg1 andAspectRatio:(float)arg2;
- (struct CGPath *)_pieWithTransform:(struct CGAffineTransform)arg1 andAspectRatio:(float)arg2;
- (struct CGPath *)_circularArrowWithTransform:(struct CGAffineTransform)arg1 andAspectRatio:(float)arg2;
- (struct CGPath *)_rightDiagramArrowWithTransform:(struct CGAffineTransform)arg1 andAspectRatio:(float)arg2;
- (struct CGPath *)_upDiagramArrowWithTransform:(struct CGAffineTransform)arg1 andAspectRatio:(float)arg2;
- (struct CGPath *)_pyramidLayerWithTransform:(struct CGAffineTransform)arg1 andAspectRatio:(float)arg2;
- (struct CGPath *)_diagramCircularArrowWithTransform:(struct CGAffineTransform)arg1 andAspectRatio:(float)arg2;

@end
