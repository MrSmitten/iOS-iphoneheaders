/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:44 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <CloudKitDaemon/NSCopying.h>

@class NSString, CKDPPulseData, NSData, CKDPResource, CKDPShareIdentifier;

@interface CKDPPulseRequest : PBRequest <NSCopying> {

	long long _lookbackWindowMillis;
	int _apnsEnv;
	NSString* _etag;
	CKDPPulseData* _pulseData;
	NSData* _pushToken;
	CKDPResource* _resource;
	CKDPShareIdentifier* _shareId;
	char _reset;
	SCD_Struct_CK8 _has;

}

@property (nonatomic,readonly) char hasShareId; 
@property (nonatomic,retain) CKDPShareIdentifier * shareId;               //@synthesize shareId=_shareId - In the implementation block
@property (nonatomic,readonly) char hasResource; 
@property (nonatomic,retain) CKDPResource * resource;                     //@synthesize resource=_resource - In the implementation block
@property (nonatomic,readonly) char hasEtag; 
@property (nonatomic,retain) NSString * etag;                             //@synthesize etag=_etag - In the implementation block
@property (nonatomic,readonly) char hasPushToken; 
@property (nonatomic,retain) NSData * pushToken;                          //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,readonly) char hasPulseData; 
@property (nonatomic,retain) CKDPPulseData * pulseData;                   //@synthesize pulseData=_pulseData - In the implementation block
@property (assign,nonatomic) char hasReset; 
@property (assign,nonatomic) char reset;                                  //@synthesize reset=_reset - In the implementation block
@property (assign,nonatomic) char hasLookbackWindowMillis; 
@property (assign,nonatomic) long long lookbackWindowMillis;              //@synthesize lookbackWindowMillis=_lookbackWindowMillis - In the implementation block
@property (assign,nonatomic) char hasApnsEnv; 
@property (assign,nonatomic) int apnsEnv;                                 //@synthesize apnsEnv=_apnsEnv - In the implementation block
+(id)options;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)reset;
-(id)dictionaryRepresentation;
-(void)setEtag:(NSString *)arg1 ;
-(char)hasEtag;
-(NSString *)etag;
-(void)setShareId:(CKDPShareIdentifier *)arg1 ;
-(char)hasShareId;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(CKDPShareIdentifier *)shareId;
-(NSData *)pushToken;
-(void)setPushToken:(NSData *)arg1 ;
-(void)setApnsEnv:(int)arg1 ;
-(void)setPulseData:(CKDPPulseData *)arg1 ;
-(void)setHasApnsEnv:(char)arg1 ;
-(char)hasApnsEnv;
-(int)apnsEnv;
-(char)hasResource;
-(char)hasPushToken;
-(char)hasPulseData;
-(void)setReset:(char)arg1 ;
-(void)setHasReset:(char)arg1 ;
-(char)hasReset;
-(long long)lookbackWindowMillis;
-(void)setLookbackWindowMillis:(long long)arg1 ;
-(void)setHasLookbackWindowMillis:(char)arg1 ;
-(char)hasLookbackWindowMillis;
-(CKDPPulseData *)pulseData;
-(CKDPResource *)resource;
-(void)setResource:(CKDPResource *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
