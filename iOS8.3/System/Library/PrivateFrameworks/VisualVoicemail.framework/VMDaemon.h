/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:06:35 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/vmd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_xpc_object, VMDAccountConcrete, OS_dispatch_semaphore, OS_dispatch_queue;
@class NSObject, VMDAccount, NSMutableArray;

@interface VMDaemon : NSObject {

	NSObject*<OS_xpc_object> _connection;
	VMDAccount*<VMDAccountConcrete> _legacyAccount;
	NSObject*<OS_dispatch_semaphore> _modifyingPeerConnections;
	NSMutableArray* _peerConnections;
	NSObject*<OS_dispatch_queue> _peerConnectionHandlerQueue;

}
+(id)sharedDaemon;
-(id)_accountForIdentifier:(id)arg1 ;
-(void)broadcastNotificationNamed:(id)arg1 object:(id)arg2 userInfo:(id)arg3 excludeConnection:(id)arg4 ;
-(void)broadcastNotificationNamed:(id)arg1 object:(id)arg2 userInfo:(id)arg3 ;
-(id)_handleXPCMessage:(id)arg1 connection:(id)arg2 daemonConnection:(id)arg3 ;
-(id)init;
-(void)stop;
-(void)start;
-(void)_registerForCarrierNotifications;
@end
