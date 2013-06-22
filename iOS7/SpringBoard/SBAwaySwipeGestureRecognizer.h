/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIGestureRecognizer.h"

@interface SBAwaySwipeGestureRecognizer : UIGestureRecognizer
{
    struct CGPoint _startLocation;
    unsigned int _startTouchCount;
    double _startTime;
    unsigned int _requiredTouchCount;
    int _gestureType;
}

@property(nonatomic) unsigned int requiredTouchCount; // @synthesize requiredTouchCount=_requiredTouchCount;
- (BOOL)_isView:(id)arg1 subviewOfClass:(Class)arg2;
- (struct CGPoint)averagePositionForTouches:(id)arg1;
- (BOOL)isGestureFromLocation:(struct CGPoint)arg1 count:(unsigned int)arg2 toLocation:(struct CGPoint)arg3 count:(unsigned int)arg4 elapsedTime:(double)arg5 gestureType:(int *)arg6;
- (unsigned int)fingerCount;
- (int)recognizedGestureType;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

