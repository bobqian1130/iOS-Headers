/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKit/EKPersistentObject.h>

#import "NSCopying-Protocol.h"

@class NSString, NSURL;

@interface EKPersistentParticipant : EKPersistentObject <NSCopying>
{
}

+ (id)defaultPropertiesToLoad;
- (id)owner;
@property(copy, nonatomic) NSString *comment;
@property(copy, nonatomic) NSURL *address;
@property(copy, nonatomic) NSString *lastName;
@property(copy, nonatomic) NSString *firstName;
@property(copy, nonatomic) NSString *emailAddress;
@property(copy, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSString *UUID;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

