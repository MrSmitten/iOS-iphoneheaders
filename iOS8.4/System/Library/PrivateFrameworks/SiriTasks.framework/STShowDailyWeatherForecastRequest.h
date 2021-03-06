/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:20 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantServices/AFSiriRequest.h>

@class STWeatherAttributes, NSArray, AFCity;

@interface STShowDailyWeatherForecastRequest : AFSiriRequest {

	STWeatherAttributes* _currentAttributes;
	NSArray* _dailyAttributes;
	AFCity* _city;
	long long _startWeekday;

}
+(BOOL)supportsSecureCoding;
-(id)city;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)createResponse;
-(id)_initWithCurrentAttributes:(id)arg1 dailyAttributes:(id)arg2 city:(id)arg3 startWeekday:(long long)arg4 ;
-(id)currentAttributes;
-(id)dailyAttributes;
-(long long)startWeekday;
@end

