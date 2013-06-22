/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKit/EKCalendarNotification.h>

@class NSDate, NSString;

@interface EKCalendarEventInvitationNotification : EKCalendarNotification
{
    BOOL _allDay;
    BOOL _hasRecurrenceRules;
    NSString *_location;
    NSString *_calendarName;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDate *_participationStatusModifiedDate;
    int _status;
}

@property(nonatomic) BOOL hasRecurrenceRules; // @synthesize hasRecurrenceRules=_hasRecurrenceRules;
@property(nonatomic, getter=isAllDay) BOOL allDay; // @synthesize allDay=_allDay;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) NSDate *participationStatusModifiedDate; // @synthesize participationStatusModifiedDate=_participationStatusModifiedDate;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSString *calendarName; // @synthesize calendarName=_calendarName;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
- (BOOL)needsAlert;
- (id)eventFromEventStore:(id)arg1;
- (void)dealloc;
- (id)initWithType:(int)arg1;

@end

