/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:49 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileMail/MFMailService.h>

@class NSString;

@interface MFCustomSignatureService : NSObject <MFMailService>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requiredEntitlement;
+(char)handleMessage:(id)arg1 connectionState:(id)arg2 replyObject:(id*)arg3 error:(id*)arg4 ;
+(id)serviceName;
@end
