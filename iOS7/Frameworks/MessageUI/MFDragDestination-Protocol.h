/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol MFDragDestination <NSObject>
- (id)supportedDropTypes:(id)arg1;
- (struct CGRect)dropRect;
- (id)viewForDrop;
- (void)dropItem:(id)arg1;
- (void)dragExited:(id)arg1;
- (void)dragUpdated:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)dragEntered:(id)arg1 atPoint:(struct CGPoint)arg2;
@end

