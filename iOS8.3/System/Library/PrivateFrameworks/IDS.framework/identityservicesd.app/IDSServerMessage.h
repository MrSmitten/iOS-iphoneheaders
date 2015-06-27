/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:04:31 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <IDSFoundation/IDSMessage.h>
#import <identityservicesd/NSCopying.h>

@class NSDictionary;

@interface IDSServerMessage : IDSMessage <NSCopying> {

	NSDictionary* _payload;
	int _command;

}

@property (assign,nonatomic) int command;                       //@synthesize command=_command - In the implementation block
@property (nonatomic,copy) NSDictionary * payload;              //@synthesize payload=_payload - In the implementation block
-(id)initWithPayload:(id)arg1 command:(id)arg2 ;
-(int)command;
-(void)dealloc;
-(NSDictionary *)payload;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPayload:(NSDictionary *)arg1 ;
-(void)setCommand:(int)arg1 ;
-(id)messageBody;
@end
