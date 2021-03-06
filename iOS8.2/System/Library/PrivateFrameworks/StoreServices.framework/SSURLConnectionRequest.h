/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:14 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>
#import <StoreServices/SSXPCCoding.h>

@class SSURLRequestProperties, SSAuthenticationContext, SSVURLDataConsumer, NSURL, NSURLRequest, NSString;

@interface SSURLConnectionRequest : SSRequest <SSXPCCoding> {

	SSURLRequestProperties* _requestProperties;
	SSAuthenticationContext* _authenticationContext;
	SSVURLDataConsumer* _dataConsumer;
	NSURL* _destinationFileURL;
	char _runsInProcess;
	char _sendsResponseForHTTPFailures;
	char _shouldMescalSign;

}

@property (readonly) NSURLRequest * URLRequest; 
@property (readonly) SSURLRequestProperties * requestProperties; 
@property (copy) NSURL * destinationFileURL; 
@property (assign) char shouldMescalSign; 
@property (assign,nonatomic) id<SSURLConnectionRequestDelegate> delegate; 
@property (copy) SSAuthenticationContext * authenticationContext; 
@property (retain) SSVURLDataConsumer * dataConsumer; 
@property (assign) char runsInProcess; 
@property (assign) char sendsResponseForHTTPFailures; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newRadioRequestWithRequestProperties:(id)arg1 ;
-(id)initWithRequestProperties:(id)arg1 ;
-(void)setShouldMescalSign:(char)arg1 ;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)startWithConnectionResponseBlock:(/*^block*/id)arg1 ;
-(NSURLRequest *)URLRequest;
-(id)initWithURLRequest:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)start;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(SSURLRequestProperties *)requestProperties;
-(void)setDataConsumer:(SSVURLDataConsumer *)arg1 ;
-(SSVURLDataConsumer *)dataConsumer;
-(char)_canRunInProcess;
-(char)runsInProcess;
-(NSURL *)destinationFileURL;
-(char)sendsResponseForHTTPFailures;
-(char)shouldMescalSign;
-(void)setSendsResponseForHTTPFailures:(char)arg1 ;
-(void)setDestinationFileURL:(NSURL *)arg1 ;
-(void)setRunsInProcess:(char)arg1 ;
-(SSAuthenticationContext *)authenticationContext;
@end

