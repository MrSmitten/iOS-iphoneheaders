/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:53 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SBOperationQueue, NSString;

@interface SBOperationQueueLock : NSObject {

	SBOperationQueue* _queue;
	NSString* _reason;
	BOOL _released;

}

@property (nonatomic,readonly) NSString * reason;              //@synthesize reason=_reason - In the implementation block
-(void)_releaseIfNecessary;
-(id)initWithReason:(id)arg1 operationQueue:(id)arg2 ;
-(void)releaseLock;
-(void)dealloc;
-(id)reason;
@end
