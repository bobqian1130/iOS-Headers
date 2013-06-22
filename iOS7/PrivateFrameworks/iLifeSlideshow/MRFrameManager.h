/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface MRFrameManager : NSObject
{
    NSMutableDictionary *mFrameSets;
    NSMutableDictionary *mFramePools;
}

+ (id)sharedManager;
+ (void)initialize;
- (id)sizeScriptForFrameID:(id)arg1;
- (id)resourcePathForFrameID:(id)arg1 andResource:(id)arg2;
- (void)recycleFrame:(id)arg1;
- (id)frameWithFrameID:(id)arg1;
- (void)releaseResources;
- (void)cleanup;
- (void)dealloc;
- (id)init;

@end

