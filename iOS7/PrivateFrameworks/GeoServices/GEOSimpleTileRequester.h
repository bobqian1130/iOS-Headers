/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GeoServices/GEOTileRequester.h>

#import "NSURLConnectionDelegate-Protocol.h"

@class NSMutableArray, NSMutableSet;

@interface GEOSimpleTileRequester : GEOTileRequester <NSURLConnectionDelegate>
{
    NSMutableArray *_waiting;
    NSMutableSet *_running;
    BOOL _cancelled;
    BOOL _subclassImplementsTileEdition;
    NSMutableArray *_errors;
}

- (void)dealloc;
- (void)cancel;
- (void)_cleanup;
- (unsigned int)tileEditionForKey:(struct _GEOTileKey *)arg1;
- (void)start;
- (BOOL)isRunning;
- (void)_doWorkOrFinish;
- (void)_operationFinished:(id)arg1;
- (void)_operationFailed:(id)arg1 error:(id)arg2;
- (id)editionHeader;
- (id)mergeBaseTile:(id)arg1 withLocalizationTile:(id)arg2;
- (id)localizationURLForTileKey:(struct _GEOTileKey *)arg1;
- (id)urlForTileKey:(struct _GEOTileKey *)arg1;
- (BOOL)allowsCookies;
- (id)initWithKeyList:(id)arg1;

@end

