/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/_UIDatePickerMode.h>

@interface _UIDatePickerMode_TimeInterval : _UIDatePickerMode
{
    float _componentWidth;
}

+ (unsigned int)extractableCalendarUnits;
+ (int)datePickerMode;
- (unsigned int)nextUnitSmallerThanUnit:(unsigned int)arg1;
- (unsigned int)nextUnitLargerThanUnit:(unsigned int)arg1;
- (BOOL)_shouldEnableValueForRow:(int)arg1 inComponent:(int)arg2 calendarUnit:(unsigned int)arg3;
- (int)valueForDate:(id)arg1 dateComponents:(id)arg2 calendarUnit:(unsigned int)arg3;
- (id)dateComponentsByRestrictingSelectedComponents:(id)arg1 withLastManipulatedColumn:(int)arg2;
- (BOOL)areValidDateComponents:(id)arg1 comparingUnits:(int)arg2;
- (float)widthForCalendarUnit:(unsigned int)arg1 font:(id)arg2 maxWidth:(float)arg3;
- (struct _NSRange)rangeForCalendarUnit:(unsigned int)arg1;
- (int)titleAlignmentForCalendarUnit:(unsigned int)arg1;
- (id)titleForRow:(int)arg1 inComponent:(int)arg2;
- (int)hourForRow:(int)arg1;
- (id)font;
- (int)numberOfRowsForCalendarUnit:(unsigned int)arg1;
- (void)resetComponentWidths;
- (float)rowHeight;
- (void)takeExtremesFromMinimumDate:(id)arg1 maximumDate:(id)arg2;
- (id)localizedFormatString;
- (BOOL)isTimeIntervalMode;

@end

