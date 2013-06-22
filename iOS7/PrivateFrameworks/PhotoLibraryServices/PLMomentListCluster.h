/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableSet;

@interface PLMomentListCluster : NSObject
{
    unsigned int _month;
    unsigned int _year;
    unsigned int _numberOfMoments;
    unsigned int _numberOfAssets;
    NSMutableSet *__moments;
}

@property(readonly, nonatomic) NSMutableSet *_moments; // @synthesize _moments=__moments;
@property(readonly, nonatomic) unsigned int numberOfAssets; // @synthesize numberOfAssets=_numberOfAssets;
@property(readonly, nonatomic) unsigned int numberOfMoments; // @synthesize numberOfMoments=_numberOfMoments;
@property(readonly, nonatomic) unsigned int year; // @synthesize year=_year;
@property(readonly, nonatomic) unsigned int month; // @synthesize month=_month;
- (unsigned int)peak;
- (void)removeMoment:(id)arg1;
- (void)addMoment:(id)arg1;
- (void)dealloc;
- (id)initWithMonth:(unsigned int)arg1 year:(unsigned int)arg2;
- (id)init;

@end

