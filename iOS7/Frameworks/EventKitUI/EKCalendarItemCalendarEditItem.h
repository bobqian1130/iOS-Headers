/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKitUI/EKCalendarItemEditItem.h>

@interface EKCalendarItemCalendarEditItem : EKCalendarItemEditItem
{
    unsigned int _entityType;
}

- (BOOL)editItemViewControllerCommit:(id)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned int)arg2 inSubsection:(unsigned int)arg3;
- (id)cellForSubitemAtIndex:(unsigned int)arg1 inSubsection:(unsigned int)arg2;
- (BOOL)_shouldShowSourceForCalendar:(id)arg1;
- (BOOL)requiresReconfigurationOnCommit;
- (BOOL)shouldAppearWithVisibility:(int)arg1;
- (BOOL)canBeConfiguredForCalendarConstraints:(id)arg1;
- (id)init;
- (id)initWithEntityType:(unsigned int)arg1;

@end

