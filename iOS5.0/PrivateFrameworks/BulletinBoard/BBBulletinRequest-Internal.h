/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <BulletinBoard/BBBulletinRequest.h>

@class NSString;

@interface BBBulletinRequest (Internal)
- (void)generateNewBulletinID;
- (id)publisherMatchID;
- (BOOL)hasContentModificationsRelativeTo:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *bulletinID; // @dynamic bulletinID;
@end

