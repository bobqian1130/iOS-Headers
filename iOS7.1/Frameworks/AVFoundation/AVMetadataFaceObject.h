//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AVFoundation/AVMetadataObject.h>

@class AVMetadataFaceObjectInternal;

@interface AVMetadataFaceObject : AVMetadataObject
{
    AVMetadataFaceObjectInternal *_internal;
}

+ (id)faceObjectWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg1 input:(id)arg2;
@property(readonly) float yawAngle;
@property(readonly) BOOL hasYawAngle;
@property(readonly) float rollAngle;
@property(readonly) BOOL hasRollAngle;
@property(readonly) int faceID;
- (id)description;
- (void)dealloc;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform)arg2 isVideoMirrored:(BOOL)arg3 rollAdjustment:(float)arg4;
- (id)initWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg1 input:(id)arg2;

@end
