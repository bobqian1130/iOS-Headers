/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameController/GCControllerAxisInput.h>

@class GCControllerButtonInput, GCControllerElement;

@interface _GCControllerAxisInput : GCControllerAxisInput
{
    float _value;
    id _valueChangedHandler;
    GCControllerButtonInput *_positive;
    GCControllerButtonInput *_negative;
    BOOL _flipped;
    BOOL _digital;
    GCControllerElement *_collection;
}

- (BOOL)isDigital;
- (BOOL)isFlipped;
- (id)positive;
- (id)negative;
- (void)setValueChangedHandler:(id)arg1;
- (id)valueChangedHandler;
- (float)value;
- (void).cxx_destruct;
- (BOOL)setHIDValue:(struct __IOHIDValue *)arg1;
- (BOOL)_setValue:(float)arg1;
- (BOOL)isAnalog;
- (id)collection;
- (id)initWithCollection:(id)arg1 flipped:(BOOL)arg2 digital:(BOOL)arg3;

@end

