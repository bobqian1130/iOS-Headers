/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIDynamicItem-Protocol.h"

@interface SBBouncingItem : NSObject <UIDynamicItem>
{
    struct CGRect _bounds;
    struct CGPoint _center;
    float _multiplier;
    id _translateBlock;
}

@property(copy) id translateBlock; // @synthesize translateBlock=_translateBlock;
@property float multiplier; // @synthesize multiplier=_multiplier;
@property(nonatomic) struct CGAffineTransform transform;
- (void)setBounds:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGRect bounds;
@property(nonatomic) struct CGPoint center;
- (void)dealloc;

@end

