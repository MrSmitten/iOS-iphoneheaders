/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:52:53 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/HealthKit.framework/healthd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <healthd/HDQueryServerDelegate.h>
#import <healthd/HDDiagnosticObject.h>
#import <healthd/HDActiveWorkoutServerDelegate.h>
#import <healthd/HDProcessStateObserver.h>
#import <healthd/HDUnitPreferencesManagerObserver.h>
#import <healthd/HDServer.h>

@protocol HDServer <HDServerInterface>
@required
-(void)invalidate;

@end


@protocol OS_dispatch_queue;
@class HDIdentifierTable, NSMutableDictionary, NSMutableSet, HDDaemon, HDClient, HDDataCollectionManager, HDDatabase, HDHealthDeviceManager, HDDataManager, HDAuthorizationServer, NSObject, NSString;

@interface HDServer : NSObject <HDQueryServerDelegate, HDDiagnosticObject, HDActiveWorkoutServerDelegate, HDProcessStateObserver, HDUnitPreferencesManagerObserver, HDServer> {

	HDIdentifierTable* _healthServiceDiscoveryServerIDs;
	NSMutableDictionary* _healthServiceDiscoveryClientIDs;
	HDIdentifierTable* _healthDeviceSessionServerIDs;
	NSMutableDictionary* _healthServiceSessionClientIDs;
	NSMutableSet* _healthServiceClosedSessionServerIDs;
	NSMutableSet* _healthServiceClosedSessionClientIDs;
	NSMutableDictionary* _queryServersByUUID;
	NSMutableDictionary* _workoutServersByUUID;
	NSMutableSet* _processStateObservingQueryServerUUIDs;
	char _processStateSuspended;
	HDDaemon* _daemon;
	HDClient* _client;
	HDDataCollectionManager* _dataCollectMgr;
	HDDatabase* _database;
	HDHealthDeviceManager* _healthDeviceManager;
	HDDataManager* _dataMgr;
	HDAuthorizationServer* _authorizationServer;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _authQueue;
	NSString* _serverID;
	NSString* _clientIdentifier;

}

