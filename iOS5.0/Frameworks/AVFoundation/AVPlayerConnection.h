/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVPlayer, AVPlayerItem, AVWeakReference, NSError;

@interface AVPlayerConnection : NSObject
{
    AVWeakReference *_playerReference;
    AVWeakReference *_playerItemReference;
    BOOL _shouldAppendItem;
    int _status;
    NSError *_error;
    AVPlayerItem *_previousPlayerItem;
}

- (id)initWithWeakReferenceToPlayer:(id)arg1 weakReferenceToPlayerItem:(id)arg2 shouldAppendItem:(BOOL)arg3;
- (void)dealloc;
- (id)description;
@property(readonly, nonatomic) AVPlayer *player;
@property(readonly, nonatomic) AVPlayerItem *playerItem;
- (BOOL)addItemToPlayQueue;
- (void)ensureItemAddedToPlayQueueWithCompletionHandler:(id)arg1;
- (void)removeItemFromPlayQueue;
@property(readonly, nonatomic) int status;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) struct dispatch_queue_s *serializationQueue;

@end

