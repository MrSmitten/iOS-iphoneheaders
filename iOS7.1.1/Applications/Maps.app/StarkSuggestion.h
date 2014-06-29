/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, MKMapItem, NSURL, NSDate, RTRoute;

@interface StarkSuggestion : NSObject <NSCopying> {

	int _suggestionType;
	int _routineType;
	NSString* _name;
	MKMapItem* _mapItem;
	NSURL* _url;
	NSDate* _date;
	RTRoute* _usualRoute;

}

@property (nonatomic,readonly) int suggestionType;               //@synthesize suggestionType=_suggestionType - In the implementation block
@property (assign,nonatomic) int routineType;                    //@synthesize routineType=_routineType - In the implementation block
@property (nonatomic,copy) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) MKMapItem * mapItem;              //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,readonly) NSURL * url;                      //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSDate * date;                    //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) RTRoute * usualRoute;               //@synthesize usualRoute=_usualRoute - In the implementation block
-(id)initWithSuggestionType:(int)arg1 mapItem:(id)arg2 url:(id)arg3 date:(id)arg4 ;
-(id)usualRoute;
-(int)suggestionType;
-(int)routineType;
-(void)setRoutineType:(int)arg1 ;
-(void)setUsualRoute:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)date;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)url;
-(void).cxx_destruct;
-(id)mapItem;
@end
