/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKit/EKPersistentObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, NSNumber, NSString, NSURL;

@interface EKPersistentAttachment : EKPersistentObject <NSCopying>
{
}

+ (id)relations;
- (id)description;
@property(copy, nonatomic) NSDictionary *XProperties;
@property(readonly, nonatomic) NSString *UUID;
@property(copy, nonatomic) NSNumber *fileSize;
@property(copy, nonatomic) NSURL *localURL;
- (void)setIsBinary:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isBinary;
@property(copy, nonatomic) NSString *fileFormat;
@property(copy, nonatomic) NSString *fileName;
@property(copy, nonatomic) NSURL *URL;
- (int)entityType;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

