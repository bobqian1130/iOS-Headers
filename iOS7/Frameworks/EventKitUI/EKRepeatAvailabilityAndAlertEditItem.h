/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKitUI/EKCalendarItemEditItem.h>

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class EKCalendarItemAlarmEditItem, EKCalendarItemEditItem<EKCalendarItemDisclosableEditItem>, EKEventAvailabilityEditItem, EKEventRecurrenceEditItem, NSMutableArray;

@interface EKRepeatAvailabilityAndAlertEditItem : EKCalendarItemEditItem <UIPickerViewDataSource, UIPickerViewDelegate>
{
    EKEventRecurrenceEditItem *_repeatItem;
    EKEventAvailabilityEditItem *_availabilityItem;
    EKCalendarItemAlarmEditItem *_alarmItem;
    NSMutableArray *_activeEditItems;
    EKCalendarItemEditItem<EKCalendarItemDisclosableEditItem> *_selectedEditItem;
    int _selectedEditItemSubitem;
    int _selectedEditItemSubitemCount;
    struct _NSRange _disclosedTableRange;
}

- (void).cxx_destruct;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (void)_hideDisclosedMenuForEditItem:(id)arg1;
- (void)editor:(id)arg1 didSelectSubitem:(unsigned int)arg2 inSubsection:(unsigned int)arg3;
- (BOOL)editor:(id)arg1 canSelectSubitem:(unsigned int)arg2 inSubsection:(unsigned int)arg3;
- (float)defaultCellHeightForSubitemAtIndex:(unsigned int)arg1 inSubsection:(unsigned int)arg2 forWidth:(float)arg3;
- (id)cellForSubitemAtIndex:(unsigned int)arg1 inSubsection:(unsigned int)arg2;
- (unsigned int)numberOfSubitemsInSubsection:(unsigned int)arg1;
- (id)_childEditItemForSubitemAtIndex:(unsigned int)arg1 subitemInChildEditItem:(unsigned int *)arg2;
- (void)endInlineEditing;
- (BOOL)saveAndDismissWithForce:(BOOL)arg1;
- (BOOL)isInline;
- (void)refreshFromCalendarItemAndStore;
- (BOOL)configureForCalendarConstraints:(id)arg1;
- (void)setCalendarItem:(id)arg1 store:(id)arg2;
- (id)init;

@end

