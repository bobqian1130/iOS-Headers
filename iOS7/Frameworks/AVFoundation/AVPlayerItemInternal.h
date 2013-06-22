/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVAsset, AVAudioMix, AVCustomVideoCompositorSession, AVPlayerConnection, AVPlayerItem, AVPropertyStorage, AVVideoComposition, AVWeakReference, NSArray, NSDate, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface AVPlayerItemInternal : NSObject
{
    AVWeakReference *weakReference;
    AVPlayerItem *previousItem;
    AVPlayerItem *nextItem;
    struct OpaqueFigPlaybackItem *figPlaybackItem;
    struct OpaqueFigCPEProtector *figCPEProtector;
    struct OpaqueCMTimebase *figTimebase;
    id <AVPlayerItemDelegate> delegate;
    AVWeakReference *playerReference;
    AVPlayerConnection *playerConnection;
    BOOL isCurrentPlayerItem;
    NSObject<OS_dispatch_queue> *stateDispatchQueue;
    AVPropertyStorage *propertyStorage;
    int status;
    NSError *error;
    NSURL *URL;
    AVAsset *asset;
    NSArray *automaticallyLoadedAssetKeys;
    AVAsset *assetWithFigPlaybackItem;
    NSArray *trackIDsForAssetWithFigPlaybackItem;
    NSObject<OS_dispatch_queue> *syncLayersQ;
    NSMutableArray *syncLayers;
    NSArray *timedMetadata;
    CDStruct_1b6d18a9 initialTime;
    CDStruct_1b6d18a9 initialToleranceBefore;
    CDStruct_1b6d18a9 initialToleranceAfter;
    CDStruct_1b6d18a9 forwardPlaybackEndTime;
    CDStruct_1b6d18a9 reversePlaybackEndTime;
    NSDate *initialDate;
    NSDate *initialEstimatedDate;
    BOOL initialLimitReadAhead;
    int initialPlaybackLikelyToKeepUpTrigger;
    BOOL initialAlwaysMonitorsPlayability;
    BOOL initialWillNeverSeekBackwardsHint;
    BOOL initialContinuesPlayingDuringPrerollForSeek;
    BOOL initialContinuesPlayingDuringPrerollForRateChange;
    double initialBufferingTargetMinimum;
    double initialBufferingTargetMaximum;
    struct __CFString *initialFigTimePitchAlgorithm;
    BOOL savesDownloadedDataToDiskWhenDone;
    BOOL nonForcedSubtitlesEnabled;
    BOOL networkUsuallyExceedsMaxBitRate;
    BOOL allowProgressiveSwitchUp;
    float maximumBitRate;
    AVAudioMix *audioMix;
    AVVideoComposition *videoComposition;
    void *figVideoCompositor;
    AVCustomVideoCompositorSession *customVideoCompositorSession;
    BOOL seekingWaitsForVideoCompositionRendering;
    NSArray *textStyleRules;
    NSDictionary *gaplessInfo;
    int initialVariantIndex;
    NSDictionary *audibleDRMInfo;
    NSDictionary *rampInOutInfo;
    float soundCheckVolumeNormalization;
    float volumeAdjustment;
    NSMutableArray *handlersToCallWhenReadyForEnqueueing;
    NSMutableDictionary *mediaOptionsSelectedByClient;
    BOOL haveInitialSamples;
    BOOL haveCPEProtector;
    BOOL didSetAssetToAssetWithFigPlaybackItem;
    BOOL didBecomeReadyForBasicInspection;
    BOOL didBecomeReadyForInspectionOfMediaSelectionOptions;
    BOOL didBecomeReadyForInspectionOfTracks;
    BOOL didBecomeReadyForInspectionOfPresentationSize;
    BOOL didBecomeReadyForInspectionOfDuration;
    BOOL didInformObserversAboutAvailabilityOfTracks;
    BOOL didFireKVOForAssetForNonStreamingItem;
    BOOL didApplyInitialAudioMix;
    BOOL wasInitializedWithURL;
    BOOL needTimedMetadataNotification;
    BOOL externalSubtitlesEnabled;
    BOOL externalProtectionRequested;
    BOOL requiresAccessLog;
    int eqPreset;
    struct OpaqueFigSimpleMutex *seekIDMutex;
    int nextSeekIDToGenerate;
    int pendingSeekID;
    id seekCompletionHandler;
    NSString *dataYouTubeID;
    NSArray *itemOutputs;
    NSMutableArray *itemVideoOutputs;
    NSMutableArray *itemLegibleOutputs;
    NSString *serviceIdentifier;
    NSString *mediaKind;
    unsigned int restrictions;
}

@end

