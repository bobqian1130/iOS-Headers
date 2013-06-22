/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVAssetWriterHelper.h>

#import "AVAssetWriterFigAssetWriterNotificationHandlerDelegate-Protocol.h"

@class AVAssetWriterFigAssetWriterNotificationHandler, AVWeakReference, NSObject<OS_dispatch_queue>;

@interface AVAssetWriterWritingHelper : AVAssetWriterHelper <AVAssetWriterFigAssetWriterNotificationHandlerDelegate>
{
    AVWeakReference *_weakReference;
    struct OpaqueFigAssetWriter *_figAssetWriter;
    NSObject<OS_dispatch_queue> *_figAssetWriterAccessQueue;
    BOOL _startSessionCalled;
    AVAssetWriterFigAssetWriterNotificationHandler *_notificationHandler;
}

- (void)finishWritingWithCompletionHandler:(id)arg1;
- (void)finishWriting;
- (void)cancelWriting;
- (struct OpaqueFigAssetWriter *)_retainedFigAssetWriter;
- (void)endSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;
- (void)startSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;
- (int)status;
- (void)didReceiveFigAssetWriterNotificationWithSuccess:(BOOL)arg1 error:(id)arg2;
- (void)finalize;
- (void)dealloc;
- (id)figTrackReferences;
- (id)initWithConfigurationState:(id)arg1 error:(id *)arg2;
- (id)initWithConfigurationState:(id)arg1;

@end

