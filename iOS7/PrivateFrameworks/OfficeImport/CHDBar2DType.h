/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/CHDChartTypeWithGrouping.h>

@interface CHDBar2DType : CHDChartTypeWithGrouping
{
    int mGapWidth;
    _Bool mColumn;
    int mOverlap;
}

- (int)defaultLabelPosition;
- (_Bool)isHorizontal;
- (void)setColumn:(_Bool)arg1;
- (_Bool)isColumn;
- (void)setOverlap:(int)arg1;
- (int)overlap;
- (void)setGapWidth:(int)arg1;
- (int)gapWidth;
- (id)initWithChart:(id)arg1;

@end

