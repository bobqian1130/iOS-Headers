/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MessageUI/MFComposeRecipientView.h>

#import "ABPeoplePickerNavigationControllerDelegate-Protocol.h"

@interface _MFComposeRecipientView : MFComposeRecipientView <ABPeoplePickerNavigationControllerDelegate>
{
    id <_MFComposeRecipientViewStyleDelegate> _styleDelegate;
    unsigned int _selectablePeople;
}

@property(nonatomic) unsigned int selectablePeople; // @synthesize selectablePeople=_selectablePeople;
@property id <_MFComposeRecipientViewStyleDelegate> styleDelegate; // @synthesize styleDelegate=_styleDelegate;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldAllowSelectingPersonWithRecordID:(int)arg2;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)_dismissPicker:(id)arg1;
- (BOOL)shouldShowCardForPerson:(void *)arg1;
- (void)_hideAddButton;
- (int)atomStyleForRecipient:(id)arg1;
- (void)_reallySelectComposeRecipientAtom:(id)arg1;
- (BOOL)_addable;
- (BOOL)finishEnteringRecipient;
- (void)showAtoms;
- (void)replaceRecipient:(id)arg1 withRecipient:(id)arg2;
- (void)addRecipient:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addRecord:(void *)arg1 identifier:(int)arg2;
- (void)removeAddresses;
- (void)removeAddressAtIndex:(int)arg1;
- (void)addAddress:(id)arg1;
- (void)dealloc;

@end

