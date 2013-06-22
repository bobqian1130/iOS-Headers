/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MFContactsSearchConsumer-Protocol.h"

@class MFContactsSearchManager, MFContactsSearchResultsModel, NSNumber;

@interface MFMailComposeContactsSearchController : NSObject <MFContactsSearchConsumer>
{
    id <MFMailComposeContactsSearchControllerDelegate> _delegate;
    MFContactsSearchManager *_manager;
    MFContactsSearchResultsModel *_model;
    NSNumber *_taskID;
    NSNumber *_corecipientSearchTaskID;
    BOOL _foundAnySearchResults;
    unsigned int _waitingOnSearchResultsCount;
}

@property(retain, nonatomic) NSNumber *taskID; // @synthesize taskID=_taskID;
@property(nonatomic) id <MFMailComposeContactsSearchControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)endedNetworkActivity;
- (void)beganNetworkActivity;
- (void)_finishSearch;
- (void)finishedTaskWithID:(id)arg1;
- (void)finishedSearchingForType:(int)arg1;
- (void)consumeSearchResults:(id)arg1 type:(int)arg2 taskID:(id)arg3;
- (void)findCorecipientsWithRecipients:(id)arg1;
- (void)_cancelSearchAndNotify:(BOOL)arg1;
- (void)cancelSearch;
- (void)searchWithString:(id)arg1 enteredRecipients:(id)arg2;
- (void)searchWithString:(id)arg1;
- (void)dealloc;
- (id)init;

@end