@property (assign,nonatomic,__weak) HDDaemon * daemon;                                 //@synthesize daemon=_daemon - In the implementation block
@property (nonatomic,retain) HDClient * client;                                        //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) HDDataCollectionManager * dataCollectMgr;                 //@synthesize dataCollectMgr=_dataCollectMgr - In the implementation block
@property (nonatomic,retain) HDDatabase * database;                                    //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) HDHealthDeviceManager * healthDeviceManager;              //@synthesize healthDeviceManager=_healthDeviceManager - In the implementation block
@property (nonatomic,retain) HDDataManager * dataMgr;                                  //@synthesize dataMgr=_dataMgr - In the implementation block
@property (nonatomic,retain) HDAuthorizationServer * authorizationServer;              //@synthesize authorizationServer=_authorizationServer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> authQueue;                   //@synthesize authQueue=_authQueue - In the implementation block
@property (nonatomic,retain) NSString * serverID;                                      //@synthesize serverID=_serverID - In the implementation block
@property (nonatomic,retain) NSString * clientIdentifier;                              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_isDeviceSupportedWithError:(id*)arg1 ;
+(char)_isClientEntitled:(id)arg1 error:(id*)arg2 ;
+(char)_isHealthAllowedWithError:(id*)arg1 ;
+(id)serverWithClient:(id)arg1 healthDaemon:(id)arg2 ;
-(HDDataManager *)dataMgr;
-(id)initWithClient:(id)arg1 healthDaemon:(id)arg2 ;
-(HDDataCollectionManager *)dataCollectMgr;
-(void)_queue_deactivateWorkoutServerWithUUID:(id)arg1 ;
-(void)_requireEntitlement:(id)arg1 usingBlock:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(/*^block*/id)_authorizationPromptHandler;
-(id)_clientRemoteObjectProxy;
-(void)_saveDataObjects:(id)arg1 sourceEntity:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)_performIfAuthorizedToSaveObjects:(id)arg1 usingBlock:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(char)_insertedObjects:(id)arg1 containsQuantitySampleWithType:(id)arg2 ;
-(void)_performIfAuthorizedToDeleteObjects:(id)arg1 usingBlock:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)_startQueryServer:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)_queue_registerForProcessStateUpdatesWithUUID:(id)arg1 ;
-(void)_queue_unregisterFromProcessStateUpdatesWithUUID:(id)arg1 ;
-(void)_requirePrivateHealthKitEntitlementUsingBlock:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(char)_hasMedicalIDDataAccess;
-(void)_performIfAuthorizedForMedicalID:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)_performIfAuthorizedToReadTypes:(id)arg1 usingBlock:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(unsigned)_healthDeviceClientDiscoveryIdentifier:(unsigned)arg1 ;
-(void)_closeDiscoveryBetweenServer:(unsigned)arg1 andClient:(unsigned)arg2 ;
-(unsigned)_discoveryServerIdentifierForClientIdentifier:(unsigned)arg1 ;
-(char)_isServerSessionValid:(unsigned)arg1 ;
-(unsigned)_healthDeviceClientSessionIdentifier:(unsigned)arg1 ;
-(void)_closeSessionBetweenServer:(unsigned)arg1 andClient:(unsigned)arg2 ;
-(char)_isClientSessionValid:(unsigned)arg1 ;
-(unsigned)_sessionServerIdentifierForClientIdentifier:(unsigned)arg1 ;
-(unsigned)_sessionClientIdentifierForServerIdentifier:(unsigned)arg1 ;
-(char)_clientHasUtilityEntitlementWithError:(id*)arg1 ;
-(char)_clientHasPrivateHealthKitEntitlementWithError:(id*)arg1 ;
-(void)workoutServerDidDeactivate:(id)arg1 ;
-(void)unitPreferencesManagerDidUpdateUnitPreferences:(id)arg1 ;
-(void)pauseAllActiveWorkoutsWithCompletion:(/*^block*/id)arg1 ;
-(void)nukeActiveWorkoutServers;
-(void)setDataCollectMgr:(HDDataCollectionManager *)arg1 ;
-(void)setDataMgr:(HDDataManager *)arg1 ;
-(HDAuthorizationServer *)authorizationServer;
-(void)setAuthorizationServer:(HDAuthorizationServer *)arg1 ;
-(NSObject*<OS_dispatch_queue>)authQueue;
-(void)setAuthQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)clientIdentifier;
-(HDDatabase *)database;
-(void)setDatabase:(HDDatabase *)arg1 ;
-(void)attachWorkoutServerWithClient:(id)arg1 workoutConfiguration:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setIdentifier:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)hasSourceWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addSourceWithBundleIdentifier:(id)arg1 name:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)allSourcesWithCompletion:(/*^block*/id)arg1 ;
-(void)orderedSourcesForObjectType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setOrderedSources:(id)arg1 forObjectType:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)currentlyPairedWatchIdentifierWithCompletion:(/*^block*/id)arg1 ;
-(void)hkTypesForSource:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteAllSamplesWithTypes:(id)arg1 sourceBundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteSourceWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)authorizationStatusForType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestAuthorizationToShareTypes:(id)arg1 readTypes:(id)arg2 shouldPrompt:(char)arg3 completion:(/*^block*/id)arg4 ;
-(void)allAuthorizationRecordsForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)allAuthorizationRecordsForType:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAuthorizationStatuses:(id)arg1 forBundleIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setRequestedAuthorizationForBundleIdentifier:(id)arg1 shareTypes:(id)arg2 readTypes:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)resetAuthorizationStatusForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)endAuthorizationDelegateTransactionWithError:(id)arg1 ;
-(void)saveDataObjects:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)deleteDataObjects:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)fetchCharacteristicWithDataType:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setCharacteristic:(id)arg1 forDataType:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)associateSamplesWithUUIDs:(id)arg1 withWorkout:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addSamples:(id)arg1 toWorkout:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setBackgroundDeliveryFrequency:(int)arg1 forDataType:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)closeTransactionWithDataType:(id)arg1 anchor:(id)arg2 ackTime:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)fetchUnitPreferencesForTypes:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setPreferredUnit:(id)arg1 forType:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setDefaultValue:(id)arg1 forKey:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)getDefaultForKey:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)removeDefaultForKey:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)beginBluetoothStatusUpdates:(/*^block*/id)arg1 ;
-(void)endBluetoothStatusUpdates;
-(void)startHealthServiceDiscovery:(int)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)endHealthServiceDiscovery:(unsigned)arg1 ;
-(void)startHealthServiceSession:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)endHealthServiceSession:(unsigned)arg1 ;
-(void)getHealthServicePairingsWithHandler:(/*^block*/id)arg1 ;
-(void)addPairingForHealthService:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)removePairingForHealthService:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)addPeripheral:(id)arg1 name:(id)arg2 forServices:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)removePeripheral:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)getEnabledStatusForPeripheral:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setEnabledStatus:(char)arg1 forPeripheral:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)getHealthServiceProperty:(id)arg1 forSession:(unsigned)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)performHealthServiceOperation:(id)arg1 onSession:(unsigned)arg2 withParameters:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)getDatabaseSizeInBytesWithCompletion:(/*^block*/id)arg1 ;
-(void)performMigrationWithCompletion:(/*^block*/id)arg1 ;
-(void)startFakingDataWithActivity:(int)arg1 speed:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)stopFakingDataWithCompletion:(/*^block*/id)arg1 ;
-(void)startReplayingDataFromFile:(id)arg1 repeat:(char)arg2 completion:(/*^block*/id)arg3 ;
-(void)stopReplayingDataWithCompletion:(/*^block*/id)arg1 ;
-(void)startRecordingDataToFile:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)stopRecordingDataWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchDiagnosticsWithKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)createBluetoothSourceWithBundleIdentifier:(id)arg1 name:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)saveDataObjects:(id)arg1 usingSource:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)medicalIDDataCreateIfNecessary:(char)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateMedicalIDData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteMedicalIDDataWithCompletion:(/*^block*/id)arg1 ;
-(void)suppressActivityAlertsForBundleIdentifier:(id)arg1 reason:(int)arg2 completion:(/*^block*/id)arg3 ;
-(void)invalidateActivityAlertSuppressionForBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)registerKeepAliveWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)unregisterKeepAliveWithIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)startQueryWithUUID:(id)arg1 serverDataObject:(id)arg2 queryClass:(Class)arg3 client:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)dealloc;
-(void)invalidate;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(HDDaemon *)daemon;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDaemon:(HDDaemon *)arg1 ;
-(void)setServerID:(NSString *)arg1 ;
-(NSString *)serverID;
-(id)diagnosticDescription;
-(void)processSuspended:(id)arg1 ;
-(void)processResumed:(id)arg1 ;
-(char)containsActiveWorkouts;
-(void)pauseActiveWorkoutsWithCompletion:(/*^block*/id)arg1 ;
-(HDHealthDeviceManager *)healthDeviceManager;
-(void)setHealthDeviceManager:(HDHealthDeviceManager *)arg1 ;
-(void)queryServerDidStartDataCollection:(id)arg1 ;
-(void)queryServerDidDeactivate:(id)arg1 ;
-(void)queryServerDidStopDataCollection:(id)arg1 ;
-(id)queryServer:(id)arg1 filterSamplesForReadAuthorization:(id)arg2 ;
-(char)queryServer:(id)arg1 isAuthorizedToReadType:(id)arg2 withRestrictedSourceIdentifier:(id*)arg3 ;
-(char)queryServer:(id)arg1 isAuthorizationStatusDeterminedForTypes:(id)arg2 error:(id*)arg3 ;
-(void)setClient:(HDClient *)arg1 ;
-(HDClient *)client;
@end

