/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:27 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapsDataClassMigrator/MapsSyncedClient.h>

@protocol OS_dispatch_queue, HistoryDelegate;
@class NSString, NSArray, MapsSyncManager, NSObject, NSMutableArray;

@interface History : NSObject <MapsSyncedClient> {

	MapsSyncManager* _syncManager;
	NSObject*<OS_dispatch_queue> _saveQ;
	id<HistoryDelegate> _delegate;
	NSMutableArray* _history;
	NSMutableArray* _syncedHistory;
	NSMutableArray* _failedSearches;
	NSMutableArray* _failedDirectionsRequests;
	BOOL _shouldSendHistoryDidChangeNotifications;

}

@property (nonatomic,readonly) NSArray * orderedHistory; 
@property (nonatomic,readonly) unsigned long long orderedHistoryCount; 
@property (nonatomic,readonly) NSArray * allHistory; 
@property (assign,nonatomic,__weak) id<HistoryDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldSendHistoryDidChangeNotifications;              //@synthesize shouldSendHistoryDidChangeNotifications=_shouldSendHistoryDidChangeNotifications - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * syncIdentifier; 
@property (nonatomic,readonly) NSArray * syncedItems; 
@property (nonatomic,readonly) BOOL syncSupportsKVO; 
@property (nonatomic,readonly) BOOL syncInvertedOrdering; 
@property (nonatomic,readonly) BOOL syncShouldUseItemPositions; 
@property (nonatomic,readonly) BOOL syncShouldUseCustomStore; 
+(id)sharedHistoryCreatingIfMissing:(BOOL)arg1 ;
+(void)beginPrecachingHistoryIfNeeded;
+(id)beginHoldingUIInterferingTasks;
+(id)sharedHistory;
-(void)updateAddressForSearchResult:(id)arg1 ;
-(NSArray *)allHistory;
-(NSArray *)syncedItems;
-(BOOL)syncSupportsKVO;
-(NSString *)syncIdentifier;
-(void)_startSyncIfPossible;
-(void)_startSyncIfNotYetStarted;
-(void)_dedupeAndSortHistory;
-(void)holdingStateDidChange;
-(void)_saveHistory;
-(BOOL)syncInvertedOrdering;
-(void)_addHistoryItem:(id)arg1 isDirectionsFailure:(BOOL)arg2 isSearchFailure:(BOOL)arg3 ;
-(BOOL)_isValidHistoryItem:(id)arg1 ;
-(void)_saveFailedSearches;
-(BOOL)_containsFailedDirectionsHistoryItem:(id)arg1 ;
-(void)_saveFailedDirectionsRequests;
-(void)_removeInvalidItems;
-(void)setShouldSendHistoryDidChangeNotifications:(BOOL)arg1 ;
-(void)_updateHistory;
-(void)_saveFailuresWithTaskName:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)shouldSendHistoryDidChangeNotifications;
-(void)_madeChanges;
-(BOOL)syncShouldUseCustomStore;
-(void)insertSyncedItems:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeSyncedItemsAtIndexes:(id)arg1 ;
-(void)updateSyncedItemAtIndexes:(id)arg1 ;
-(BOOL)syncShouldUseItemPositions;
-(id)newSyncedItemForSyncData:(id)arg1 ;
-(BOOL)shouldAddSyncedItem:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)syncManagerDidUpdateSyncedItems:(id)arg1 ;
-(BOOL)_holdingUIInterferingTasksIsUseful;
-(unsigned long long)orderedHistoryCount;
-(void)addDirectionsHistoryItem:(id)arg1 isFailure:(BOOL)arg2 ;
-(void)addSearchRequestHistoryItem:(id)arg1 isFailure:(BOOL)arg2 ;
-(NSArray *)orderedHistory;
-(void)updateHistoryItem:(id)arg1 withTransportType:(int)arg2 ;
-(void)addHistoryItem:(id)arg1 ;
-(void)removeAllItems;
-(void)setDelegate:(id<HistoryDelegate>)arg1 ;
-(id)init;
-(id<HistoryDelegate>)delegate;
@end

