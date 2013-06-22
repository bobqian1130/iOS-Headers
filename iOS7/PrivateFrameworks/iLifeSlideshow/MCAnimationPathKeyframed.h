/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iLifeSlideshow/MCAnimationPath.h>

@class NSArray, NSMutableSet, NSSet;

@interface MCAnimationPathKeyframed : MCAnimationPath
{
    NSMutableSet *mKeyframes;
    NSArray *mCachedOrderedKeyframes;
}

+ (double)timeForKeyframe:(id)arg1 inPlug:(id)arg2;
+ (id)animationPathWithKey:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
- (void)_copySelfToSnapshot:(id)arg1;
- (id)description;
- (void)removeAllKeyframes;
- (void)removeKeyframe:(id)arg1;
- (void)addKeyframe:(id)arg1;
- (id)createKeyframeWithVector:(CDStruct_d27e73f0)arg1 atTime:(double)arg2 offsetKind:(int)arg3;
- (id)createKeyframeWithVector:(CDStruct_d27e73f0)arg1 atTime:(double)arg2;
- (id)createKeyframeWithPoint:(struct CGPoint)arg1 atTime:(double)arg2 offsetKind:(int)arg3;
- (id)createKeyframeWithPoint:(struct CGPoint)arg1 atTime:(double)arg2;
- (id)createKeyframeWithFunction:(id)arg1 atTime:(double)arg2 offsetKind:(int)arg3 forDuration:(double)arg4;
- (id)createKeyframeWithScalar:(float)arg1 atTime:(double)arg2 offsetKind:(int)arg3;
- (id)createKeyframeWithScalar:(float)arg1 atTime:(double)arg2;
- (id)orderedKeyframesInPlug:(id)arg1;
- (unsigned int)countOfKeyframes;
@property(readonly) NSSet *keyframes;
- (id)imprint;
- (void)demolish;
- (id)initWithImprint:(id)arg1;
- (id)init;

@end

