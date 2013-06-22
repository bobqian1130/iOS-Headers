/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CommunicationsSetupUI/CNFRegListController.h>

@class CNFRegAlias, NSArray, PSSpecifier;

@interface CNFRegAliasDetailController : CNFRegListController
{
    CNFRegAlias *_alias;
    PSSpecifier *_removeGroupSpecifier;
    PSSpecifier *_removeButtonSpecifier;
    NSArray *_resendValidationSpecifierGroup;
}

@property(retain, nonatomic) CNFRegAlias *alias; // @synthesize alias=_alias;
- (void)_setupEventHandlers;
- (void)_showAliasValidationError:(id)arg1;
- (void)systemApplicationWillEnterForeground;
- (void)systemApplicationDidEnterBackground;
- (void)_buildSpecifierCache:(id)arg1;
- (void)resendValidationEmailTapped:(id)arg1;
- (void)showRemoveAliasConfirmation;
- (void)setRemoveAliasEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)forgetAliasTapped:(id)arg1;
- (void)_showResendGroup:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_updateUIAnimated:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)specifierList;
- (id)bundle;
- (void)dealloc;
- (id)initWithRegController:(id)arg1 alias:(id)arg2;

@end

