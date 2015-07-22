/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:35 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class GEOLatLng, NSString, NSMutableArray, GEOMapRegion;

@interface GEORPCorrectedLabel : PBCodable <NSCopying> {

	unsigned long long _uid;
	GEOLatLng* _coordinate;
	NSString* _correctedValue;
	NSMutableArray* _featureHandles;
	GEOMapRegion* _featureRegion;
	NSString* _originalValue;
	BOOL _localizedLabels;
	SCD_Struct_GE6 _has;

}

@property (nonatomic,readonly) BOOL hasOriginalValue; 
@property (nonatomic,retain) NSString * originalValue;                     //@synthesize originalValue=_originalValue - In the implementation block
@property (nonatomic,readonly) BOOL hasCorrectedValue; 
@property (nonatomic,retain) NSString * correctedValue;                    //@synthesize correctedValue=_correctedValue - In the implementation block
@property (nonatomic,readonly) BOOL hasFeatureRegion; 
@property (nonatomic,retain) GEOMapRegion * featureRegion;                 //@synthesize featureRegion=_featureRegion - In the implementation block
@property (nonatomic,retain) NSMutableArray * featureHandles;              //@synthesize featureHandles=_featureHandles - In the implementation block
@property (nonatomic,readonly) BOOL hasCoordinate; 
@property (nonatomic,retain) GEOLatLng * coordinate;                       //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) BOOL hasUid; 
@property (assign,nonatomic) unsigned long long uid;                       //@synthesize uid=_uid - In the implementation block
@property (assign,nonatomic) BOOL hasLocalizedLabels; 
@property (assign,nonatomic) BOOL localizedLabels;                         //@synthesize localizedLabels=_localizedLabels - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)uid;
-(BOOL)hasCoordinate;
-(void)setOriginalValue:(NSString *)arg1 ;
-(void)setCorrectedValue:(NSString *)arg1 ;
-(void)setFeatureRegion:(GEOMapRegion *)arg1 ;
-(void)setFeatureHandles:(NSMutableArray *)arg1 ;
-(void)addFeatureHandle:(id)arg1 ;
-(unsigned long long)featureHandlesCount;
-(void)clearFeatureHandles;
-(id)featureHandleAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasOriginalValue;
-(BOOL)hasCorrectedValue;
-(BOOL)hasFeatureRegion;
-(void)setUid:(unsigned long long)arg1 ;
-(void)setHasUid:(BOOL)arg1 ;
-(BOOL)hasUid;
-(void)setLocalizedLabels:(BOOL)arg1 ;
-(void)setHasLocalizedLabels:(BOOL)arg1 ;
-(BOOL)hasLocalizedLabels;
-(NSString *)originalValue;
-(NSString *)correctedValue;
-(GEOMapRegion *)featureRegion;
-(BOOL)localizedLabels;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(GEOLatLng *)coordinate;
-(void)setCoordinate:(GEOLatLng *)arg1 ;
-(NSMutableArray *)featureHandles;
@end
