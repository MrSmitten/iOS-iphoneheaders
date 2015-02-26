/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSDate, NSString;

@interface SASportsSeasonRange : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSDate * end; 
@property (nonatomic,copy) NSString * seasonType; 
@property (nonatomic,copy) NSDate * start; 
+(id)seasonRange;
+(id)seasonRangeWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)start;
-(id)end;
-(void)setStart:(id)arg1 ;
-(void)setEnd:(id)arg1 ;
-(id)encodedClassName;
-(id)seasonType;
-(void)setSeasonType:(id)arg1 ;
@end
