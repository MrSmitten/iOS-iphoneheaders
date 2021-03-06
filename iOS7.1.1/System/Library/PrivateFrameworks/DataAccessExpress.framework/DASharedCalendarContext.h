/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:19 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface DASharedCalendarContext : NSObject {

	NSString* _calendarID;
	NSString* _accountID;
	NSObject<OS_dispatch_queue>* _queue;
	/*^block*/ id _completionBlock;
	bool _shouldSyncCalendar;

}

@property (assign,nonatomic) bool shouldSyncCalendar;              //@synthesize shouldSyncCalendar=_shouldSyncCalendar - In the implementation block
-(void)dealloc;
-(void)finishedWithError:(id)arg1 ;
-(bool)shouldSyncCalendar;
-(id)initWithCalendarID:(id)arg1 accountID:(id)arg2 queue:(id)arg3 completionBlock:(/*^block*/ id)arg4 ;
-(void)setShouldSyncCalendar:(bool)arg1 ;
@end

