/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:10:52 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceTrigger/VTPeerRemoteConnectionDelegate.h>

@protocol OS_dispatch_queue, VTPhraseSpotterControlRemoteDelegate;
@class NSObject, VTPeerRemoteConnection, NSString;

@interface VTPhraseSpotterControlRemote : NSObject <VTPeerRemoteConnectionDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	VTPeerRemoteConnection* _peerConnection;
	id<VTPhraseSpotterControlRemoteDelegate> _delegate;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDelegate:(id)arg1 ;
-(void)remoteConnection:(id)arg1 handleMessageType:(unsigned)arg2 completion:(/*^block*/id)arg3 ;
@end

