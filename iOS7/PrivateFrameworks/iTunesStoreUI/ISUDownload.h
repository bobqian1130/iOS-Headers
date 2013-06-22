/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSNumber, NSObject<OS_dispatch_queue>, NSString, NSURL, SSDownload;

@interface ISUDownload : NSObject
{
    SSDownload *_download;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (void)initialize;
+ (id)downloadProperties;
+ (id)downloadExternalProperties;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSURL *thumbnailImageURL;
@property(readonly, nonatomic) NSNumber *storePreorderIdentifier;
@property(readonly, nonatomic) NSNumber *storeItemIdentifier;
@property(readonly, nonatomic) NSString *statusDescription;
@property(retain, nonatomic) SSDownload *managedDownload;
- (void)resetPreorderState;
@property(readonly, nonatomic) NSString *phaseIdentifier;
@property(readonly, nonatomic) double percentComplete;
@property(readonly, nonatomic, getter=isPurchase) BOOL purchase;
@property(readonly, nonatomic, getter=isPausable) BOOL pausable;
@property(readonly, nonatomic, getter=isContentRestricted) BOOL contentRestricted;
@property(readonly, nonatomic) double estimatedSecondsRemaining;
- (id)copyLocalizedStatusString;
@property(readonly, nonatomic) long long bytesTotal;
@property(readonly, nonatomic) long long bytesDownloaded;
@property(readonly, nonatomic) NSString *artistName;
- (void)dealloc;
- (id)initWithManagedDownload:(id)arg1;

@end

