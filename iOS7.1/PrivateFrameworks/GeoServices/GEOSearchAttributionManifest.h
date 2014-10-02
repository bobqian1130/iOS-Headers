//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray;

@interface GEOSearchAttributionManifest : PBCodable <NSCopying>
{
    NSMutableArray *_searchAttributionSources;
}

@property(retain, nonatomic) NSMutableArray *searchAttributionSources; // @synthesize searchAttributionSources=_searchAttributionSources;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)searchAttributionSourcesAtIndex:(unsigned int)arg1;
- (unsigned int)searchAttributionSourcesCount;
- (void)addSearchAttributionSources:(id)arg1;
- (void)clearSearchAttributionSources;
- (void)dealloc;

@end
