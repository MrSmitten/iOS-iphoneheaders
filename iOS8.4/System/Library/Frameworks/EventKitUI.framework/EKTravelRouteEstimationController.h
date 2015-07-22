/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:46 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol EKStyleProvider, EKTravelRouteEstimationControllerDelegate;
@class EKEventStore, EKStructuredLocation, NSMutableArray, NSDate, NSDictionary;

@interface EKTravelRouteEstimationController : NSObject {

	EKEventStore* _eventStore;
	id<EKStyleProvider> _styleProvider;
	EKStructuredLocation* _originStructuredLocation;
	NSMutableArray* _rows;
	BOOL _isEstimating;
	id<EKTravelRouteEstimationControllerDelegate> _delegate;
	NSDate* _arrivalDate;
	EKStructuredLocation* _destinationStructuredLocation;
	EKStructuredLocation* _evaluatedOriginLocation;
	NSDictionary* _travelTimeEstimatedValues;
	NSDictionary* _travelTimeLookupErrors;

}

@property (assign,nonatomic,__weak) id<EKTravelRouteEstimationControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSDate * arrivalDate;                                                                 //@synthesize arrivalDate=_arrivalDate - In the implementation block
@property (nonatomic,retain) EKStructuredLocation * originStructuredLocation; 
@property (retain) EKStructuredLocation * destinationStructuredLocation;                                 //@synthesize destinationStructuredLocation=_destinationStructuredLocation - In the implementation block
@property (assign) BOOL isEstimating;                                                                    //@synthesize isEstimating=_isEstimating - In the implementation block
@property (retain) EKStructuredLocation * evaluatedOriginLocation;                                       //@synthesize evaluatedOriginLocation=_evaluatedOriginLocation - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfOutputRows; 
@property (retain) NSDictionary * travelTimeEstimatedValues;                                             //@synthesize travelTimeEstimatedValues=_travelTimeEstimatedValues - In the implementation block
@property (retain) NSDictionary * travelTimeLookupErrors;                                                //@synthesize travelTimeLookupErrors=_travelTimeLookupErrors - In the implementation block
-(void)setArrivalDate:(NSDate *)arg1 ;
-(EKStructuredLocation *)originStructuredLocation;
-(EKStructuredLocation *)destinationStructuredLocation;
-(void)beginOriginLocationEstimationLookup;
-(void)setDestinationStructuredLocation:(EKStructuredLocation *)arg1 ;
-(void)setOriginStructuredLocation:(EKStructuredLocation *)arg1 ;
-(EKStructuredLocation *)evaluatedOriginLocation;
-(id)initWithDestinationStructuredLocation:(id)arg1 styleProvider:(id)arg2 eventStore:(id)arg3 ;
-(void)beginTravelTimeEstimationLookup;
-(id)estimatedTravelTimeRowErrorAtRowIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfOutputRows;
-(BOOL)estimatedTravelTimeRowHasErrorAtRowIndex:(unsigned long long)arg1 ;
-(double)estimatedTravelTimeValueAtRowIndex:(unsigned long long)arg1 ;
-(long long)estimatedTravelTimeRoutingModeAtRowIndex:(unsigned long long)arg1 ;
-(BOOL)isEstimating;
-(id)estimatedTravelTimeTableViewCellWithRowIndex:(unsigned long long)arg1 ;
-(void)_beginOriginLocationEstimationEventKitLookup;
-(void)_originLocationEstimationCompletedCoreRoutineLookup;
-(void)setEvaluatedOriginLocation:(EKStructuredLocation *)arg1 ;
-(void)_originLocationEstimationCompletedEventKitLookup;
-(void)_beginOriginLocationEstimationCoreRoutineLookup;
-(void)_lookupTimedOut;
-(id)_routingModeTypesAsEnum;
-(void)setTravelTimeEstimatedValues:(NSDictionary *)arg1 ;
-(void)setTravelTimeLookupErrors:(NSDictionary *)arg1 ;
-(NSDictionary *)travelTimeEstimatedValues;
-(NSDictionary *)travelTimeLookupErrors;
-(id)_imageForCellAtIndex:(unsigned long long)arg1 ;
-(void)setIsEstimating:(BOOL)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<EKTravelRouteEstimationControllerDelegate>)arg1 ;
-(id<EKTravelRouteEstimationControllerDelegate>)delegate;
-(NSDate *)arrivalDate;
@end
