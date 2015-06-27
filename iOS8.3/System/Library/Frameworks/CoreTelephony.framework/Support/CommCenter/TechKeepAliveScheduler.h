/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:44:30 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/Support/CommCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommCenter/CommCenter-Structs.h>
#import <CommCenter/PCConnectionManagerDelegate.h>

@class PCConnectionManager, NSString;

@interface TechKeepAliveScheduler : NSObject <PCConnectionManagerDelegate> {

	PCConnectionManager* _manager;
	int _contextID;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopKeepAlive;
-(void)startKeepAlive;
-(void)growKeepAliveInterval;
-(void)shrinkKeepAliveInterval;
-(id)initWithContextID:(int)arg1 delegateQueue:(dispatch_queue_sRef)arg2 maxInterval:(double)arg3 ;
-(void)dealloc;
-(void)connectionManager:(id)arg1 handleEvent:(int)arg2 ;
@end
