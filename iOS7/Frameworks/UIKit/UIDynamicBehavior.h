/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray, UIDynamicAnimator;

@interface UIDynamicBehavior : NSObject
{
    UIDynamicAnimator *_context;
    NSMutableArray *_items;
    NSMutableArray *_behaviors;
    NSMutableArray *_addedBehaviors;
    BOOL __isPrimitiveBehavior;
    id _action;
}

@property(nonatomic, setter=_isPrimitiveBehavior:) BOOL _isPrimitiveBehavior; // @synthesize _isPrimitiveBehavior=__isPrimitiveBehavior;
@property(copy, nonatomic) id action; // @synthesize action=_action;
- (id)description;
- (id)_itemsDescription;
- (void)_changedParameterForBody:(id)arg1;
@property(readonly, nonatomic) NSArray *childBehaviors;
- (void)removeChildBehavior:(id)arg1;
- (void)addChildBehavior:(id)arg1;
- (BOOL)allowsAnimatorToStop;
- (void)_dissociate;
- (void)_associate;
- (void)_reevaluate:(unsigned int)arg1;
- (void)_step;
- (void)dealloc;
- (id)init;
- (id)_init:(BOOL)arg1;
- (id)items;
- (id)_context;
- (id)_items;
- (void)_setItems:(id)arg1;
- (void)_setContext:(id)arg1;

@end

