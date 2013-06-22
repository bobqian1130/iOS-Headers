/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SAObjects/SABaseCommand.h>

#import "SADomainObjectCommand-Protocol.h"
#import "SAServerBoundCommand-Protocol.h"

@class NSString, NSURL;

@interface SADomainObjectCreateCompleted : SABaseCommand <SAServerBoundCommand, SADomainObjectCommand>
{
}

+ (id)domainObjectCreateCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)domainObjectCreateCompleted;
@property(copy, nonatomic) NSURL *identifier;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;

@end

