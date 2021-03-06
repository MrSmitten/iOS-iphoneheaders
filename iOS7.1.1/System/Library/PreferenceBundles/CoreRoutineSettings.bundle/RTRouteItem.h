/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:25 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/CoreRoutineSettings.bundle/CoreRoutineSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRoutineSettings/CoreRoutineSettings-Structs.h>
#import <CoreRoutineSettings/RTMapAndTableRowItem.h>

@class RTLocationOfInterest, RTPredictedLocationOfInterest, MKPolyline;

@interface RTRouteItem : NSObject <RTMapAndTableRowItem> {

	RTLocationOfInterest* _loi;
	RTPredictedLocationOfInterest* _ploi;
	MKPolyline* _polyline;
	SCD_Struct_RT3 _mapRect;

}

@property (nonatomic,retain) RTLocationOfInterest * loi;                        //@synthesize loi=_loi - In the implementation block
@property (nonatomic,retain) RTPredictedLocationOfInterest * ploi;              //@synthesize ploi=_ploi - In the implementation block
@property (nonatomic,retain) MKPolyline * polyline;                             //@synthesize polyline=_polyline - In the implementation block
@property (assign,nonatomic) SCD_Struct_RT3 mapRect;                            //@synthesize mapRect=_mapRect - In the implementation block
-(id)initWithLOI:(id)arg1 andPredictedLOI:(id)arg2 ;
-(void)setPloi:(id)arg1 ;
-(void)populateSubtitleStyleCell:(id)arg1 ;
-(id)loi;
-(void)setPolyline:(id)arg1 ;
-(void)setLoi:(id)arg1 ;
-(SCD_Struct_RT3)mapRect;
-(void).cxx_destruct;
-(id)ploi;
-(void)setMapRect:(SCD_Struct_RT3)arg1 ;
-(id)polyline;
@end

