/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:04:50 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class NSData, NSString;

@interface CKDPProtectionInfo : PBCodable <NSCopying> {

	NSData* _protectionInfo;
	NSString* _protectionInfoTag;

}

@property (nonatomic,readonly) char hasProtectionInfo; 
@property (nonatomic,retain) NSData * protectionInfo;                   //@synthesize protectionInfo=_protectionInfo - In the implementation block
@property (nonatomic,readonly) char hasProtectionInfoTag; 
@property (nonatomic,retain) NSString * protectionInfoTag;              //@synthesize protectionInfoTag=_protectionInfoTag - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setProtectionInfo:(NSData *)arg1 ;
-(void)setProtectionInfoTag:(NSString *)arg1 ;
-(char)hasProtectionInfo;
-(char)hasProtectionInfoTag;
-(NSData *)protectionInfo;
-(NSString *)protectionInfoTag;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
