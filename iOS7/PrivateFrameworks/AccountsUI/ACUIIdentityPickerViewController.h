/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PSListController.h"

@class NSArray, NSString;

@interface ACUIIdentityPickerViewController : PSListController
{
    id <ACUIIdentityPickerViewControllerDelegate> _delegate;
    NSString *_property;
    NSArray *_identities;
    NSArray *_emailAddresses;
    BOOL _allowEditing;
}

@property(readonly, nonatomic) NSString *property; // @synthesize property=_property;
- (void).cxx_destruct;
- (void)_updateCell:(id)arg1 selected:(BOOL)arg2;
- (BOOL)_allowIdentitySelection;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (struct __SecIdentity *)_selectedIdentity;
- (BOOL)_isPropertyEnabled;
- (id)_valueForSwitchSpecifier:(id)arg1;
- (void)_setPropertyEnabled:(BOOL)arg1 identity:(struct __SecIdentity *)arg2;
- (void)_setValue:(id)arg1 forSwitchSpecifier:(id)arg2;
- (struct __SecIdentity *)_identityToAutoselectWithEnabled:(BOOL)arg1;
- (id)_identitySpecifiers;
- (id)_specifiersForIdentities:(id)arg1;
- (void)_finishedFetchingIdentities:(id)arg1;
- (id)specifiers;
- (void)viewDidLoad;

@end

