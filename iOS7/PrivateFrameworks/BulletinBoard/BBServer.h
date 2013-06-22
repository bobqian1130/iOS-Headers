/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ABPredicateDelegate-Protocol.h"
#import "BBDataProviderManagerDelegate-Protocol.h"
#import "BBSyncServiceDelegate-Protocol.h"
#import "XPCProxyTarget-Protocol.h"

@class ABFavoritesListManager, BBDataProviderManager, BBSyncService, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_source>, NSSet, NSString;

@interface BBServer : NSObject <ABPredicateDelegate, BBDataProviderManagerDelegate, XPCProxyTarget, BBSyncServiceDelegate>
{
    NSMutableDictionary *_bulletinRequestsByID;
    NSMutableDictionary *_sectionInfoByID;
    NSSet *_restrictedSectionIDs;
    unsigned int _currentSystemState;
    int _privilegedAddressBookGroupRecordID;
    NSMutableDictionary *_lastContactTimeForSender;
    unsigned int _activeBehaviorOverrides;
    unsigned int _privilegedSenderTypes;
    BOOL _isRunning;
    BBDataProviderManager *_dataProviderManager;
    NSMutableSet *_observers;
    NSMutableSet *_noticesObservers;
    NSMutableSet *_modalAlertObservers;
    NSMutableSet *_bannerObservers;
    NSMutableSet *_lockscreenObservers;
    NSMutableSet *_soundObservers;
    NSMutableSet *_todayObservers;
    NSMutableSet *_futureObservers;
    NSMutableSet *_settingsObservers;
    NSMutableSet *_settingsGateways;
    NSMutableSet *_suspendedConnections;
    NSMutableDictionary *_activeSectionIDsByCategory;
    NSMutableDictionary *_sortedSectionIDsByCategory;
    int _sectionOrderRule;
    NSMutableDictionary *_bulletinsByID;
    NSMutableDictionary *_bulletinIDsBySectionID;
    NSMutableDictionary *_transactionsByObserver;
    NSMutableDictionary *_noticeBulletinIDsBySectionID;
    NSMutableDictionary *_todayBulletinIDsBySectionID;
    NSMutableDictionary *_futureBulletinIDsBySectionID;
    NSArray *_behaviorOverrides;
    int _behaviorOverrideStatus;
    NSDate *_behaviorOverrideStatusEffectiveTime;
    NSObject<OS_dispatch_source> *_behaviorOverridesTimer;
    NSDate *_behaviorOverridesWakeTime;
    NSMutableArray *_behaviorOverrideStatusChangeClients;
    NSMutableArray *_activeBehaviorOverrideTypesChangeSettingsGateways;
    NSMutableArray *_activeBehaviorOverrideTypesChangeClients;
    BOOL _behaviorOverridesEffectiveWhileUnlocked;
    NSString *_privilegedAddressBookGroupName;
    NSMutableArray *_privilegedSenderFilteringStateChangeClients;
    BOOL _privilegedSenderFilteringNecessary;
    NSMutableArray *_expiringBulletinIDs;
    NSObject<OS_dispatch_source> *_expirationTimer;
    NSMutableArray *_eventBasedExpiringBulletinIDs;
    NSDate *_nextScheduledExpirationTimerFireDate;
    NSMutableDictionary *_clearedSections;
    NSMutableDictionary *_dataProviderFactoriesBySection;
    int _serverIsRunningToken;
    int _demo_lockscreen_token;
    BBSyncService *_syncService;
    void *_addressBook;
    ABFavoritesListManager *_favoritesListManager;
    BOOL _entryFound;
}

