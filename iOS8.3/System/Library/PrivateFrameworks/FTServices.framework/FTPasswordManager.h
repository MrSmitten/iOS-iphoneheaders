/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:37:55 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet, ACAccountStore;

@interface FTPasswordManager : NSObject {

	NSMutableSet* _runningQueries;
	ACAccountStore* _accountStore;

}
+(id)sharedInstance;
+(id)_loginUserNotificationForService:(id)arg1 user:(id)arg2 isForBadPassword:(char)arg3 showForgetPassword:(char)arg4 shouldRememberPassword:(char)arg5 ;
-(void)dealloc;
-(id)init;
-(void)fetchAuthTokenForUsername:(id)arg1 service:(id)arg2 profileID:(id)arg3 outRequestID:(id*)arg4 blockingly:(char)arg5 completionBlock:(/*^block*/id)arg6 ;
-(char)supportsAuthTokenRequests;
-(void)requestAuthTokenForUsername:(id)arg1 service:(id)arg2 badPassword:(char)arg3 showForgotPassword:(char)arg4 outRequestID:(id*)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)setPairedAccountPasswordForUsername:(id)arg1 password:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setPasswordForUsername:(id)arg1 service:(id)arg2 password:(id)arg3 outRequestID:(id*)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)fetchPasswordForUsername:(id)arg1 service:(id)arg2 outRequestID:(id*)arg3 blockingly:(char)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)fetchAuthTokenForUsername:(id)arg1 service:(id)arg2 outRequestID:(id*)arg3 blockingly:(char)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)setAuthTokenForUsername:(id)arg1 service:(id)arg2 authToken:(id)arg3 profileID:(id)arg4 selfHandle:(id)arg5 outRequestID:(id*)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)cancelRequestID:(id)arg1 serviceIdentifier:(id)arg2 ;
-(void)requestPasswordForUsername:(id)arg1 service:(id)arg2 badPassword:(char)arg3 showForgotPassword:(char)arg4 shouldRememberPassword:(char)arg5 outRequestID:(id*)arg6 completionBlock:(/*^block*/id)arg7 ;
@end

