/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CoreDAVContainerSyncTaskGroup.h"

@class NSSet;

@interface CalDAVNotificationContainerSyncTaskGroup : CoreDAVContainerSyncTaskGroup
{
    NSSet *_notificationTypeNamesToFetch;
}

@property(retain) NSSet *notificationTypeNamesToFetch; // @synthesize notificationTypeNamesToFetch=_notificationTypeNamesToFetch;
- (id)copyAdditionalResourcePropertiesToFetch;
- (BOOL)shouldFetchResourceWithEtag:(id)arg1 propertiesToValues:(id)arg2;
- (id)copyGetTaskWithURL:(id)arg1;
- (void)dealloc;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 accountInfoProvider:(id)arg4 taskManager:(id)arg5;

@end

