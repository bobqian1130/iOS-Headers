/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Message/MFMessageLibrary.h>

#import "MFContentProtectionObserver-Protocol.h"
#import "MFLibraryContentIndexDataSource-Protocol.h"
#import "MFSQLiteConnectionPoolDelegate-Protocol.h"

@class MFAttachmentLibraryDataProvider, MFDbJournal, MFLibraryContentIndex, MFMailMessageLibraryMigrator, MFSQLiteConnectionPool, MFWeakObjectCache, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface MFMailMessageLibrary : MFMessageLibrary <MFLibraryContentIndexDataSource, MFSQLiteConnectionPoolDelegate, MFContentProtectionObserver>
{
    MFSQLiteConnectionPool *_connectionPool;
    MFLibraryContentIndex *_contentIndex;
    MFWeakObjectCache *_libraryMessageCache;
    struct __CFDictionary *_mailboxCache;
    NSObject<OS_dispatch_queue> *_metadataQueue;
    id <MFMailboxPathProvider> _mailboxPathProvider;
    MFMailMessageLibraryMigrator *_migrator;
    NSString *_threadLocalHandleKey;
    NSString *_activeAccountClause;
    int _protectedDataAvailability;
    MFDbJournal *_protectedJournal;
    NSObject<OS_dispatch_queue> *_keyBagQueue;
    NSMutableSet *_messagesToThreadAtUnlock;
    id <MFMailMessageLibraryDelegate> _delegate;
    MFAttachmentLibraryDataProvider *_attachmentDataProvider;
}

