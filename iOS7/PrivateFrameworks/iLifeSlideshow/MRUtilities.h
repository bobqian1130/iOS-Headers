/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface MRUtilities : NSObject
{
}

+ (int)operatingSystemMajorVersion;
+ (int)operatingSystemMinorVersion;
+ (int)operationQueueConcurrentOperationCount;
+ (id)executeScript:(id)arg1 withHeader:(id)arg2 andAttributes:(id)arg3;
+ (struct CGColorSpace *)newColorSpaceForDevice;
+ (double)transformTime:(double)arg1 forAnimationPath:(id)arg2 inPlug:(id)arg3;
+ (struct CGPoint)valueForPointAnimationPath:(id)arg1 inPlug:(id)arg2 atTime:(double)arg3 defaultsTo:(struct CGPoint)arg4 previousKeyPoint:(struct CGPoint *)arg5 nextKeyPoint:(struct CGPoint *)arg6;
+ (float)valueForScalarAnimationPath:(id)arg1 inPlug:(id)arg2 atTime:(double)arg3 defaultsTo:(float)arg4 previousKeyValue:(float *)arg5 nextKeyValue:(float *)arg6;
+ (void)initialize;

@end

