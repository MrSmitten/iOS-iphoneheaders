/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:08:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/Support/storebookkeeperd
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <storebookkeeperd/SBKPlaybackPositionStorageObserver.h>
#import <storebookkeeperd/SBDDomainService.h>
#import <StoreBookkeeperClient/SBCPlaybackPositionServiceProtocol.h>

@protocol OS_dispatch_queue, SBCPlaybackPositionServiceClientProtocol;
@class NSXPCConnection, NSObject, NSDictionary, SBDPlaybackPositionStorageController;

@interface SBDPlaybackPositionService : NSObject <SBKPlaybackPositionStorageObserver, SBDDomainService, SBCPlaybackPositionServiceProtocol> {

	BOOL _isActive;
	BOOL _hasChangesToPush;
	NSXPCConnection* _XPCConnection;
	NSObject<OS_dispatch_queue>* _queue;
	<SBCPlaybackPositionServiceClientProtocol>* _clientProxy;
	NSDictionary* _clientConnectionConfiguration;
	SBDPlaybackPositionStorageController* _databaseStorageController;
	double _preferredSynchronizeInterval;

}

@property (readonly) NSObject<OS_dispatch_queue> * queue;                                           //@synthesize queue=_queue - In the implementation block
@property (readonly) <SBCPlaybackPositionServiceClientProtocol> * clientProxy;                      //@synthesize clientProxy=_clientProxy - In the implementation block
@property (readonly) NSDictionary * clientConnectionConfiguration;                                  //@synthesize clientConnectionConfiguration=_clientConnectionConfiguration - In the implementation block
@property (readonly) SBDPlaybackPositionStorageController * databaseStorageController;              //@synthesize databaseStorageController=_databaseStorageController - In the implementation block
@property (readonly) double preferredSynchronizeInterval;                                           //@synthesize preferredSynchronizeInterval=_preferredSynchronizeInterval - In the implementation block
@property (readonly) BOOL hasChangesToPush;                                                         //@synthesize hasChangesToPush=_hasChangesToPush - In the implementation block
@property (readonly) BOOL isActive;                                                                 //@synthesize isActive=_isActive - In the implementation block
@property (readonly) NSXPCConnection * XPCConnection;                                               //@synthesize XPCConnection=_XPCConnection - In the implementation block
-(id)XPCConnection;
-(void)bookkeeperStorageControllerDidSync:(id)arg1 ;
-(void)_onQueueSynchronizeWithInterval:(double)arg1 isCheckpoint:(BOOL)arg2 ;
-(void)_onQueue_clearHasChanges;
-(id)clientProxy;
-(id)clientConnectionConfiguration;
-(id)databaseStorageController;
-(double)preferredSynchronizeInterval;
-(BOOL)hasChangesToPush;
-(oneway void)noteChangedPlaybackPositionMetadataForTrackPersistentID:(long long)arg1 isCheckpoint:(BOOL)arg2 ;
-(oneway void)beginUsingPlaybackPositions;
-(oneway void)endUsingPlaybackPositions;
-(oneway void)synchronizeImmediately;
-(void)dealloc;
-(BOOL)isActive;
-(id)queue;
-(oneway void)updateUbiquitousDatabaseByRemovingUbiquitousMetadataFromTrackWithPersistentID:(long long)arg1 ;
-(oneway void)updateMusicLibraryByApplyingUbiquitousBookmarkMetadataToTrackWithPersistentID:(long long)arg1 ;
-(oneway void)noteChangedNowPlayingTrackPersistentID:(long long)arg1 ;
-(oneway void)synchronizeLocalChangesSoon;
-(oneway void)setClientConfiguration:(id)arg1 ;
-(id)initWithXPCConnection:(id)arg1 ;
-(void).cxx_destruct;
@end
