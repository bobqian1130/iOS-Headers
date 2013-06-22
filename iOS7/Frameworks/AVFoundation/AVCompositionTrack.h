/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVAssetTrack.h>

@class AVCompositionTrackInternal, NSArray;

@interface AVCompositionTrack : AVAssetTrack
{
    AVCompositionTrackInternal *_priv;
}

@property(readonly, nonatomic) NSArray *segments;
- (struct OpaqueFigMutableComposition *)_mutableComposition;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long)arg3;

@end