+ (void)initialize;
- (BOOL)syncService:(id)arg1 shouldAbortDelayedDismissalForBulletin:(id)arg2;
- (void)syncService:(id)arg1 receivedDismissalDictionaries:(id)arg2 dismissalIDs:(id)arg3 inSection:(id)arg4 forFeeds:(unsigned int)arg5;
- (void)demo_lockscreen:(unsigned long long)arg1;
- (void)_writeBehaviorOverrides;
- (void)_loadBehaviorOverrides;
- (void)_writeSectionInfo;
- (void)_writeSectionOrder;
- (void)_loadSavedSectionInfo;
- (void)_loadSavedSectionOrderAndRule;
- (id)_behaviorOverridesPath;
- (id)_sectionInfoPath;
- (id)_sectionOrderPath;
- (void)_writeClearedSections;
- (void)_loadClearedSections;
- (id)_clearedSectionsPath;
- (void)_ensureDataDirectoryExists;
- (id)_dataDirectoryPath;
- (void)_removeDataProvider:(id)arg1 forFactory:(id)arg2;
- (void)_addDataProvider:(id)arg1 forFactory:(id)arg2;
- (void)_removeActiveSectionID:(id)arg1;
- (void)_removeActiveSectionID:(id)arg1 fromCategory:(int)arg2;
- (id)_bulletinsForSectionID:(id)arg1 inFeeds:(unsigned int)arg2;
- (void)_addActiveSectionID:(id)arg1;
- (void)_addActiveSectionID:(id)arg1 toCategory:(int)arg2;
- (void)_addSectionID:(id)arg1 toSortedSectionIDsForCategory:(int)arg2;
- (void)dpManager:(id)arg1 removeDataProviderSectionID:(id)arg2;
- (void)dpManager:(id)arg1 addDataProviderFactory:(id)arg2 withSectionInfo:(id)arg3;
- (void)dpManager:(id)arg1 addDataProvider:(id)arg2 withSectionInfo:(id)arg3;
- (id)dpManager:(id)arg1 sectionInfoForSectionID:(id)arg2;
- (id)dataProviderForSectionID:(id)arg1;
- (void)_updateSectionInfoForSectionID:(id)arg1 handler:(id)arg2;
- (void)_saveUpdatedSectionInfo:(id)arg1 forSectionID:(id)arg2;
- (void)_updateClearedInfoForSectionID:(id)arg1 handler:(id)arg2;
- (void)_saveUpdatedClearedInfo:(id)arg1 forSectionID:(id)arg2;
- (void)_setClearedInfo:(id)arg1 forSectionID:(id)arg2;
- (id)_clearedInfoForSectionID:(id)arg1;
- (unsigned int)_filtersForSectionID:(id)arg1;
- (void)_publishBulletinRequest:(id)arg1 forSectionID:(id)arg2 forDestinations:(unsigned int)arg3 alwaysToLockScreen:(BOOL)arg4;
- (void)_publishBulletinRequest:(id)arg1 forSectionID:(id)arg2 forDestinations:(unsigned int)arg3;
- (void)_reloadReloadSectionInfoForSectionID:(id)arg1;
- (void)_updateSectionParametersForDataProvider:(id)arg1;
- (void)_reloadSectionParametersForSectionID:(id)arg1;
- (void)_updateAllBulletinsForDataProvider:(id)arg1;
- (void)_updateBulletinsInFeed:(unsigned int)arg1 forDataProvider:(id)arg2 enabledSectionIDs:(id)arg3;
- (void)_updateAllBulletinsForDataProviderIfSectionIsEnabled:(id)arg1;
- (void)_updateBulletinsInFeed:(unsigned int)arg1 forDataProviderIfSectionIsEnabled:(id)arg2;
- (void)_updateBulletinsInFeed:(unsigned int)arg1 ifSectionIsEnabled:(id)arg2;
- (id)_enabledSectionIDsForDataProvider:(id)arg1;
- (BOOL)_verifyBulletinRequest:(id)arg1 forDataProvider:(id)arg2;
- (void)_publishBulletinsForAllDataProviders;
- (void)_loadDataProvidersAndSettings;
- (void)_migrateSectionOrder;
- (void)_migrateLoadedData;
- (id)_sectionIDsToMigrate;
- (void)weeAppWithBundleID:(id)arg1 getHiddenFromUser:(id)arg2;
- (void)weeAppWithBundleID:(id)arg1 setHiddenFromUser:(BOOL)arg2;
- (void)sendMessageToDataProviderSectionID:(id)arg1 name:(id)arg2 userInfo:(id)arg3;
- (void)setActiveBehaviorOverrideChangeUpdatesEnabled:(BOOL)arg1 forClient:(id)arg2;
- (void)setNotificationPresentationFilteringStateChangeUpdatesEnabled:(BOOL)arg1 forClient:(id)arg2;
- (void)getShouldPresentNotificationOfType:(int)arg1 fromSenderWithDestinationID:(id)arg2 handler:(id)arg3;
- (void)settingsGateway:(id)arg1 setBehaviorOverridesEffectiveWhileUnlocked:(BOOL)arg2;
- (void)settingsGateway:(id)arg1 setActiveBehaviorOverrideTypesChangeUpdatesEnabled:(BOOL)arg2;
- (void)settingsGateway:(id)arg1 setBehaviorOverrideStatusChangeUpdatesEnabled:(BOOL)arg2;
- (void)settingsGateway:(id)arg1 setPrivilegedSenderAddressBookGroupRecordID:(int)arg2 name:(id)arg3;
- (void)settingsGateway:(id)arg1 setPrivilegedSenderTypes:(unsigned int)arg2;
- (void)settingsGateway:(id)arg1 setBehaviorOverrideStatus:(int)arg2;
- (void)settingsGateway:(id)arg1 setBehaviorOverrides:(id)arg2;
- (void)_clearBehaviorOverridesTimer;
- (void)_updateBehaviorOverrides;
- (void)_checkPrivilegedSenderFilteringState;
- (void)_behaviorOverrideStatusChanged;
- (void)_behaviorOverridesChanged;
- (void)_sendUpdateBehaviorOverrides;
- (unsigned int)_activeBehaviorOverrideTypesConsideringSystemState:(BOOL)arg1;
- (void)_noteSystemStateChanged;
- (unsigned int)_adjustedBehaviorOverrideTypes:(unsigned int)arg1 basedOnSystemState:(unsigned int)arg2;
- (void)_setBehaviorOverridesTimer;
- (void)settingsGateway:(id)arg1 setSectionInfo:(id)arg2 forSectionID:(id)arg3 inCategory:(int)arg4;
- (void)settingsGateway:(id)arg1 setOrderedSectionIDs:(id)arg2 forCategory:(int)arg3;
- (void)settingsGateway:(id)arg1 setSectionOrderRule:(int)arg2;
- (void)settingsGateway:(id)arg1 getBehaviorOverridesEffectiveWhileUnlockedWithHandler:(id)arg2;
- (void)settingsGateway:(id)arg1 getPrivilegedSenderAddressBookGroupRecordIDAndNameWithHandler:(id)arg2;
- (void)settingsGateway:(id)arg1 getPrivilegedSenderTypesWithHandler:(id)arg2;
- (void)settingsGateway:(id)arg1 getBehaviorOverridesEnabledWithHandler:(id)arg2;
- (void)settingsGateway:(id)arg1 getBehaviorOverridesWithHandler:(id)arg2;
- (void)settingsGateway:(id)arg1 getSectionInfoForCategory:(int)arg2 withHandler:(id)arg3;
- (void)observer:(id)arg1 getActiveAlertBehaviorOverridesWithHandler:(id)arg2;
- (void)observer:(id)arg1 requestFutureBulletinsForSectionID:(id)arg2;
- (void)observer:(id)arg1 requestTodayBulletinsForSectionID:(id)arg2;
- (void)observer:(id)arg1 requestNoticesBulletinsForSectionID:(id)arg2;
- (id)_updatesForObserver:(id)arg1 bulletinIDs:(id)arg2;
- (void)observer:(id)arg1 getSectionInfoForCategory:(int)arg2 withHandler:(id)arg3;
- (void)observer:(id)arg1 removeBulletins:(id)arg2 inSection:(id)arg3 fromFeeds:(unsigned int)arg4;
- (void)observer:(id)arg1 clearBulletinIDs:(id)arg2 inSection:(id)arg3;
- (void)observer:(id)arg1 clearSection:(id)arg2;
- (void)observer:(id)arg1 finishedWithBulletinID:(id)arg2 transactionID:(unsigned int)arg3;
- (void)observer:(id)arg1 handleResponse:(id)arg2;
- (void)observer:(id)arg1 setObserverFeed:(unsigned int)arg2;
- (void)getAttachmentAspectRatioForBulletinID:(id)arg1 withHandler:(id)arg2;
- (void)getAttachmentPNGDataForBulletinID:(id)arg1 sizeConstraints:(id)arg2 withHandler:(id)arg3;
- (void)getSectionParametersForSectionID:(id)arg1 withHandler:(id)arg2;
- (void)getSortDescriptorsForSectionID:(id)arg1 withHandler:(id)arg2;
- (void)getSectionOrderRuleWithHandler:(id)arg1;
- (void)ping:(id)arg1;
- (void)_scheduleExpirationForBulletin:(id)arg1;
- (void)_expireBulletins;
- (void)_expireBulletinsDueToSystemEvent:(unsigned int)arg1;
- (unsigned int)_indexForNewDate:(id)arg1 inBulletinIDArray:(id)arg2 sortedAscendingByDateForKey:(id)arg3;
- (id)_bulletinIDsInSortedArray:(id)arg1 withDateForKey:(id)arg2 beforeCutoff:(id)arg3;
- (void)_expireBulletinsAndRescheduleTimerIfNecessary;
- (id)_nextExpireBulletinsDate;
- (void)_scheduleTimerForDate:(id)arg1;
- (void)_clearExpirationTimer;
- (void)_handleSignificantTimeChange;
- (void)_handleSystemWake;
- (void)_handleSystemSleep;
- (void)_setSectionInfo:(id)arg1 forSectionID:(id)arg2;
- (void)_setSectionInfo:(id)arg1 forSectionID:(id)arg2 inCategory:(int)arg3;
- (void)_clearBulletinIDIfPossible:(id)arg1 rescheduleExpirationTimer:(BOOL)arg2;
- (id)_sectionInfoArrayForCategory:(int)arg1 effective:(BOOL)arg2;
- (id)_sectionInfoForSectionID:(id)arg1 effective:(BOOL)arg2;
- (id)_effectiveSectionInfoForSectionInfo:(id)arg1;
- (void)_sortSectionIDs:(id)arg1 usingGuideArray:(id)arg2;
- (void)_sortSectionIDs:(id)arg1 usingOrder:(id)arg2;
- (id)_sortedActiveSectionsForCategory:(int)arg1;
- (id)_sortedSectionIDsForCategory:(int)arg1;
- (id)activeSectionIDsForDefaultCategory;
- (id)_activeSectionIDsForCategory:(int)arg1;
- (id)_defaultSectionOrderForCategory:(int)arg1 topLevelCollection:(id)arg2;
- (id)_defaultSectionOrders;
- (id)_allBulletinsForSectionID:(id)arg1;
- (id)_bulletinsForIDs:(id)arg1;
- (unsigned int)_incrementedTransactionIDForObserver:(id)arg1 bulletinID:(id)arg2;
- (id)_currentTransactionForObserver:(id)arg1 bulletinID:(id)arg2;
- (unsigned int)_feedsForBulletin:(id)arg1 destinations:(unsigned int)arg2 alwaysToLockScreen:(BOOL)arg3;
- (unsigned int)_feedsForBulletin:(id)arg1 destinations:(unsigned int)arg2;
- (void)_removeSection:(id)arg1;
- (void)_clearSection:(id)arg1;
- (void)_clearBulletinIDs:(id)arg1 forSectionID:(id)arg2 shouldSync:(BOOL)arg3;
- (void)_removeBulletin:(id)arg1 shouldSync:(BOOL)arg2;
- (void)_removeBulletin:(id)arg1 rescheduleTimerIfAffected:(BOOL)arg2 shouldSync:(BOOL)arg3;
- (void)_modifyBulletin:(id)arg1;
- (void)_addBulletin:(id)arg1;
- (void)_sendRemoveBulletin:(id)arg1 toFeeds:(unsigned int)arg2 shouldSync:(BOOL)arg3;
- (void)_sendRemoveBulletins:(id)arg1 toFeeds:(unsigned int)arg2 shouldSync:(BOOL)arg3;
- (void)_sendModifyBulletin:(id)arg1 toFeeds:(unsigned int)arg2;
- (void)_sendAddBulletin:(id)arg1 toFeeds:(unsigned int)arg2;
- (id)_observersForFeeds:(unsigned int)arg1;
- (void)_sendUpdateSectionOrderRule;
- (void)_sendUpdateSectionOrderForCategory:(int)arg1;
- (id)_observersForCategory:(int)arg1;
- (void)_handleServerConduitConnection:(id)arg1;
- (void)_handleSystemStateConnection:(id)arg1;
- (void)_handleUtilitiesConnection:(id)arg1;
- (void)_sendUpdateSectionInfo:(id)arg1 inCategory:(int)arg2;
- (void)_removeSettingsGateway:(id)arg1;
- (void)_addSettingsGatewayWithConnection:(id)arg1;
- (void)_removeObserver:(id)arg1;
- (void)_addObserverWithConnection:(id)arg1;
- (void)_resumeAllSuspendedConnections;
- (id)sortDescriptorsForSectionID:(id)arg1;
- (unsigned int)userBulletinCapForSectionID:(id)arg1;
- (id)allBulletinIDsForSectionID:(id)arg1;
- (id)futureBulletinIDsForSectionID:(id)arg1;
- (id)todayBulletinIDsForSectionID:(id)arg1;
- (id)noticesBulletinIDsForSectionID:(id)arg1;
- (id)bulletinIDsForSectionID:(id)arg1 inFeed:(unsigned int)arg2;
- (void)removeBulletinID:(id)arg1 fromFutureSection:(id)arg2;
- (void)removeBulletinID:(id)arg1 fromTodaySection:(id)arg2;
- (void)removeBulletinID:(id)arg1 fromNoticesSection:(id)arg2;
- (void)removeBulletinID:(id)arg1 fromSection:(id)arg2 inFeed:(unsigned int)arg3;
- (id)_mapForFeed:(unsigned int)arg1;
- (void)withdrawBulletinID:(id)arg1;
- (void)publishBulletin:(id)arg1 destinations:(unsigned int)arg2 alwaysToLockScreen:(BOOL)arg3;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (BOOL)isRunning;
- (void)dealloc;
- (id)init;
- (void)withdrawBulletinRequestsWithPublisherBulletinID:(id)arg1 forSectionID:(id)arg2;
- (void)withdrawBulletinRequestsWithRecordID:(id)arg1 forSectionID:(id)arg2;
- (void)updateSection:(id)arg1 inFeed:(unsigned int)arg2 withBulletinRequests:(id)arg3;
- (void)publishBulletinRequest:(id)arg1 destinations:(unsigned int)arg2 alwaysToLockScreen:(BOOL)arg3;
- (void)publishBulletinRequest:(id)arg1 destinations:(unsigned int)arg2;
- (void)deliverResponse:(id)arg1;
- (void)noteFinishedWithBulletinID:(id)arg1;
- (BOOL)_isSectionIDRestricted:(id)arg1;
- (id)_removalsForNoticesSection:(id)arg1 addition:(id)arg2 keepAddition:(char *)arg3;
- (void)_assignIDToBulletinRequest:(id)arg1 checkAgainstBulletins:(id)arg2;
- (void)_assignIDToBulletinRequest:(id)arg1;
- (id)_bulletinRequestsForIDs:(id)arg1;
- (BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void *)arg2;
- (BOOL)predicateShouldContinue:(id)arg1;
- (BOOL)isPrivilegedSenderFilteringNecessaryForActiveBehaviorOverrides:(unsigned int)arg1 privilegedSenderTypes:(unsigned int)arg2;
- (BOOL)shouldPresentNotificationOfType:(int)arg1 fromSenderWithDestinationID:(id)arg2;
- (BOOL)_doesAddressBookContainDestinationID:(id)arg1;
- (BOOL)_doesFavoritesListContainDestinationID:(id)arg1;
- (BOOL)_checkPersistentSenderStatusForDestinationID:(id)arg1 notificationType:(int)arg2;
- (BOOL)_doesPrivilegedAddressBookGroupContainDestinationID:(id)arg1;
- (BOOL)_isDestinationID:(id)arg1 inAddressBookGroupWithRecordID:(int)arg2;
- (id)_addressBookPredicateForDestinationID:(id)arg1;
- (id)_favoritesListManager;
- (void *)_addressBook;
- (void)noteRestrictedSectionIDsDidChange:(id)arg1;
- (void)noteOccurrenceOfEvent:(unsigned int)arg1;
- (void)noteChangeOfState:(unsigned int)arg1 newValue:(BOOL)arg2;

@end

