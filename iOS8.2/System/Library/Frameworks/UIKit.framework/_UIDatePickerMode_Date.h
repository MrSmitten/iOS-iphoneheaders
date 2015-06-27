/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:10 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIDatePickerMode.h>

@class NSString;

@interface _UIDatePickerMode_Date : _UIDatePickerMode {

	float _dateYearWidth;
	float _dateMonthWidth;
	float _dateDayWidth;
	NSString* _yearFormat;
	NSString* _monthFormat;
	NSString* _dayFormat;

}
+(int)datePickerMode;
+(unsigned)extractableCalendarUnits;
-(void)dealloc;
-(void)noteCalendarChanged;
-(int)displayedCalendarUnits;
-(void)resetComponentWidths;
-(void)_shouldReset:(id)arg1 ;
-(id)dateFormatForCalendarUnit:(unsigned)arg1 ;
-(float)widthForCalendarUnit:(unsigned)arg1 font:(id)arg2 maxWidth:(float)arg3 ;
-(id)localizedFormatString;
-(int)numberOfRowsForCalendarUnit:(unsigned)arg1 ;
-(unsigned)nextUnitSmallerThanUnit:(unsigned)arg1 ;
-(unsigned)nextUnitLargerThanUnit:(unsigned)arg1 ;
-(id)_dateForYearRow:(int)arg1 ;
-(int)rowForDate:(id)arg1 dateComponents:(id)arg2 component:(int)arg3 currentRow:(int)arg4 ;
-(char)_shouldEnableValueForRow:(int)arg1 inComponent:(int)arg2 calendarUnit:(unsigned)arg3 ;
@end
