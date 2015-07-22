/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:49 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthDaemon/HDHealthDataCollector.h>

@protocol HDHealthDaemon, OS_dispatch_queue;
@class NSObject, HKObjectType, HDSourceEntity, NSString;

@interface HDDataCollector : NSObject <HDHealthDataCollector> {

	id<HDHealthDaemon> _healthDaemon;
	NSObject*<OS_dispatch_queue> _queue;
	HKObjectType* _observedType;
	HDSourceEntity* _sourceEntity;
	long long _state;
	double _collectionInterval;
	long long _failureRetryCount;
	BOOL _disabled;

}

@property (readonly) HDSourceEntity * sourceEntity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) BOOL disabled; 
+(id)domain;
+(id)observedType;
+(Class)sensorDatumClass;
+(id)secondaryContextClasses;
-(HDSourceEntity *)sourceEntity;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(BOOL)_persistContext:(id)arg1 forKey:(id)arg2 ;
-(id)_retrieveContextForKey:(id)arg1 ;
-(void)_queue_resetFailureRetryCounter;
-(void)_performSync:(/*^block*/id)arg1 ;
-(void)_performAsync:(/*^block*/id)arg1 ;
-(BOOL)_queue_disabled;
-(void)stopPerformingUpdatesWithErrorEncountered:(BOOL)arg1 ;
-(void)_queue_beginStreamingIfNecessary;
-(BOOL)_queue_streaming;
-(void)_queue_transitionToStreaming;
-(void)_queue_beginStreaming;
-(void)_queue_retryFromFailure;
-(void)_queue_updateCollectionInterval:(double)arg1 ;
-(void)_queue_transitionToIdle;
-(BOOL)_queue_shouldRetryFromFailure;
-(void)_queue_incrementFailureRetryCounter;
-(void)collectionStartedForType:(id)arg1 collectionInterval:(double)arg2 ;
-(void)updateCollectionInterval:(double)arg1 forType:(id)arg2 ;
-(void)collectionStoppedForType:(id)arg1 ;
-(void)updateHistoricalData;
-(id)dataCollectorDiagnosticDescription;
-(id)initWithHealthDaemon:(id)arg1 ;
-(BOOL)_persistPrimaryContext:(id)arg1 ;
-(BOOL)_persistSecondaryContext:(id)arg1 ;
-(id)_retrievePrimaryContext;
-(id)_retrieveSecondaryContext;
-(id)_contextFromSensorDatum:(id)arg1 ;
-(id)_contextFromDictionary:(id)arg1 ;
-(id)_sensorDatumFromContext:(id)arg1 ;
-(id)_dictionaryFromContext:(id)arg1 ;
-(void)_queue_receivedData;
-(double)collectionInterval;
-(void)setCollectionInterval:(double)arg1 ;
-(id)_queue_sourceEntity;
-(void)_queue_transitionToFailure;
@end
