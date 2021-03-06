/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface SBReachabilitySettings : _UISettings {

	BOOL _allowOnAllDevices;
	unsigned long long _triggerMethod;
	double _fingerOnMesaRequiredDuration;
	unsigned long long _numberOfTapsForTapTrigger;
	double _tapToTapMaxInterval;
	double _reachabilityDefaultKeepAlive;
	double _reachabilityInteractiveKeepAlive;
	double _yOffsetFactor;
	double _mass;
	double _stiffness;
	double _damping;
	double _epsilon;
	double _reducedMotionSlideDuration;

}

@property (assign,nonatomic) unsigned long long triggerMethod;                          //@synthesize triggerMethod=_triggerMethod - In the implementation block
@property (assign,nonatomic) double fingerOnMesaRequiredDuration;                       //@synthesize fingerOnMesaRequiredDuration=_fingerOnMesaRequiredDuration - In the implementation block
@property (assign,nonatomic) BOOL allowOnAllDevices;                                    //@synthesize allowOnAllDevices=_allowOnAllDevices - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfTapsForTapTrigger;              //@synthesize numberOfTapsForTapTrigger=_numberOfTapsForTapTrigger - In the implementation block
@property (assign,nonatomic) double tapToTapMaxInterval;                                //@synthesize tapToTapMaxInterval=_tapToTapMaxInterval - In the implementation block
@property (assign,nonatomic) double reachabilityDefaultKeepAlive;                       //@synthesize reachabilityDefaultKeepAlive=_reachabilityDefaultKeepAlive - In the implementation block
@property (assign,nonatomic) double reachabilityInteractiveKeepAlive;                   //@synthesize reachabilityInteractiveKeepAlive=_reachabilityInteractiveKeepAlive - In the implementation block
@property (assign,nonatomic) double yOffsetFactor;                                      //@synthesize yOffsetFactor=_yOffsetFactor - In the implementation block
@property (assign,nonatomic) double mass;                                               //@synthesize mass=_mass - In the implementation block
@property (assign,nonatomic) double stiffness;                                          //@synthesize stiffness=_stiffness - In the implementation block
@property (assign,nonatomic) double damping;                                            //@synthesize damping=_damping - In the implementation block
@property (assign,nonatomic) double epsilon;                                            //@synthesize epsilon=_epsilon - In the implementation block
@property (assign,nonatomic) double reducedMotionSlideDuration;                         //@synthesize reducedMotionSlideDuration=_reducedMotionSlideDuration - In the implementation block
+(id)settingsControllerModule;
-(BOOL)allowOnAllDevices;
-(unsigned long long)triggerMethod;
-(double)reachabilityInteractiveKeepAlive;
-(double)reachabilityDefaultKeepAlive;
-(double)fingerOnMesaRequiredDuration;
-(unsigned long long)numberOfTapsForTapTrigger;
-(double)tapToTapMaxInterval;
-(void)setTriggerMethod:(unsigned long long)arg1 ;
-(void)setNumberOfTapsForTapTrigger:(unsigned long long)arg1 ;
-(void)setTapToTapMaxInterval:(double)arg1 ;
-(void)setFingerOnMesaRequiredDuration:(double)arg1 ;
-(void)setAllowOnAllDevices:(BOOL)arg1 ;
-(void)setReachabilityDefaultKeepAlive:(double)arg1 ;
-(void)setReachabilityInteractiveKeepAlive:(double)arg1 ;
-(void)setYOffsetFactor:(double)arg1 ;
-(void)setReducedMotionSlideDuration:(double)arg1 ;
-(double)reducedMotionSlideDuration;
-(double)yOffsetFactor;
-(double)stiffness;
-(void)setStiffness:(double)arg1 ;
-(void)setDamping:(double)arg1 ;
-(void)setMass:(double)arg1 ;
-(double)damping;
-(void)setDefaultValues;
-(double)mass;
-(id)animationFactory;
-(double)epsilon;
-(void)setEpsilon:(double)arg1 ;
@end

