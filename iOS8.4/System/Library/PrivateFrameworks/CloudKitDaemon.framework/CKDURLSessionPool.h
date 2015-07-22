/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/NSURLSessionDelegate.h>
#import <CloudKitDaemon/NSURLSessionTaskDelegatePrivate.h>
#import <CloudKitDaemon/NSURLSessionDataDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString;

@interface CKDURLSessionPool : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegatePrivate, NSURLSessionDataDelegate> {

	NSMutableDictionary* _delegateByTaskDescription;
	NSMutableDictionary* _sessionByIdentifier;
	NSMutableDictionary* _ephemeralSessionByTaskDescription;
	NSMutableDictionary* _sessionConfigurationReferenceByName;
	NSMutableDictionary* _sessionConfigurationReferenceByIdentifier;
	NSObject*<OS_dispatch_queue> _queue;
	int _backgroundSessionConnectionPoolLimit;
	int _networkdNotifyToken;

}

@property (nonatomic,readonly) int backgroundSessionConnectionPoolLimit; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedURLSessionPool;
+(id)backgroundSessionConnectionPoolName;
-(void)dealloc;
-(id)init;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)dataTaskWithTaskDescription:(id)arg1 configuration:(id)arg2 request:(id)arg3 delegate:(id)arg4 ;
-(int)backgroundSessionConnectionPoolLimit;
-(id)checkoutSessionConfigurationWithName:(id)arg1 ;
-(void)setSessionConfiguration:(id)arg1 forName:(id)arg2 ;
-(void)invalidateDataTask:(id)arg1 ;
-(void)checkinSessionConfiguration:(id)arg1 ;
-(void)_updateBackgroundSessionConnectionPoolLimit;
-(id)_URLSessionWithConfiguration:(id)arg1 forDelegate:(id)arg2 ;
-(void)_performAsyncOnDelegateOfSession:(id)arg1 task:(id)arg2 fromSelector:(SEL)arg3 block:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2 ;
-(void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(BOOL)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
@end