+ (void)_removeLibrary:(BOOL)arg1 atPath:(id)arg2;
+ (void)removeLibraryAtPath:(id)arg1;
+ (id)defaultPath;
+ (id)defaultInstance;
- (id)_messageForStatement:(struct sqlite3_stmt *)arg1 options:(unsigned int)arg2 timestamp:(unsigned long long)arg3 isProtectedDataAvailable:(BOOL)arg4;
- (void)_removeCachedLibraryMessageWithLibraryID:(unsigned int)arg1;
- (id)_libraryMessageWithLibraryID:(unsigned int)arg1 wasCached:(char *)arg2;
- (id)_libraryMessageCache;
- (id)allMailboxURLStrings;
- (void)setMailboxPathProvider:(id)arg1;
- (id)itemsRequiringIndexingForContentIndex:(id)arg1 limit:(unsigned int)arg2;
- (void)contentIndex:(id)arg1 assignTransactionIdentifier:(unsigned int)arg2 forDocumentIdentifiers:(id)arg3;
- (void)_assignTransactionIdentifier:(unsigned int)arg1 forLibraryIDs:(id)arg2;
- (void)contentIndex:(id)arg1 invalidateItemsGreaterThanTransactionId:(unsigned int)arg2;
- (void)renameOrRemoveDatabase;
- (void)_handleBusyError;
- (void)_handleProtectedDataIOError;
- (void)_handleIOError;
- (void)_handleFullDatabase;
- (void)_handleCorruptDatabase;
- (void)_handleSQLiteErrorCode:(int)arg1 db:(struct sqlite3 *)arg2;
- (int)handleSqliteError:(struct sqlite3 *)arg1 format:(id)arg2;
- (struct sqlite3_stmt *)preparedStatement:(struct sqlite3 *)arg1 pattern:(id)arg2;
- (id)_activeConnectionWithDB:(struct sqlite3 *)arg1;
- (id)_activeConnection;
- (id)_activeConnectionWrapper;
- (id)_setActiveConnection:(id)arg1 forWriting:(BOOL)arg2;
- (void)unlockDB:(struct sqlite3 *)arg1;
- (struct sqlite3 *)getReaderDB;
- (struct sqlite3 *)getWriterDB;
- (id)_connectionForWriting:(BOOL)arg1;
- (void)closeDatabaseConnections;
- (void)_performTransaction:(id)arg1 forWriting:(void)arg2;
- (void)performReadTransaction:(id)arg1;
- (void)performWriteTransaction:(id)arg1;
- (int)rollbackTransaction:(struct sqlite3 *)arg1;
- (int)commitTransaction:(struct sqlite3 *)arg1;
- (int)beginTransaction:(struct sqlite3 *)arg1 withType:(int)arg2;
- (BOOL)migrate;
- (id)_newConnection;
- (id)newConnectionForConnectionPool:(id)arg1;
- (BOOL)isKeyBagUnlocked;
- (void)_addMessageToThreadAtUnlock:(unsigned int)arg1;
- (void)_reconcileAfterKeybagUnlock;
- (void)contentProtectionStateChanged:(int)arg1 previousState:(int)arg2;
- (BOOL)isProtectedDataAvailable:(struct sqlite3 *)arg1;
- (int)attachProtectedDatabase:(struct sqlite3 *)arg1;
- (void)_reconcileJournal:(struct sqlite3 *)arg1;
- (BOOL)cleanupProtectedTables:(struct sqlite3 *)arg1 checkForInconsistencies:(BOOL)arg2;
- (id)_indexSetOfMessagesDeleted;
@property(readonly, nonatomic) int protectedDataAvailability;
- (void)_setProtectedDataAvailabilityState:(int)arg1;
- (id)hiddenPOPUIDsInMailbox:(id)arg1;
- (id)allUIDsInMailbox:(id)arg1;
- (id)deletedUIDsInMailbox:(id)arg1;
- (id)UIDsToDeleteInMailbox:(id)arg1;
- (void)deletePOPUID:(id)arg1 inMailbox:(id)arg2;
- (void)deleteOfflineCacheDataForAccount:(int)arg1;
- (void)consumeOfflineCacheReplayDataForAccount:(int)arg1 usingBlock:(id)arg2;
- (void)appendOfflineCacheReplayData:(id)arg1 forAccountID:(int)arg2;
- (id)offlineCacheOperationsForAccount:(int)arg1 lastTemporaryID:(unsigned int *)arg2;
- (void)markOfflineCacheOperationAsComplete:(id)arg1;
- (void)appendOfflineCacheOperation:(id)arg1 forAccount:(int)arg2 lastTemporaryID:(unsigned int)arg3;
- (id)_activeAccountsClause;
- (void)rebuildActiveAccountsClauseWithAccounts:(id)arg1;
- (void)deleteAccount:(id)arg1;
- (int)libraryIDForAccount:(id)arg1;
- (int)createLibraryIDForAccount:(id)arg1;
- (id)filterContiguousMessages:(id)arg1 forCriterion:(id)arg2 options:(unsigned int)arg3;
- (id)messagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2;
- (id)messagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2 success:(char *)arg3;
- (id)messagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 success:(char *)arg4;
- (id)messagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3;
- (void)iterateMessagesMatchingCriterion:(id)arg1 withResultHandler:(id)arg2 options:(unsigned int)arg3 withMonitor:(id)arg4;
- (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned int)arg3;
- (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned int)arg3 range:(struct _NSRange)arg4;
- (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned int)arg3 baseTable:(unsigned int)arg4;
- (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned int)arg3 baseTable:(unsigned int)arg4 range:(struct _NSRange)arg5;
- (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned int)arg3 baseTable:(unsigned int)arg4 range:(struct _NSRange)arg5 success:(char *)arg6;
- (id)queryForCriterion:(id)arg1 db:(struct sqlite3 *)arg2 options:(unsigned int)arg3;
- (id)queryForCriterion:(id)arg1 db:(struct sqlite3 *)arg2 options:(unsigned int)arg3 range:(struct _NSRange)arg4;
- (id)queryForCriterion:(id)arg1 db:(struct sqlite3 *)arg2 options:(unsigned int)arg3 baseTable:(unsigned int)arg4;
- (id)queryForCriterion:(id)arg1 db:(struct sqlite3 *)arg2 options:(unsigned int)arg3 baseTable:(unsigned int)arg4 isSubquery:(BOOL)arg5;
- (id)queryForCriterion:(id)arg1 db:(struct sqlite3 *)arg2 options:(unsigned int)arg3 baseTable:(unsigned int)arg4 isSubquery:(BOOL)arg5 range:(struct _NSRange)arg6;
- (id)equalToMailboxIDsFromCriterion:(id)arg1;
- (id)dataProvider;
- (BOOL)isMessageContentsLocallyAvailable:(id)arg1;
- (BOOL)hasCompleteDataForMimePart:(id)arg1;
- (id)dataForMimePart:(id)arg1 isComplete:(char *)arg2;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2;
- (id)headerDataForMessage:(id)arg1;
- (id)bodyDataForMessage:(id)arg1;
- (id)bodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 isComplete:(char *)arg3;
- (id)headerDataAtPath:(id)arg1;
- (id)bodyDataAtPath:(id)arg1 headerData:(id *)arg2;
- (id)loadMeetingMetadataForMessage:(id)arg1;
- (id)loadMeetingExternalIDForMessage:(id)arg1;
- (id)loadMeetingDataForMessage:(id)arg1;
- (id)loadData:(id)arg1 forMessage:(id)arg2 usingBlock:(id)arg3;
- (id)metadataForMessage:(id)arg1;
- (id)metadataForMessage:(id)arg1 key:(id)arg2;
- (void)updateMessage:(id)arg1 withMetadata:(id)arg2;
- (void)setSummary:(id)arg1 forMessage:(id)arg2;
- (void)_setMessageDataString:(id)arg1 forKey:(id)arg2 forMessage:(id)arg3;
- (BOOL)_setMessageData:(id)arg1 libraryID:(unsigned int)arg2 part:(id)arg3 partial:(BOOL)arg4 complete:(BOOL)arg5;
- (void)setData:(id)arg1 forMessage:(id)arg2 isPartial:(BOOL)arg3;
- (id)dataConsumerForMessage:(id)arg1;
- (id)dataConsumerForMessage:(id)arg1 isPartial:(BOOL)arg2;
- (id)dataConsumerForMessage:(id)arg1 part:(id)arg2 incomplete:(BOOL)arg3;
- (id)dataConsumerForMessage:(id)arg1 part:(id)arg2;
- (id)dataPathForMessage:(id)arg1 part:(id)arg2;
- (id)attachmentsDirectoryForLibraryID:(unsigned int)arg1 mailboxID:(unsigned int)arg2;
- (id)dataPathForMessage:(id)arg1;
- (id)dataPathForMessage:(id)arg1 type:(int)arg2;
- (id)messageWithMessageID:(id)arg1 inMailbox:(id)arg2;
- (void)removeAllMessagesFromMailbox:(id)arg1 removeMailbox:(BOOL)arg2 andNotify:(BOOL)arg3;
- (void)vacuumDataForObsoleteAccountURLString:(id)arg1;
- (void)deleteMailboxes:(id)arg1;
- (BOOL)renameMailboxes:(id)arg1 to:(id)arg2;
- (void)compactMailbox:(id)arg1;
- (void)compactMessages:(id)arg1 permanently:(BOOL)arg2;
- (void)_notifyDidCompact:(BOOL)arg1 messages:(id)arg2 mailboxes:(id)arg3;
- (BOOL)_canSelectMessagesWithOptions:(unsigned int)arg1 db:(struct sqlite3 *)arg2;
- (BOOL)shouldCancel;
- (id)accountForMessage:(id)arg1;
- (id)remoteStoreForMessage:(id)arg1;
- (id)mailboxUidForMessage:(id)arg1;
- (id)mailboxURLForMessage:(id)arg1;
- (id)pathForMailboxURL:(id)arg1;
- (unsigned int)mailboxIDForURLString:(id)arg1;
- (id)urlForMailboxID:(unsigned int)arg1;
- (id)stringForQuery:(id)arg1;
- (id)stringForQuery:(id)arg1 monitor:(id)arg2;
- (int)loadMoreMessagesForThreadContainingMessage:(id)arg1 hasNoMoreMessages:(char *)arg2;
- (int)countOfMessagesMissingFromThreadContainingMessage:(id)arg1;
- (id)_getReferencesForHashesWithOwners:(struct __CFDictionary *)arg1;
- (struct __CFDictionary *)_copyReferenceHashesWithoutMessagesForMessageWithConversation:(id)arg1;
- (id)conversationIDsOfMessagesInSameThreadAsMessageWithLibraryID:(unsigned int)arg1 messageIDHash:(long long)arg2;
- (int)mailboxLocationOfMessageID:(unsigned int)arg1 usingDatabase:(struct sqlite3 *)arg2;
- (id)messageWithLibraryID:(unsigned int)arg1 options:(unsigned int)arg2 inMailbox:(id)arg3;
- (id)messagesWithMessageIDHeader:(id)arg1;
- (id)messageWithMessageID:(id)arg1 options:(unsigned int)arg2 inMailbox:(id)arg3;
- (id)getDetailsForAllMessagesFromMailbox:(id)arg1;
- (id)getDetailsForMessages:(unsigned int)arg1 absoluteBottom:(unsigned int)arg2 topOfDesiredRange:(unsigned int)arg3 range:(struct _NSRange *)arg4 fromMailbox:(id)arg5;
- (id)getDetailsForMessagesWithRemoteIDInRange:(struct _NSRange)arg1 fromMailbox:(id)arg2;
- (void)setSequenceIdentifier:(id)arg1 forMessagesWithRemoteIDs:(id)arg2 inMailbox:(id)arg3;
- (void)setSequenceIdentifier:(id)arg1 forMessageWithLibraryID:(unsigned int)arg2;
- (id)sequenceIdentifierForMessagesWithRemoteIDs:(id)arg1 inMailbox:(id)arg2;
- (void)setSequenceIdentifier:(id)arg1 forMailbox:(id)arg2;
- (id)sequenceIdentifierForMailbox:(id)arg1;
- (unsigned int)minimumRemoteIDForMailbox:(id)arg1;
- (unsigned int)maximumRemoteIDForMailbox:(id)arg1;
- (id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned int)arg2 inRemoteMailbox:(id)arg3;
- (id)messageWithRemoteID:(id)arg1 inRemoteMailbox:(id)arg2;
- (id)oldestMessageInMailbox:(id)arg1;
- (unsigned int)totalCountForMailbox:(id)arg1;
- (unsigned int)nonDeletedCountForMailbox:(id)arg1;
- (unsigned int)nonDeletedCountForMailbox:(id)arg1 includeServerSearchResults:(BOOL)arg2 includeThreadSearchResults:(BOOL)arg3;
- (unsigned int)deletedCountForMailbox:(id)arg1;
- (unsigned int)attachmentCountForMailbox:(id)arg1;
- (unsigned int)flaggedCountForMailbox:(id)arg1;
- (unsigned int)unreadCountForMailbox:(id)arg1 matchingCriterion:(id)arg2;
- (unsigned int)unreadCountForMailbox:(id)arg1;
- (unsigned int)integerForQuery:(id)arg1 withTextArgument:(id)arg2;
- (id)messagesWithoutSummariesForMailbox:(id)arg1 fromRowID:(unsigned int)arg2 limit:(unsigned int)arg3;
- (id)messagesWithSummariesForMailbox:(id)arg1 fromRowID:(unsigned int)arg2 limit:(unsigned int)arg3;
- (id)messagesWithoutSummariesForMailbox:(id)arg1;
- (id)messagesWithSummariesForMailbox:(id)arg1 range:(struct _NSRange)arg2;
- (struct __CFDictionary *)copySendersByLibraryIDForConversation:(long long)arg1 mailbox:(id)arg2 limit:(int)arg3;
- (long long)oldestKnownConversationInMailbox:(id)arg1;
- (unsigned int)countOfRelatedMessagesMatchingCriterion:(id)arg1 forConversationsContainingMessagesMatchingCriterion:(id)arg2 forMailbox:(id)arg3;
- (id)copyMessageInfosForConversationsContainingMessagesMatchingCriterion:(id)arg1 forMailbox:(id)arg2;
- (id)copyMessageInfosMatchingCriterion:(id)arg1;
- (id)copyMessageInfosForMailbox:(id)arg1;
- (id)dateOfOldestNonSearchResultMessageInMailbox:(id)arg1;
- (id)messagesNeedingSyncConfirmationForMailbox:(id)arg1;
- (id)serverSearchResultMessagesForMailbox:(id)arg1;
- (id)messagesForMailbox:(id)arg1 olderThanNumberOfDays:(int)arg2;
- (void)sendMessagesMatchingQuery:(const char *)arg1 db:(struct sqlite3 *)arg2 to:(id)arg3 options:(unsigned int)arg4;
- (void)sendMessagesForStatement:(struct sqlite3_stmt *)arg1 db:(struct sqlite3 *)arg2 to:(id)arg3 options:(unsigned int)arg4 timestamp:(unsigned long long)arg5;
- (void)iterateStatement:(struct sqlite3_stmt *)arg1 db:(struct sqlite3 *)arg2 withProgressMonitor:(id)arg3 andRowHandler:(void *)arg4 context:(void *)arg5;
- (void)updateThreadingInfoForMessage:(id)arg1 fromHeaders:(id)arg2;
- (void)updateRecipientsForMessage:(id)arg1 fromHeaders:(id)arg2;
- (id)addMessages:(id)arg1 withMailbox:(id)arg2 fetchBodies:(BOOL)arg3 newMessagesByOldMessage:(id)arg4 remoteIDs:(id)arg5 setFlags:(unsigned long long)arg6 clearFlags:(unsigned long long)arg7 messageFlagsForMessages:(id)arg8 copyFiles:(BOOL)arg9 addPOPUIDs:(BOOL)arg10 dataSectionsByMessage:(id)arg11;
@property(nonatomic) id <MFMailMessageLibraryDelegate> delegate;
- (long long)addReferencesForMessage:(id)arg1 libraryID:(unsigned int)arg2 messageIDHash:(long long)arg3 withSubject:(id)arg4 withReferences:(id)arg5 usingDatabase:(struct sqlite3 *)arg6 otherSubjectIDMappings:(id)arg7 usingMailbox:(int)arg8 notify:(BOOL)arg9;
- (id)addThreadingInfoBySubjectForMessageID:(unsigned int)arg1 nonPrefixedSubject:(id)arg2 messageIDsBySubject:(id)arg3 usingDatabase:(struct sqlite3 *)arg4 toReferences:(id)arg5 withinMailbox:(int)arg6;
- (id)referencesFromHeaders:(id)arg1;
- (void)notifyConversation:(long long)arg1 hasMergedIntoConversation:(long long)arg2;
- (BOOL)_writeEmlxFile:(id)arg1 withBodyData:(id)arg2 protectionClass:(int)arg3;
- (void)setMessage:(id)arg1 isPartial:(BOOL)arg2;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4;
- (void)setFlagsFromDictionary:(id)arg1 forMessagesInMailboxURLString:(id)arg2;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)setFlagsForMessages:(id)arg1 mask:(unsigned long long)arg2;
- (void)setFlags:(unsigned long long)arg1 forMessage:(id)arg2;
- (void)invalidateAndWait;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

