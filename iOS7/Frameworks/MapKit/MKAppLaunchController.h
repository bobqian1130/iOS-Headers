/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, NSURL, SSLookupRequest;

@interface MKAppLaunchController : NSObject
{
    SSLookupRequest *_request;
    NSString *_webURLString;
    NSURL *webURL;
}

+ (void)launchAttributionURLs:(id)arg1 withAttributionApps:(id)arg2;
+ (id)sharedController;
@property(retain, nonatomic) NSURL *webURL; // @synthesize webURL;
@property(retain, nonatomic) SSLookupRequest *storeRequest; // @synthesize storeRequest=_request;
- (void)lookUpAppStoreURLForBundle:(id)arg1;
- (void)dealloc;

@end

