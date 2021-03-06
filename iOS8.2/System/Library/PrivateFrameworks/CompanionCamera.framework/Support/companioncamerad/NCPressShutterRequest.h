/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:25:09 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CompanionCamera.framework/Support/companioncamerad
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <companioncamerad/companioncamerad-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <companioncamerad/NSCopying.h>

@interface NCPressShutterRequest : PBRequest <NSCopying> {

	int _countdown;
	SCD_Struct_NC3 _has;

}

@property (assign,nonatomic) char hasCountdown; 
@property (assign,nonatomic) int countdown;                  //@synthesize countdown=_countdown - In the implementation block
-(void)setHasCountdown:(char)arg1 ;
-(char)hasCountdown;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)countdown;
-(void)setCountdown:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

