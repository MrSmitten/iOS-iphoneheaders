/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:43 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray;

@interface PKPaymentCredentialsResponse : PKPaymentWebServiceResponse {

	NSArray* _credentials;

}

@property (nonatomic,retain) NSArray * credentials;              //@synthesize credentials=_credentials - In the implementation block
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(NSArray *)credentials;
-(void)setCredentials:(NSArray *)arg1 ;
@end

