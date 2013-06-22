/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMapTable;

@interface GEOTileUsageInfo : NSObject
{
    double _startTime;
    double _endTime;
    NSMapTable *_tileStyleToCount;
    unsigned int _dataLength;
}

@property(readonly, nonatomic) unsigned int dataLength; // @synthesize dataLength=_dataLength;
@property(readonly, nonatomic) NSMapTable *tileStyleToCount; // @synthesize tileStyleToCount=_tileStyleToCount;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
- (void)addTileKey:(const struct _GEOTileKey *)arg1 dataLength:(unsigned int)arg2;
- (void)dealloc;

@end

