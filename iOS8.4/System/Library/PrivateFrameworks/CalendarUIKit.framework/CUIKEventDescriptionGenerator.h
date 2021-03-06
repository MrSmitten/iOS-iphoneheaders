/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDateFormatter, NSNumberFormatter, NSDataDetector;

@interface CUIKEventDescriptionGenerator : NSObject {

	NSDateFormatter* _dateFormatter;
	NSNumberFormatter* _numberFormatter;
	NSDataDetector* _addressDetector;

}
-(id)_sharedNumberFormatter;
-(id)_naturalLanguageDescriptionForEvent:(id)arg1 isFirstInDay:(BOOL)arg2 ;
-(id)_sharedDateFormatter;
-(id)_timeStringForEvent:(id)arg1 forBeginningOfSentence:(BOOL)arg2 useExplicitTimes:(BOOL)arg3 followingComma:(BOOL)arg4 ;
-(id)_locationStringForEvent:(id)arg1 ;
-(BOOL)_eventIsAlreadyLate:(id)arg1 ;
-(BOOL)_prependBusyDayMessageToEventSummaryIfPossible:(id)arg1 ;
-(BOOL)_arrayHasMorningEvents:(id)arg1 ;
-(BOOL)_prependFreeMorningMessageToEventSummaryIfPossible:(id)arg1 ;
-(BOOL)_arrayHasAfternoonEvents:(id)arg1 ;
-(BOOL)_appendFreeAfternoonMessageToEventSummaryIfPossible:(id)arg1 ;
-(BOOL)_doesEventStartEarly:(id)arg1 ;
-(BOOL)_prependEarlyStartMessageToEventSummaryIfPossible:(id)arg1 ;
-(BOOL)_prepareToUseMessageWithID:(id)arg1 shouldAllowWeekendUsage:(BOOL)arg2 ;
-(id)_noonDateForEvents:(id)arg1 ;
-(id)_adjustedMinutesTillEventStarts:(id)arg1 ;
-(BOOL)_startTimeRequiresSingularForEvent:(id)arg1 withTimeString:(id)arg2 ;
-(id)_addressDetector;
-(id)naturalLanguageDescriptionForBirthdayEvents:(id)arg1 ;
-(id)naturalLanguageDescriptionForUpcomingEvents:(id)arg1 firstInDay:(BOOL)arg2 ;
-(id)tomorrowSnippetForUpcomingEvents:(id)arg1 withTodayEvents:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)_randomNumberBetween1And3;
-(void)meCardChanged:(id)arg1 ;
@end

