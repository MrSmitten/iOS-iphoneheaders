/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:51 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/BBDataProviderManagerDelegate.h>
#import <SpringBoardServices/XPCProxyTarget.h>
#import <BulletinBoard/BBSyncServiceDelegate.h>
#import <BulletinBoard/ABPredicateDelegate.h>

@protocol OS_dispatch_source;
@class NSMutableDictionary, NSSet, BBDataProviderManager, NSMutableSet, NSArray, NSDate, NSObject, NSMutableArray, NSString, BBSyncService, ABFavoritesListManager;

@interface BBServer : NSObject <BBDataProviderManagerDelegate, XPCProxyTarget, BBSyncServiceDelegate, ABPredicateDelegate> {

	NSMutableDictionary* _bulletinRequestsByID;
	NSMutableDictionary* _sectionInfoByID;
	NSSet* _restrictedSectionIDs;
	unsigned long long _currentSystemState;
	int _privilegedAddressBookGroupRecordID;
	NSMutableDictionary* _lastContactTimeForSender;
	unsigned long long _activeBehaviorOverrides;
	unsigned long long _privilegedSenderTypes;
	bool _isRunning;
	BBDataProviderManager* _dataProviderManager;
	NSMutableSet* _observers;
	NSMutableSet* _noticesObservers;
	NSMutableSet* _modalAlertObservers;
	NSMutableSet* _bannerObservers;
	NSMutableSet* _lockscreenObservers;
	NSMutableSet* _soundObservers;
	NSMutableSet* _todayObservers;
	NSMutableSet* _futureObservers;
	NSMutableSet* _carObservers;
	NSMutableSet* _settingsObservers;
	NSMutableSet* _settingsGateways;
	NSMutableSet* _suspendedConnections;
	NSMutableDictionary* _activeSectionIDsByCategory;
	NSMutableDictionary* _sortedSectionIDsByCategory;
	long long _sectionOrderRule;
	NSMutableDictionary* _bulletinsByID;
	NSMutableDictionary* _bulletinIDsBySectionID;
	NSMutableDictionary* _transactionsByObserver;
	NSMutableDictionary* _noticeBulletinIDsBySectionID;
	NSMutableDictionary* _todayBulletinIDsBySectionID;
	NSMutableDictionary* _futureBulletinIDsBySectionID;
	NSArray* _behaviorOverrides;
	long long _behaviorOverrideStatus;
	NSDate* _behaviorOverrideStatusEffectiveTime;
	NSObject<OS_dispatch_source>* _behaviorOverridesTimer;
	NSDate* _behaviorOverridesWakeTime;
	NSMutableArray* _behaviorOverridesChangeClients;
	NSMutableArray* _behaviorOverrideStatusChangeClients;
	NSMutableArray* _activeBehaviorOverrideTypesChangeSettingsGateways;
	NSMutableArray* _activeBehaviorOverrideTypesChangeClients;
	bool _behaviorOverridesEffectiveWhileUnlocked;
	NSString* _privilegedAddressBookGroupName;
	NSMutableArray* _privilegedSenderFilteringStateChangeClients;
	bool _privilegedSenderFilteringNecessary;
	NSMutableArray* _expiringBulletinIDs;
	NSObject<OS_dispatch_source>* _expirationTimer;
	NSMutableArray* _eventBasedExpiringBulletinIDs;
	NSDate* _nextScheduledExpirationTimerFireDate;
	NSMutableDictionary* _clearedSections;
	NSMutableDictionary* _dataProviderFactoriesBySection;
	int _serverIsRunningToken;
	int _demo_lockscreen_token;
	BBSyncService* _syncService;
	void* _addressBook;
	ABFavoritesListManager* _favoritesListManager;
	bool _entryFound;

}
+(void)initialize;
-(void)noteChangeOfState:(unsigned long long)arg1 newValue:(bool)arg2 ;
-(void)noteOccurrenceOfEvent:(unsigned long long)arg1 ;
-(void)noteRestrictedSectionIDsDidChange:(id)arg1 ;
-(bool)predicateShouldContinue:(id)arg1 ;
-(bool)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 ;
-(bool)isPrivilegedSenderFilteringNecessaryForActiveBehaviorOverrides:(unsigned long long)arg1 privilegedSenderTypes:(unsigned long long)arg2 ;
-(bool)shouldPresentNotificationOfType:(int)arg1 fromSenderWithDestinationID:(id)arg2 ;
-(id)_favoritesListManager;
-(id)_addressBookPredicateForDestinationID:(id)arg1 ;
-(bool)_isDestinationID:(id)arg1 inAddressBookGroupWithRecordID:(int)arg2 ;
-(bool)_checkPersistentSenderStatusForDestinationID:(id)arg1 notificationType:(int)arg2 ;
-(bool)_doesAddressBookContainDestinationID:(id)arg1 ;
-(bool)_doesPrivilegedAddressBookGroupContainDestinationID:(id)arg1 ;
-(bool)_doesFavoritesListContainDestinationID:(id)arg1 ;
-(void*)_addressBook;
-(void)_assignIDToBulletinRequest:(id)arg1 ;
-(id)_removalsForNoticesSection:(id)arg1 addition:(id)arg2 keepAddition:(bool*)arg3 ;
-(bool)_isSectionIDRestricted:(id)arg1 ;
-(id)_bulletinRequestsForIDs:(id)arg1 ;
-(void)_assignIDToBulletinRequest:(id)arg1 checkAgainstBulletins:(id)arg2 ;
-(void)noteFinishedWithBulletinID:(id)arg1 ;
-(void)deliverResponse:(id)arg1 ;
-(void)withdrawBulletinRequestsWithRecordID:(id)arg1 forSectionID:(id)arg2 ;
-(void)withdrawBulletinRequestsWithPublisherBulletinID:(id)arg1 forSectionID:(id)arg2 ;
-(void)updateSection:(id)arg1 inFeed:(unsigned long long)arg2 withBulletinRequests:(id)arg3 ;
-(void)publishBulletinRequest:(id)arg1 destinations:(unsigned long long)arg2 alwaysToLockScreen:(bool)arg3 ;
-(void)_updateShowsMessagePreviewForBulletin:(id)arg1 ;
-(void)publishBulletinRequest:(id)arg1 destinations:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)init;
-(bool)isRunning;
-(id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2 ;
-(void)observer:(id)arg1 setObserverFeed:(unsigned long long)arg2 ;
-(void)getSectionOrderRuleWithHandler:(/*^block*/ id)arg1 ;
-(void)observer:(id)arg1 getSectionInfoForCategory:(long long)arg2 withHandler:(/*^block*/ id)arg3 ;
-(void)observer:(id)arg1 requestNoticesBulletinsForSectionID:(id)arg2 ;
-(void)observer:(id)arg1 requestTodayBulletinsForSectionID:(id)arg2 ;
-(void)observer:(id)arg1 requestFutureBulletinsForSectionID:(id)arg2 ;
-(void)getSortDescriptorsForSectionID:(id)arg1 withHandler:(/*^block*/ id)arg2 ;
-(void)observer:(id)arg1 getActiveAlertBehaviorOverridesWithHandler:(/*^block*/ id)arg2 ;
-(void)settingsGateway:(id)arg1 getPrivilegedSenderTypesWithHandler:(/*^block*/ id)arg2 ;
-(void)settingsGateway:(id)arg1 getPrivilegedSenderAddressBookGroupRecordIDAndNameWithHandler:(/*^block*/ id)arg2 ;
-(void)observer:(id)arg1 handleResponse:(id)arg2 ;
-(void)observer:(id)arg1 clearSection:(id)arg2 ;
-(void)observer:(id)arg1 clearBulletinIDs:(id)arg2 inSection:(id)arg3 ;
-(void)observer:(id)arg1 removeBulletins:(id)arg2 inSection:(id)arg3 fromFeeds:(unsigned long long)arg4 ;
-(void)getSectionParametersForSectionID:(id)arg1 withHandler:(/*^block*/ id)arg2 ;
-(void)getAttachmentPNGDataForBulletinID:(id)arg1 sizeConstraints:(id)arg2 withHandler:(/*^block*/ id)arg3 ;
-(void)getAttachmentAspectRatioForBulletinID:(id)arg1 withHandler:(/*^block*/ id)arg2 ;
-(void)observer:(id)arg1 finishedWithBulletinID:(id)arg2 transactionID:(unsigned long long)arg3 ;
-(void)_addObserverWithConnection:(id)arg1 ;
-(void)_addSettingsGatewayWithConnection:(id)arg1 ;
-(void)_handleUtilitiesConnection:(id)arg1 ;
-(void)_handleSystemStateConnection:(id)arg1 ;
-(void)_handleServerConduitConnection:(id)arg1 ;
-(void)demo_lockscreen:(unsigned long long)arg1 ;
-(void)_clearExpirationTimer;
-(void)_clearBehaviorOverridesTimer;
-(void)ping:(/*^block*/ id)arg1 ;
-(void)settingsGateway:(id)arg1 getSectionInfoForCategory:(long long)arg2 withHandler:(/*^block*/ id)arg3 ;
-(void)settingsGateway:(id)arg1 getBehaviorOverridesWithHandler:(/*^block*/ id)arg2 ;
-(void)settingsGateway:(id)arg1 getBehaviorOverridesEnabledWithHandler:(/*^block*/ id)arg2 ;
-(void)settingsGateway:(id)arg1 getBehaviorOverridesEffectiveWhileUnlockedWithHandler:(/*^block*/ id)arg2 ;
-(void)settingsGateway:(id)arg1 setSectionOrderRule:(long long)arg2 ;
-(void)settingsGateway:(id)arg1 setOrderedSectionIDs:(id)arg2 forCategory:(long long)arg3 ;
-(void)settingsGateway:(id)arg1 setSectionInfo:(id)arg2 forSectionID:(id)arg3 inCategory:(long long)arg4 ;
-(void)settingsGateway:(id)arg1 setBehaviorOverrides:(id)arg2 ;
-(void)settingsGateway:(id)arg1 setBehaviorOverrideStatus:(long long)arg2 ;
-(void)settingsGateway:(id)arg1 setPrivilegedSenderTypes:(unsigned long long)arg2 ;
-(void)settingsGateway:(id)arg1 setPrivilegedSenderAddressBookGroupRecordID:(int)arg2 name:(id)arg3 ;
-(void)settingsGateway:(id)arg1 setBehaviorOverridesEffectiveWhileUnlocked:(bool)arg2 ;
-(void)settingsGateway:(id)arg1 setBehaviorOverridesChangeUpdatesEnabled:(bool)arg2 ;
-(void)settingsGateway:(id)arg1 setBehaviorOverrideStatusChangeUpdatesEnabled:(bool)arg2 ;
-(void)settingsGateway:(id)arg1 setActiveBehaviorOverrideTypesChangeUpdatesEnabled:(bool)arg2 ;
-(void)getShouldPresentNotificationOfType:(int)arg1 fromSenderWithDestinationID:(id)arg2 handler:(/*^block*/ id)arg3 ;
-(void)setNotificationPresentationFilteringStateChangeUpdatesEnabled:(bool)arg1 forClient:(id)arg2 ;
-(void)setActiveBehaviorOverrideChangeUpdatesEnabled:(bool)arg1 forClient:(id)arg2 ;
-(void)sendMessageToDataProviderSectionID:(id)arg1 name:(id)arg2 userInfo:(id)arg3 ;
-(void)weeAppWithBundleID:(id)arg1 setHiddenFromUser:(bool)arg2 ;
-(void)weeAppWithBundleID:(id)arg1 getHiddenFromUser:(/*^block*/ id)arg2 ;
-(unsigned long long)_feedsForBulletin:(id)arg1 destinations:(unsigned long long)arg2 alwaysToLockScreen:(bool)arg3 ;
-(void)_addBulletin:(id)arg1 ;
-(void)_sendAddBulletin:(id)arg1 toFeeds:(unsigned long long)arg2 ;
-(void)_modifyBulletin:(id)arg1 ;
-(void)_sendModifyBulletin:(id)arg1 toFeeds:(unsigned long long)arg2 ;
-(void)_scheduleExpirationForBulletin:(id)arg1 ;
-(void)_removeBulletin:(id)arg1 shouldSync:(bool)arg2 ;
-(id)_mapForFeed:(unsigned long long)arg1 ;
-(void)_sendRemoveBulletin:(id)arg1 toFeeds:(unsigned long long)arg2 shouldSync:(bool)arg3 ;
-(void)removeBulletinID:(id)arg1 fromSection:(id)arg2 inFeed:(unsigned long long)arg3 ;
-(id)bulletinIDsForSectionID:(id)arg1 inFeed:(unsigned long long)arg2 ;
-(id)_sectionInfoForSectionID:(id)arg1 effective:(bool)arg2 ;
-(id)dataProviderForSectionID:(id)arg1 ;
-(void)_removeObserver:(id)arg1 ;
-(unsigned long long)_activeBehaviorOverrideTypesConsideringSystemState:(bool)arg1 ;
-(unsigned long long)_behaviorOverrideState;
-(void)_clearBulletinIDIfPossible:(id)arg1 rescheduleExpirationTimer:(bool)arg2 ;
-(void)_removeSettingsGateway:(id)arg1 ;
-(id)_effectiveSectionInfoForSectionInfo:(id)arg1 ;
-(id)_sortedActiveSectionsForCategory:(long long)arg1 ;
-(id)_observersForCategory:(long long)arg1 ;
-(id)_observersForFeeds:(unsigned long long)arg1 ;
-(unsigned long long)_incrementedTransactionIDForObserver:(id)arg1 bulletinID:(id)arg2 ;
-(id)_currentTransactionForObserver:(id)arg1 bulletinID:(id)arg2 ;
-(void)_sendRemoveBulletins:(id)arg1 toFeeds:(unsigned long long)arg2 shouldSync:(bool)arg3 ;
-(void)_removeBulletin:(id)arg1 rescheduleTimerIfAffected:(bool)arg2 shouldSync:(bool)arg3 ;
-(id)_bulletinsForIDs:(id)arg1 ;
-(void)_setClearedInfo:(id)arg1 forSectionID:(id)arg2 ;
-(void)_updateAllBulletinsForDataProvider:(id)arg1 ;
-(void)_clearBulletinIDs:(id)arg1 AndAllOtherBulletins:(bool)arg2 forSectionID:(id)arg3 shouldSync:(bool)arg4 ;
-(id)_allBulletinsForSectionID:(id)arg1 ;
-(void)_writeSectionInfo;
-(void)_writeClearedSections;
-(void)_sendUpdateSectionOrderForCategory:(long long)arg1 ;
-(id)_applicableSectionInfosForBulletin:(id)arg1 inSection:(id)arg2 ;
-(id)allBulletinIDsForSectionID:(id)arg1 ;
-(id)_activeSectionIDsForCategory:(long long)arg1 ;
-(id)_sortedSectionIDsForCategory:(long long)arg1 ;
-(void)_sortSectionIDs:(id)arg1 usingGuideArray:(id)arg2 ;
-(id)noticesBulletinIDsForSectionID:(id)arg1 ;
-(void)_expireBulletinsAndRescheduleTimerIfNecessary;
-(bool)_didNotificationCenterSettingsChangeWithSectionInfo:(id)arg1 replacingSectionInfo:(id)arg2 ;
-(void)_sendUpdateSectionInfo:(id)arg1 inCategory:(long long)arg2 ;
-(void)_updateAllBulletinsForDataProviderIfSectionIsEnabled:(id)arg1 ;
-(void)_setSectionInfo:(id)arg1 forSectionID:(id)arg2 inCategory:(long long)arg3 ;
-(void)_updateBehaviorOverrides;
-(void)_expireBulletins;
-(id)_nextExpireBulletinsDate;
-(void)_scheduleTimerForDate:(id)arg1 ;
-(id)_bulletinIDsInSortedArray:(id)arg1 withDateForKey:(id)arg2 beforeCutoff:(id)arg3 ;
-(unsigned long long)_indexForNewDate:(id)arg1 inBulletinIDArray:(id)arg2 sortedAscendingByDateForKey:(id)arg3 ;
-(id)sortDescriptorsForSectionID:(id)arg1 ;
-(void)_clearSection:(id)arg1 ;
-(void)_clearBulletinIDs:(id)arg1 forSectionID:(id)arg2 shouldSync:(bool)arg3 ;
-(id)_sectionInfoArrayForCategory:(long long)arg1 effective:(bool)arg2 ;
-(id)_updatesForObserver:(id)arg1 bulletinIDs:(id)arg2 ;
-(id)todayBulletinIDsForSectionID:(id)arg1 ;
-(id)futureBulletinIDsForSectionID:(id)arg1 ;
-(void)_writeSectionOrder;
-(void)_sendUpdateSectionOrderRule;
-(void)_behaviorOverrideTypesChanged;
-(unsigned long long)_adjustedBehaviorOverrideTypes:(unsigned long long)arg1 basedOnSystemState:(unsigned long long)arg2 ;
-(void)_checkPrivilegedSenderFilteringState;
-(void)_sendUpdateBehaviorOverrideTypes;
-(void)_behaviorOverrideStatusChanged;
-(void)_setBehaviorOverridesTimer;
-(void)_writeBehaviorOverrides;
-(void)_setSectionInfo:(id)arg1 forSectionID:(id)arg2 ;
-(void)_updateBulletinsInFeed:(unsigned long long)arg1 ifSectionIsEnabled:(id)arg2 ;
-(void)_publishBulletinRequest:(id)arg1 forSectionID:(id)arg2 forDestinations:(unsigned long long)arg3 alwaysToLockScreen:(bool)arg4 ;
-(void)_reloadSectionParametersForSectionID:(id)arg1 ;
-(void)_reloadReloadSectionInfoForSectionID:(id)arg1 ;
-(void)_updateClearedInfoForSectionID:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(void)_updateSectionInfoForSectionID:(id)arg1 handler:(/*^block*/ id)arg2 ;
-(id)_clearedInfoForSectionID:(id)arg1 ;
-(void)_saveUpdatedClearedInfo:(id)arg1 forSectionID:(id)arg2 ;
-(void)_saveUpdatedSectionInfo:(id)arg1 forSectionID:(id)arg2 ;
-(id)_sectionIDsToMigrate;
-(void)_migrateSectionOrder;
-(id)_defaultSectionOrders;
-(id)_defaultSectionOrderForCategory:(long long)arg1 topLevelCollection:(id)arg2 ;
-(void)_ensureDataDirectoryExists;
-(void)_loadBehaviorOverrides;
-(void)_loadSavedSectionInfo;
-(void)_loadClearedSections;
-(void)_loadSavedSectionOrderAndRule;
-(void)_migrateLoadedData;
-(void)_publishBulletinsForAllDataProviders;
-(void)_sortSectionIDs:(id)arg1 usingOrder:(id)arg2 ;
-(void)_resumeAllSuspendedConnections;
-(void)_updateSectionParametersForDataProvider:(id)arg1 ;
-(void)_updateBulletinsInFeed:(unsigned long long)arg1 forDataProviderIfSectionIsEnabled:(id)arg2 ;
-(id)_enabledSectionIDsForDataProvider:(id)arg1 ;
-(void)_updateBulletinsInFeed:(unsigned long long)arg1 forDataProvider:(id)arg2 enabledSectionIDs:(id)arg3 ;
-(unsigned long long)userBulletinCapForSectionID:(id)arg1 ;
-(bool)_verifyBulletinRequest:(id)arg1 forDataProvider:(id)arg2 ;
-(void)_addActiveSectionID:(id)arg1 toCategory:(long long)arg2 ;
-(void)_addActiveSectionID:(id)arg1 ;
-(void)_removeSection:(id)arg1 ;
-(void)_addSectionID:(id)arg1 toSortedSectionIDsForCategory:(long long)arg2 ;
-(id)_bulletinsForSectionID:(id)arg1 inFeeds:(unsigned long long)arg2 ;
-(void)_removeActiveSectionID:(id)arg1 fromCategory:(long long)arg2 ;
-(void)_addDataProvider:(id)arg1 forFactory:(id)arg2 ;
-(void)_removeDataProvider:(id)arg1 forFactory:(id)arg2 ;
-(id)_clearedSectionsPath;
-(id)_sectionOrderPath;
-(id)_sectionInfoPath;
-(id)_behaviorOverridesPath;
-(unsigned long long)_feedsForBulletin:(id)arg1 destinations:(unsigned long long)arg2 ;
-(void)_loadDataProvidersAndSettings;
-(id)dpManager:(id)arg1 sectionInfoForSectionID:(id)arg2 ;
-(void)dpManager:(id)arg1 addDataProvider:(id)arg2 withSectionInfo:(id)arg3 ;
-(void)dpManager:(id)arg1 addDataProviderFactory:(id)arg2 withSectionInfo:(id)arg3 ;
-(void)dpManager:(id)arg1 removeDataProviderSectionID:(id)arg2 ;
-(void)syncService:(id)arg1 receivedDismissalDictionaries:(id)arg2 dismissalIDs:(id)arg3 inSection:(id)arg4 forFeeds:(unsigned long long)arg5 ;
-(bool)syncService:(id)arg1 shouldAbortDelayedDismissalForBulletin:(id)arg2 ;
-(void)publishBulletin:(id)arg1 destinations:(unsigned long long)arg2 alwaysToLockScreen:(bool)arg3 ;
-(void)withdrawBulletinID:(id)arg1 ;
-(void)removeBulletinID:(id)arg1 fromNoticesSection:(id)arg2 ;
-(void)removeBulletinID:(id)arg1 fromTodaySection:(id)arg2 ;
-(void)removeBulletinID:(id)arg1 fromFutureSection:(id)arg2 ;
-(id)carBulletinIDsForSectionID:(id)arg1 ;
-(id)activeSectionIDsForDefaultCategory;
-(void)_handleSystemSleep;
-(void)_handleSystemWake;
-(void)_handleSignificantTimeChange;
-(void)_expireBulletinsDueToSystemEvent:(unsigned long long)arg1 ;
-(void)_noteSystemStateChanged;
-(void)_publishBulletinRequest:(id)arg1 forSectionID:(id)arg2 forDestinations:(unsigned long long)arg3 ;
-(unsigned long long)_filtersForSectionID:(id)arg1 ;
-(void)_removeActiveSectionID:(id)arg1 ;
-(id)_dataDirectoryPath;
@end

