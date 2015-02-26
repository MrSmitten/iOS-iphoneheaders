/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:59 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <YouTube/XMLSAXHTTPRequest.h>

@class NSMutableURLRequest;

@interface YTXMLHTTPRequest : XMLSAXHTTPRequest {

	NSMutableURLRequest* _deferredRequest;
	BOOL _needsAccountAuth;

}

@property (assign,nonatomic) BOOL needsAccountAuth;              //@synthesize needsAccountAuth=_needsAccountAuth - In the implementation block
-(void)dealloc;
-(void)loadRequest:(id)arg1 ;
-(BOOL)needsAccountAuth;
-(void)didAuthenticate:(id)arg1 ;
-(void)setNeedsAccountAuth:(BOOL)arg1 ;
-(void)failedToAuthenticate:(id)arg1 ;
-(void)listenForAuthenticationNotifications:(BOOL)arg1 ;
@end
