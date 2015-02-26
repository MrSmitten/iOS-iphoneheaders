/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:57 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <GeoServices/NSCopying.h>

@class GEOAddress, NSMutableArray, GEOPDIndexQueryNode, NSString, GEOPDViewportInfo, NSData;

@interface GEOPDSiriSearchParameters : PBCodable <NSCopying> {

	GEOAddress* _address;
	NSMutableArray* _businessCategoryFilters;
	GEOPDIndexQueryNode* _indexFilter;
	unsigned _maxResultCount;
	NSString* _searchString;
	NSMutableArray* _searchSubstringDescriptors;
	int _sortOrder;
	GEOPDViewportInfo* _viewportInfo;
	NSData* _zilchPoints;
	BOOL _isStrictMapRegion;
	BOOL _structuredSearch;
	SCD_Struct_GE50 _has;

}

@property (assign,nonatomic) BOOL hasSortOrder; 
@property (assign,nonatomic) int sortOrder;                                            //@synthesize sortOrder=_sortOrder - In the implementation block
@property (assign,nonatomic) BOOL hasMaxResultCount; 
@property (assign,nonatomic) unsigned maxResultCount;                                  //@synthesize maxResultCount=_maxResultCount - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchString; 
@property (nonatomic,retain) NSString * searchString;                                  //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,readonly) BOOL hasViewportInfo; 
@property (nonatomic,retain) GEOPDViewportInfo * viewportInfo;                         //@synthesize viewportInfo=_viewportInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasAddress; 
@property (nonatomic,retain) GEOAddress * address;                                     //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) NSMutableArray * businessCategoryFilters;                 //@synthesize businessCategoryFilters=_businessCategoryFilters - In the implementation block
@property (assign,nonatomic) BOOL hasIsStrictMapRegion; 
@property (assign,nonatomic) BOOL isStrictMapRegion;                                   //@synthesize isStrictMapRegion=_isStrictMapRegion - In the implementation block
@property (nonatomic,readonly) BOOL hasZilchPoints; 
@property (nonatomic,retain) NSData * zilchPoints;                                     //@synthesize zilchPoints=_zilchPoints - In the implementation block
@property (assign,nonatomic) BOOL hasStructuredSearch; 
@property (assign,nonatomic) BOOL structuredSearch;                                    //@synthesize structuredSearch=_structuredSearch - In the implementation block
@property (nonatomic,retain) NSMutableArray * searchSubstringDescriptors;              //@synthesize searchSubstringDescriptors=_searchSubstringDescriptors - In the implementation block
@property (nonatomic,readonly) BOOL hasIndexFilter; 
@property (nonatomic,retain) GEOPDIndexQueryNode * indexFilter;                        //@synthesize indexFilter=_indexFilter - In the implementation block
-(void)setAddress:(GEOAddress *)arg1 ;
-(BOOL)hasSearchString;
-(GEOAddress *)address;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSortOrder:(int)arg1 ;
-(int)sortOrder;
-(NSString *)searchString;
-(id)dictionaryRepresentation;
-(void)setSearchString:(NSString *)arg1 ;
-(void)setZilchPoints:(NSData *)arg1 ;
-(BOOL)hasZilchPoints;
-(NSData *)zilchPoints;
-(BOOL)hasAddress;
-(void)setIndexFilter:(GEOPDIndexQueryNode *)arg1 ;
-(void)setIsStrictMapRegion:(BOOL)arg1 ;
-(void)setHasIsStrictMapRegion:(BOOL)arg1 ;
-(BOOL)hasIsStrictMapRegion;
-(void)setStructuredSearch:(BOOL)arg1 ;
-(void)setHasStructuredSearch:(BOOL)arg1 ;
-(BOOL)hasStructuredSearch;
-(BOOL)hasIndexFilter;
-(BOOL)isStrictMapRegion;
-(BOOL)structuredSearch;
-(GEOPDIndexQueryNode *)indexFilter;
-(void)setViewportInfo:(GEOPDViewportInfo *)arg1 ;
-(BOOL)hasViewportInfo;
-(void)setHasSortOrder:(BOOL)arg1 ;
-(BOOL)hasSortOrder;
-(void)setBusinessCategoryFilters:(NSMutableArray *)arg1 ;
-(void)setSearchSubstringDescriptors:(NSMutableArray *)arg1 ;
-(void)addBusinessCategoryFilter:(id)arg1 ;
-(void)addSearchSubstringDescriptor:(id)arg1 ;
-(unsigned long long)businessCategoryFiltersCount;
-(void)clearBusinessCategoryFilters;
-(id)businessCategoryFilterAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)searchSubstringDescriptorsCount;
-(void)clearSearchSubstringDescriptors;
-(id)searchSubstringDescriptorAtIndex:(unsigned long long)arg1 ;
-(unsigned)maxResultCount;
-(void)setMaxResultCount:(unsigned)arg1 ;
-(void)setHasMaxResultCount:(BOOL)arg1 ;
-(BOOL)hasMaxResultCount;
-(NSMutableArray *)businessCategoryFilters;
-(NSMutableArray *)searchSubstringDescriptors;
-(GEOPDViewportInfo *)viewportInfo;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end
