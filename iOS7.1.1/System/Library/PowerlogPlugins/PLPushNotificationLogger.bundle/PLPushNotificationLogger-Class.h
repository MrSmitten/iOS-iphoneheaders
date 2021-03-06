/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PowerlogPlugins/PLPushNotificationLogger.bundle/PLPushNotificationLogger
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogLoggerSupport/PLLogger.h>
#import <IDSFoundation/APSConnectionDelegate.h>

@class APSConnection;

@interface PLPushNotificationLogger : PLLogger <APSConnectionDelegate> {

	APSConnection* apsConnection;

}

@property (nonatomic,readonly) bool shouldShowAPSContents; 
-(bool)shouldShowAPSContents;
-(id)formatAPSUserInfo:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)log;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
@end

