/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:25:46 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ATFoundation/ATFoundation-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <ATFoundation/NSCopying.h>

@class NSString;

@interface ATPRequest : PBRequest <NSCopying> {

	NSString* _command;
	NSString* _dataClass;

}

@property (nonatomic,readonly) char hasCommand; 
@property (nonatomic,retain) NSString * command;                //@synthesize command=_command - In the implementation block
@property (nonatomic,readonly) char hasDataClass; 
@property (nonatomic,retain) NSString * dataClass;              //@synthesize dataClass=_dataClass - In the implementation block
-(NSString *)command;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(char)hasDataClass;
-(NSString *)dataClass;
-(void)setDataClass:(NSString *)arg1 ;
-(void)setCommand:(NSString *)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(char)hasCommand;
@end
