/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface UIInputViewAnimationStyle : NSObject
{
    BOOL animated;
    double duration;
    int outDirection;
    unsigned int extraOptions;
    BOOL persistUntilComplete;
    BOOL ignoreNewAnimations;
    NSMutableArray *extraViews;
    BOOL placeholderKeyboard;
    BOOL force;
}

+ (id)animationStyleAnimated:(BOOL)arg1 duration:(double)arg2 outDirection:(int)arg3;
+ (id)animationStyleDefault;
+ (id)animationStyleImmediate;
@property(nonatomic) BOOL placeholderKeyboard; // @synthesize placeholderKeyboard;
@property(retain, nonatomic) NSMutableArray *extraViews; // @synthesize extraViews;
@property(nonatomic) BOOL ignoreNewAnimations; // @synthesize ignoreNewAnimations;
@property(nonatomic) BOOL persistUntilComplete; // @synthesize persistUntilComplete;
@property(nonatomic) unsigned int extraOptions; // @synthesize extraOptions;
@property(nonatomic) BOOL force; // @synthesize force;
@property(nonatomic) int outDirection; // @synthesize outDirection;
@property(nonatomic) double duration; // @synthesize duration;
@property(nonatomic) BOOL animated; // @synthesize animated;
- (void)launchAnimation:(id)arg1 afterStarted:(void)arg2 completion:(id)arg3 forHost:(void)arg4 fromCurrentPosition:(id)arg5;
- (BOOL)delayForTransaction;
@property(readonly, nonatomic) BOOL isAnimationCompleted;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

