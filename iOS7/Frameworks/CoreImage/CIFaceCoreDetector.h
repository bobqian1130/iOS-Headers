/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreImage/CIDetector.h>

@class CIContext, FCRFaceDetector, NSMutableDictionary;

@interface CIFaceCoreDetector : CIDetector
{
    CIContext *context;
    NSMutableDictionary *featureOptions;
    FCRFaceDetector *faceCoreDetector;
}

@property FCRFaceDetector *faceCoreDetector; // @synthesize faceCoreDetector;
@property(retain, nonatomic) CIContext *context; // @synthesize context;
- (id)featuresInImage:(id)arg1;
- (id)featuresInImage:(id)arg1 options:(id)arg2;
- (void)finalize;
- (void)dealloc;
- (id)initWithContext:(id)arg1 options:(id)arg2;
- (id)createFaceCoreDataFromCIImage:(id)arg1 width:(unsigned int *)arg2 height:(unsigned int *)arg3;
- (id)adjustedImageFromImage:(id)arg1 orientation:(int)arg2 inverseCTM:(struct CGAffineTransform *)arg3;
- (struct CGAffineTransform)ctmForImageWithBounds:(struct CGRect)arg1 orientation:(int)arg2;

@end

