/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/_UIDatePickerMode.h>

@class NSArray, NSString;

@interface _UIDatePickerMode_Custom : _UIDatePickerMode
{
    NSString *_originalFormat;
    NSArray *_components;
    NSArray *_sortedComponents;
    int _displayedUnits;
    int _desiredUnits;
}

- (unsigned int)nextUnitSmallerThanUnit:(unsigned int)arg1;
- (unsigned int)nextUnitLargerThanUnit:(unsigned int)arg1;
- (int)valueForRow:(int)arg1 inCalendarUnit:(unsigned int)arg2;
- (id)dateForRow:(int)arg1 inCalendarUnit:(unsigned int)arg2;
- (float)widthForCalendarUnit:(unsigned int)arg1 font:(id)arg2 maxWidth:(float)arg3;
- (int)titleAlignmentForCalendarUnit:(unsigned int)arg1;
- (id)dateFormatForCalendarUnit:(unsigned int)arg1;
- (int)numberOfRowsInComponent:(int)arg1;
- (unsigned int)numberOfComponents;
- (int)displayedCalendarUnits;
- (unsigned int)extractableCalendarUnits;
- (id)_componentForCalendarUnit:(unsigned int)arg1;
- (int)componentForCalendarUnit:(unsigned int)arg1;
- (unsigned int)calendarUnitForComponent:(int)arg1;
- (id)components;
- (void)resetComponentWidths;
- (void)noteCalendarChanged;
- (void)dealloc;
- (id)initWithFormatString:(id)arg1 datePickerView:(id)arg2;

@end

