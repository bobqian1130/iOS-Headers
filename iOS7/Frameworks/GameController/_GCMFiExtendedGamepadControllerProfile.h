/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameController/_GCExtendedGamepad.h>

#import "_GCACHomeButtonDelegate-Protocol.h"

@class _GCACHomeButton;

@interface _GCMFiExtendedGamepadControllerProfile : _GCExtendedGamepad <_GCACHomeButtonDelegate>
{
    _GCACHomeButton *_acHome;
}

- (void).cxx_destruct;
- (void)toggleSuspendResume;
- (id)inputForElement:(struct __IOHIDElement *)arg1;
- (void)setPlayerIndex:(int)arg1;
- (id)name;
- (id)initWithController:(id)arg1;

@end

