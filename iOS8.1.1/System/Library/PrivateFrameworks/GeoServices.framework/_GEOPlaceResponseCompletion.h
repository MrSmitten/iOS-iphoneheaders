/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:51 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GEOCompletion.h>

@class NSArray, GEOPlaceSearchResponse, NSString;

@interface _GEOPlaceResponseCompletion : NSObject <GEOCompletion> {

	GEOPlaceSearchResponse* _response;
	NSArray* _groups;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * groups; 
-(NSArray *)groups;
-(void)dealloc;
-(NSString *)description;
-(id)response;
-(id)initWithPlaceSearchResponse:(id)arg1 query:(id)arg2 traits:(id)arg3 ;
-(id)metadata;
@end
