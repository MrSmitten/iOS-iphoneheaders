/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDCalligraphyStroke.h>

@class TSUColor, TSDStrokePattern, NSString;

@interface TSDMutableCalligraphyStroke : TSDCalligraphyStroke

@property (nonatomic,@dynamic,copy) TSUColor * color; 
@property (assign,nonatomic,@dynamic) float width; 
@property (assign,nonatomic,@dynamic) float actualWidth; 
@property (assign,nonatomic,@dynamic) int cap; 
@property (assign,nonatomic,@dynamic) int join; 
@property (assign,nonatomic,@dynamic) float miterLimit; 
@property (nonatomic,@dynamic,copy) TSDStrokePattern * pattern; 
@property (nonatomic,@dynamic,copy) NSString * strokeName; 
-(void)setPropertiesFromStroke:(id)arg1 ;
-(void)setPatternPropertiesFromStroke:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
@end

