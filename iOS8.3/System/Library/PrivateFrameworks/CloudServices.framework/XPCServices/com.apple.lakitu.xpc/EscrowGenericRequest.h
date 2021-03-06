/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:07:06 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudServices.framework/XPCServices/com.apple.lakitu.xpc/com.apple.lakitu
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <com.apple.lakitu/LakituRequest.h>

@class NSString;

@interface EscrowGenericRequest : LakituRequest {

	NSString* _baseURL;
	NSString* baseURL;
	NSString* label;

}

@property (nonatomic,retain) NSString * baseURL; 
@property (nonatomic,retain) NSString * label; 
+(Class)responseClass;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)baseURL;
-(void)setBaseURL:(NSString *)arg1 ;
-(id)urlRequest;
-(id)bodyDictionary;
@end

