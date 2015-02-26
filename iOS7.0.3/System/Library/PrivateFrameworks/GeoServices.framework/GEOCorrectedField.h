/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface GEOCorrectedField : PBCodable <NSCopying> {

	NSString* _correctedValue;
	NSString* _displayName;
	NSString* _objectName;
	BOOL _isMarkedIncorrect;
	SCD_Struct_GE52 _has;

}

@property (nonatomic,retain) NSString * displayName;                 //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) BOOL hasObjectName; 
@property (nonatomic,retain) NSString * objectName;                  //@synthesize objectName=_objectName - In the implementation block
@property (nonatomic,readonly) BOOL hasCorrectedValue; 
@property (nonatomic,retain) NSString * correctedValue;              //@synthesize correctedValue=_correctedValue - In the implementation block
@property (assign,nonatomic) BOOL hasIsMarkedIncorrect; 
@property (assign,nonatomic) BOOL isMarkedIncorrect;                 //@synthesize isMarkedIncorrect=_isMarkedIncorrect - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)dictionaryRepresentation;
-(id)displayName;
-(void)setCorrectedValue:(id)arg1 ;
-(BOOL)hasCorrectedValue;
-(id)correctedValue;
-(BOOL)hasIsMarkedIncorrect;
-(BOOL)isMarkedIncorrect;
-(void)setIsMarkedIncorrect:(BOOL)arg1 ;
-(void)setHasIsMarkedIncorrect:(BOOL)arg1 ;
-(void)setObjectName:(id)arg1 ;
-(BOOL)hasObjectName;
-(id)objectName;
-(BOOL)readFrom:(id)arg1 ;
-(void)setDisplayName:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
