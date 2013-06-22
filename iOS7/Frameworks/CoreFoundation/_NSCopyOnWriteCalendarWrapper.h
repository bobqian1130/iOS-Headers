/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreFoundation/NSCalendar.h>

@class NSObject<OS_dispatch_semaphore>;

@interface _NSCopyOnWriteCalendarWrapper : NSCalendar
{
    NSCalendar *cal;
    NSObject<OS_dispatch_semaphore> *lock;
    BOOL needsToCopy;
}

+ (id)currentCalendar;
- (unsigned int)hash;
- (id)components:(unsigned int)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned int)arg4;
- (id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned int)arg3;
- (id)components:(unsigned int)arg1 fromDate:(id)arg2;
- (id)dateFromComponents:(id)arg1;
- (BOOL)rangeOfUnit:(unsigned int)arg1 startDate:(id *)arg2 interval:(double *)arg3 forDate:(id)arg4;
- (unsigned int)ordinalityOfUnit:(unsigned int)arg1 inUnit:(unsigned int)arg2 forDate:(id)arg3;
- (struct _NSRange)rangeOfUnit:(unsigned int)arg1 inUnit:(unsigned int)arg2 forDate:(id)arg3;
- (struct _NSRange)maximumRangeOfUnit:(unsigned int)arg1;
- (struct _NSRange)minimumRangeOfUnit:(unsigned int)arg1;
- (unsigned int)minimumDaysInFirstWeek;
- (void)setMinimumDaysInFirstWeek:(unsigned int)arg1;
- (unsigned int)firstWeekday;
- (void)setFirstWeekday:(unsigned int)arg1;
- (id)timeZone;
- (void)setTimeZone:(id)arg1;
- (id)locale;
- (void)setLocale:(id)arg1;
- (id)calendarIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithCalendar:(id)arg1;
- (id)_initWithWrapper:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (void)_copyWrappedCalendar;

@end

