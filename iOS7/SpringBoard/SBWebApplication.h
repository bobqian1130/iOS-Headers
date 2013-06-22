/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SBApplication.h"

@class UIWebClip;

@interface SBWebApplication : SBApplication
{
    UIWebClip *_webClip;
    BOOL _isLastWebApplication;
}

+ (id)displayIdentifierForWebClipIdentifier:(id)arg1;
+ (id)displayIdentifierForWebClip:(id)arg1;
@property(retain) UIWebClip *webClip; // @synthesize webClip=_webClip;
- (BOOL)iconAllowsUninstall:(id)arg1;
- (id)icon:(id)arg1 imageWithFormat:(int)arg2;
- (BOOL)windowContextHostManager:(id)arg1 shouldEnableContextHostingForRequester:(id)arg2 priority:(int)arg3;
- (id)windowContextHostManager:(id)arg1 overrideRequester:(id)arg2;
- (void)_removeContextHostManager:(id)arg1;
- (void)_removeContextHostManagerWithoutLooping:(id)arg1;
- (void)_addContextHostManager:(id)arg1;
- (void)_addContextHostManagerWithoutLooping:(id)arg1;
- (void)willActivateOtherWebApplication:(id)arg1;
- (void)_setActivationState:(int)arg1;
- (void)didExitWithInfo:(id)arg1 type:(int)arg2;
- (void)setRunning:(BOOL)arg1;
- (void)setProcessInfo:(id)arg1;
- (id)_newDefaultImageInfoForScreen:(id)arg1 launchingOrientation:(int)arg2;
- (BOOL)isWebApplication;
- (id)activationSettings;
- (id)_urlForLaunch;
- (void)dealloc;
- (id)initWithBundleIdentifier:(id)arg1 webClip:(id)arg2 path:(id)arg3 bundle:(id)arg4 infoDictionary:(id)arg5 isSystemApplication:(BOOL)arg6 signerIdentity:(id)arg7 provisioningProfileValidated:(BOOL)arg8 entitlements:(id)arg9;

@end

