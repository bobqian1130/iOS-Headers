//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/KNWipeBase.h>

#import "KNFrameBuildAnimator.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface KNBuildWipe : KNWipeBase <KNFrameBuildAnimator>
{
}

+ (BOOL)requiresSingleTexturePerStage;
+ (id)defaultAttributes;
+ (id)supportedTypes;
+ (BOOL)isTransition;
- (void)renderFrameWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (struct CGRect)frameOfEffectWithFrame:(struct CGRect)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

