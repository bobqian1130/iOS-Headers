/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAReminderListObject : SADomainObject
{
}

+ (id)listObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)listObject;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
@property(copy, nonatomic) NSString *name;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

