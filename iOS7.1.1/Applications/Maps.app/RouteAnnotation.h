/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <MapKit/MKAnnotation.h>

@class MNRoute, NSString;

@interface RouteAnnotation : NSObject <MKAnnotation> {

	MNRoute* _route;
	SCD_Struct_Si13 _coordinate;

}

@property (nonatomic,readonly) MNRoute * route;                       //@synthesize route=_route - In the implementation block
@property (assign,nonatomic) SCD_Struct_Si13 coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
-(id)route;
-(id)description;
-(void).cxx_destruct;
-(SCD_Struct_Si13)coordinate;
-(void)setCoordinate:(SCD_Struct_Si13)arg1 ;
-(id)initWithRoute:(id)arg1 ;
@end

