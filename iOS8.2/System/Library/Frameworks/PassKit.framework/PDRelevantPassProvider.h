/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:58 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <passd/CLLocationManagerDelegate.h>
#import <passd/PDDistributedNotificationConsumer.h>

@protocol PDRelevantPassProviderDelegate;
@class PDDatabaseManager, CLLocationManager, CLLocation, NSDate, NSTimer, NSArray, NSMutableSet, SBSCardItemsController, PDDistributedNotificationManager, NSString;

@interface PDRelevantPassProvider : NSObject <CLLocationManagerDelegate, PDDistributedNotificationConsumer> {

	PDDatabaseManager* _databaseManager;
	id<PDRelevantPassProviderDelegate> _delegate;
	CLLocationManager* _proximityManager;
	CLLocationManager* _backingManager;
	CLLocation* _lastLocation;
	CLLocation* _roughLocation;
	int _locationSearchState;
	int _locationSearchMode;
	NSDate* _locationSearchStartDate;
	NSTimer* _locationSearchTimer;
	NSArray* _lastBeacons;
	int _beaconSearchState;
	NSTimer* _beaconSearchTimer;
	NSMutableSet* _dateRelevantCards;
	NSMutableSet* _proxPendingCards;
	SBSCardItemsController* _cardItemsController;
	NSArray* _currentRelevantPassInfo;
	PDDistributedNotificationManager* _notificationManager;

}

@property (assign,nonatomic) id<PDRelevantPassProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * currentRelevantPassInfo;                      //@synthesize currentRelevantPassInfo=_currentRelevantPassInfo - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDatabaseManager:(id)arg1 notificationManager:(id)arg2 delegate:(id)arg3 ;
-(void)startObservingEvents;
-(void)handleNotificationWithName:(id)arg1 ;
-(NSArray *)currentRelevantPassInfo;
-(void)_clearLocationSearchTimer;
-(void)_clearBeaconSearchTimer;
-(void)_startCardSearchUpdatingWithCachedProximity:(char)arg1 refreshingProximity:(char)arg2 searchMode:(int)arg3 ;
-(void)_startCardSearchUpdatingWithCachedProximity:(char)arg1 refreshingProximity:(char)arg2 ;
-(void)_clearPersistedProximityInfo;
-(void)_addDateRelevantAndLocationPendingCardsForStyle:(int)arg1 locationAvailable:(char)arg2 ;
-(void)_loadPersistedLocationInfoIfNecessary;
-(void)_updateAndSendRelevantCards;
-(void)_startLocationSearchIfNecessaryWithSearchMode:(int)arg1 ;
-(void)_startBeaconSearchIfNecessary;
-(char)_proxPendingPassExistsWithLocation;
-(char)_isDoingLocationSearch;
-(char)_handleNewLocation:(id)arg1 forceAcceptance:(char)arg2 from:(id)arg3 ;
-(void)_beginLocationSearchTimer;
-(char)_locationIsNewEnoughAndHasGoodAccuracy:(id)arg1 ;
-(void)_stopLocationSearch;
-(void)_locationSearchTimerFired:(id)arg1 ;
-(char)_isDoingBeaconSearch;
-(char)_proxPendingPassExistsWithBeacon;
-(void)_beginBeaconSearchTimer;
-(void)_stopBeaconSearch;
-(void)_beaconSearchTimerFired:(id)arg1 ;
-(void)_handleNewBeacons:(id)arg1 ;
-(id)_groupForPass:(id)arg1 inGroups:(id)arg2 ;
-(void)_unscheduleEagerRecalculation;
-(void)_insertPass:(id)arg1 intoGroups:(id)arg2 forDate:(id)arg3 ;
-(char)_findMatchingLocation:(id*)arg1 beacon:(id*)arg2 forPass:(id)arg3 passStyleRadius:(double)arg4 usingNearbyLocations:(id)arg5 ;
-(void)_insertPass:(id)arg1 intoGroups:(id)arg2 forLocation:(id)arg3 ;
-(void)_insertPass:(id)arg1 intoGroups:(id)arg2 forBeacon:(id)arg3 ;
-(void)_sendGroups:(id)arg1 ;
-(char)_shouldScheduleEagerRecalculation;
-(void)_scheduleEagerRecalculationWithPasses:(id)arg1 fenceLocation:(char)arg2 minRadius:(double)arg3 beaconUUIDs:(id)arg4 ;
-(void)handleSignificantTimeChangedEvent;
-(void)_handleSignifigantTimeChangedEvent;
-(void)_handleDimmedEvent:(char)arg1 ;
-(void)_relevantCardExpirationTimerFired;
-(void)_tearDownExitFenceTimerFired;
-(void)dealloc;
-(void)setDelegate:(id<PDRelevantPassProviderDelegate>)arg1 ;
-(id<PDRelevantPassProviderDelegate>)delegate;
-(void)recomputeRelevantPassesWithSearchMode:(int)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didRangeBeacons:(id)arg2 inRegion:(id)arg3 ;
-(void)locationManager:(id)arg1 rangingBeaconsDidFailForRegion:(id)arg2 withError:(id)arg3 ;
-(void)locationManager:(id)arg1 didExitRegion:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(id)notificationNames;
@end

