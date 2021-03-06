/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:32:19 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iLifeSlideshow/iLifeSlideshow-Structs.h>
#import <iLifeSlideshow/MCAnimationPath.h>

@class NSMutableSet, NSArray, NSSet;

@interface MCAnimationPathKeyframed : MCAnimationPath {

	NSMutableSet* mKeyframes;
	NSArray* mCachedOrderedKeyframes;

}

@property (readonly) NSSet * keyframes; 
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)animationPathWithKey:(id)arg1 ;
+(double)timeForKeyframe:(id)arg1 inPlug:(id)arg2 ;
-(id)init;
-(id)description;
-(id)imprint;
-(id)createKeyframeWithScalar:(float)arg1 atTime:(double)arg2 offsetKind:(int)arg3 ;
-(id)createKeyframeWithFunction:(id)arg1 atTime:(double)arg2 offsetKind:(int)arg3 forDuration:(double)arg4 ;
-(NSSet *)keyframes;
-(id)createKeyframeWithPoint:(CGPoint)arg1 atTime:(double)arg2 offsetKind:(int)arg3 ;
-(id)createKeyframeWithVector:(SCD_Struct_MC18)arg1 atTime:(double)arg2 offsetKind:(int)arg3 ;
-(void)removeKeyframe:(id)arg1 ;
-(void)addKeyframe:(id)arg1 ;
-(void)removeAllKeyframes;
-(id)createKeyframeWithScalar:(float)arg1 atTime:(double)arg2 ;
-(id)createKeyframeWithPoint:(CGPoint)arg1 atTime:(double)arg2 ;
-(id)createKeyframeWithVector:(SCD_Struct_MC18)arg1 atTime:(double)arg2 ;
-(void)demolish;
-(id)orderedKeyframesInPlug:(id)arg1 ;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
-(unsigned)countOfKeyframes;
@end

