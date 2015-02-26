/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:36:23 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface LifetimeServoAFLUTColumn : NSObject {

	int _voltage;
	int _rowCount;
	int _temperatures[10];
	float _accelerationFactors[10];

}
-(int)voltage;
-(id)initWithLUTColumn:(id)arg1 voltage:(int)arg2 ;
-(float)accelerationFactor:(int)arg1 ;
@end
