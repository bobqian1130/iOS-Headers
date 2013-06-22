/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, SSURLConnectionRequest;

@interface HSAccountStore : NSObject
{
    int _defaultsDidChangeToken;
    SSURLConnectionRequest *_groupIDRequest;
}

+ (id)defaultStore;
@property(retain, nonatomic) SSURLConnectionRequest *groupIDRequest; // @synthesize groupIDRequest=_groupIDRequest;
@property(copy, nonatomic) NSString *groupID; // @dynamic groupID;
- (void)clearGroupID;
- (void)clearCaches;
- (void)clearAllCredentials;
- (void)determineGroupIDWithCompletionHandler:(id)arg1;
- (BOOL)canDetermineGroupID;
@property(copy, nonatomic) NSString *password; // @dynamic password;
@property(copy, nonatomic) NSString *appleID; // @dynamic appleID;
- (void)dealloc;
- (id)init;

@end

