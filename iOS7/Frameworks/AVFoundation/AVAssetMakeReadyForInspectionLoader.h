/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVAssetInspectorLoader.h>

@class AVAssetCache, AVAssetInspector, NSMutableArray, NSURL;

@interface AVAssetMakeReadyForInspectionLoader : AVAssetInspectorLoader
{
    AVAssetInspector *_assetInspector;
    AVAssetCache *_assetCache;
    BOOL _shouldMatchDataInCacheByURLPathComponentOnly;
    BOOL _shouldMatchDataInCacheByURLWithoutQueryComponent;
    NSURL *_downloadDestinationURL;
    struct OpaqueFigFormatReader *_formatReader;
    struct OpaqueFigSimpleMutex *_loadingMutex;
    NSMutableArray *_keysAwaitingCompletion;
    int _status;
    long _basicInspectionFailureCode;
    NSURL *_URL;
}

@property(readonly, nonatomic) NSURL *downloadDestinationURL; // @synthesize downloadDestinationURL=_downloadDestinationURL;
@property(readonly, nonatomic) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent; // @synthesize shouldMatchDataInCacheByURLWithoutQueryComponent=_shouldMatchDataInCacheByURLWithoutQueryComponent;
@property(readonly, nonatomic) BOOL shouldMatchDataInCacheByURLPathComponentOnly; // @synthesize shouldMatchDataInCacheByURLPathComponentOnly=_shouldMatchDataInCacheByURLPathComponentOnly;
@property(readonly, nonatomic) AVAssetCache *assetCache; // @synthesize assetCache=_assetCache;
- (id)URL;
- (void)_serverHasDied;
- (BOOL)_isStreaming;
- (BOOL)hasProtectedContent;
- (BOOL)isComposable;
- (BOOL)isReadable;
- (BOOL)isExportable;
- (BOOL)isPlayable;
- (id)chapterGroupInfo;
- (id)lyrics;
- (CDStruct_1b6d18a9)duration;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;
- (id)_loadValuesWhileMutexLockedForKeys:(id)arg1;
- (id)_dictionaryOfSpecialLoadingMethodsForKeys;
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)arg1;
- (void)_setStatus:(int)arg1 figErrorCode:(long)arg2;
- (BOOL)_updateStatusWhileMutexLocked:(int)arg1 figErrorCode:(long)arg2;
- (int)_status;
- (int)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (id)_getAndPruneCompletionsWhileMutexLocked;
- (BOOL)_statusOfValuesIsTerminalWhileMutexLockedForKeys:(id)arg1;
- (int)_statusOfValueWhileMutexLockedForKey:(id)arg1 error:(id *)arg2;
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;
- (id)_statusOfValueForKeyThatIsAlwaysLoaded;
- (struct OpaqueFigPlaybackItem *)_playbackItem;
- (BOOL)_inspectionRequiresAFormatReader;
- (struct OpaqueFigFormatReader *)_copyFormatReaderFromFigObjectWithFigErrorCode:(int *)arg1;
- (BOOL)_providesAccurateTiming;
- (struct OpaqueFigSimpleMutex *)_loadingMutex;
- (struct OpaqueFigFormatReader *)_formatReader;
- (void)cancelLoading;
- (id)assetInspector;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

@end

