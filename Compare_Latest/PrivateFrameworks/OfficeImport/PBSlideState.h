//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PBSlideState : NSObject
{
    NSMutableDictionary *mBuildOrderMap;
    unsigned int mCurrentGroupId;
}

- (unsigned int)generateGroupId;
- (id)buildOrderMap;
- (void)addBuild:(id)arg1 order:(unsigned int)arg2;
- (void)reset;
- (void)dealloc;
- (id)init;

@end

