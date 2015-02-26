/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:50 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@interface GEOPDStyleAttribute : PBCodable <NSCopying> {

	unsigned _key;
	unsigned _value;
	SCD_Struct_GE5 _has;

}

@property (assign,nonatomic) BOOL hasKey; 
@property (assign,nonatomic) unsigned key;                //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL hasValue; 
@property (assign,nonatomic) unsigned value;              //@synthesize value=_value - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setValue:(unsigned)arg1 ;
-(unsigned)value;
-(id)dictionaryRepresentation;
-(unsigned)key;
-(void)setKey:(unsigned)arg1 ;
-(BOOL)hasKey;
-(BOOL)hasValue;
-(void)setHasKey:(BOOL)arg1 ;
-(void)setHasValue:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
