/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:07:35 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CABasicAnimation.h>

@interface CASpringAnimation : CABasicAnimation

@property (assign) float mass; 
@property (assign) float stiffness; 
@property (assign) float damping; 
@property (assign) float velocity; 
+(id)defaultValueForKey:(id)arg1 ;
-(char)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(unsigned)_propertyFlagsForLayer:(id)arg1 ;
-(Animation*)_copyRenderAnimationForLayer:(id)arg1 ;
-(double)_timeFunction:(double)arg1 ;
-(float)stiffness;
-(void)setVelocity:(float)arg1 ;
-(void)setStiffness:(float)arg1 ;
-(void)setDamping:(float)arg1 ;
-(void)setMass:(float)arg1 ;
-(float)_solveForInput:(float)arg1 ;
-(float)damping;
-(float)velocity;
-(float)mass;
-(double)durationForEpsilon:(double)arg1 ;
@end
