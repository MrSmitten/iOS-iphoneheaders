/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:32:19 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLifeSlideshow/MCMotionTrigger.h>

@class NSString, NSDictionary;

@interface MCMotionTriggerExpression : MCMotionTrigger {

	NSString* _expression;
	NSDictionary* _attributes;

}

@property (copy) NSString * expression;                  //@synthesize expression=_expression - In the implementation block
@property (copy) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
+(id)motionTriggerForTargetPlugObjectID:(id)arg1 withKey:(id)arg2 duration:(double)arg3 andExpression:(id)arg4 ;
-(NSString *)expression;
-(id)description;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(id)imprint;
-(void)setExpression:(NSString *)arg1 ;
-(void)demolish;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
@end
