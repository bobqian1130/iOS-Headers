//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface TSCHSeriesDimension : NSObject <NSCopying>
{
    unsigned int mSeriesIndex;
    int mAxisType;
}

+ (id)seriesDimensionWithSeriesIndex:(unsigned int)arg1 axisType:(int)arg2;
@property(readonly, nonatomic) int axisType; // @synthesize axisType=mAxisType;
@property(readonly, nonatomic) unsigned int seriesIndex; // @synthesize seriesIndex=mSeriesIndex;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSeriesIndex:(unsigned int)arg1 axisType:(int)arg2;

@end
