/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:45:02 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AssistantServices/AssistantServices-Structs.h>
@class CPDistributedMessagingCenter;

@interface AFContextManager : NSObject {

	CFArrayRef _contextProviders;
	CPDistributedMessagingCenter* _center;

}
+(id)defaultContextManager;
-(void)dealloc;
-(id)init;
-(void)nothing;
-(void)_collateContextsIntoArray:(id)arg1 ;
-(void)_shutdownServer;
-(id)_collateContexts;
-(void)startCenter:(id)arg1 ;
-(void)removeContextProvider:(id)arg1 ;
-(char)addContextProvider:(id)arg1 ;
@end
