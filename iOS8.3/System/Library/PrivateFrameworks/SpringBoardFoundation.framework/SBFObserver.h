/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:34:00 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SBFObserver : NSObject
+(void)sendArray:(id)arg1 error:(id)arg2 toObserver:(id)arg3 ;
+(id)observerWithResultBlock:(/*^block*/id)arg1 ;
+(id)observerWithResultBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
+(void)sendObserver:(id)arg1 resultsOfBlock:(/*^block*/id)arg2 ;
@end

