/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSSecureCoding.h>

@class NSString;

@interface CLRegion : NSObject <NSCopying, NSSecureCoding> {

	SCD_Struct_CL9 fRegion;

}

@property (nonatomic,readonly) SCD_Struct_CL0 center; 
@property (nonatomic,readonly) double radius; 
@property (nonatomic,readonly) NSString * identifier; 
@property (assign,nonatomic) bool notifyOnEntry; 
@property (assign,nonatomic) bool notifyOnExit; 
@property (nonatomic,readonly) SCD_Struct_CL10 clientRegion; 
+(bool)supportsSecureCoding;
-(SCD_Struct_CL10)clientRegion;
-(id)initWithClientRegion:(SCD_Struct_CL10)arg1 ;
-(id)initCircularRegionWithCenter:(SCD_Struct_CL0)arg1 radius:(double)arg2 identifier:(id)arg3 ;
-(id)_initWithCoder:(id)arg1 ;
-(void)_encodeWithCoder:(id)arg1 ;
-(bool)notifyOnEntry;
-(void)setNotifyOnEntry:(bool)arg1 ;
-(bool)notifyOnExit;
-(void)setNotifyOnExit:(bool)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(SCD_Struct_CL0)center;
-(id)identifier;
-(id)initWithIdentifier:(id)arg1 ;
-(bool)containsCoordinate:(SCD_Struct_CL0)arg1 ;
-(double)radius;
@end

