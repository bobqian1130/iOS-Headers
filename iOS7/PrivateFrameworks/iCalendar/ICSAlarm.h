/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iCalendar/ICSComponent.h>

@class ICSDateTimeUTCValue, ICSStructuredLocation, ICSTrigger, NSArray, NSString;

@interface ICSAlarm : ICSComponent
{
}

+ (id)createNoneAlarm;
+ (id)parseableDocumentFromICS:(id)arg1;
+ (id)ICSStringFromAction:(int)arg1;
+ (int)actionFromICSString:(id)arg1;
+ (id)name;
@property BOOL x_apple_local_default_alarm;
@property BOOL x_apple_default_alarm;
@property(retain) NSString *x_apple_proximity;
@property(retain) NSString *relatedTo;
@property(retain) ICSDateTimeUTCValue *acknowledged;
@property(retain) NSString *x_wr_alarmuid;
@property int action;
- (BOOL)isNoneAlarm;
- (void)fixAlarm;

// Remaining properties
@property(retain) NSArray *attach; // @dynamic attach;
@property(retain) NSArray *attendee; // @dynamic attendee;
@property(retain) NSString *description; // @dynamic description;
@property(retain) NSString *summary; // @dynamic summary;
@property(retain) ICSTrigger *trigger; // @dynamic trigger;
@property(retain) NSString *uid; // @dynamic uid;
@property(retain) ICSStructuredLocation *x_apple_structured_location; // @dynamic x_apple_structured_location;

@end

