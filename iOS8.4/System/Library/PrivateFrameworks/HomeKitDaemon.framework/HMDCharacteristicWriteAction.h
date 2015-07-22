/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:54 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HomeKitDaemon/NSSecureCoding.h>

@class NSUUID, HMDActionSet, HMDCharacteristic;

@interface HMDCharacteristicWriteAction : NSObject <NSSecureCoding> {

	NSUUID* _uuid;
	HMDActionSet* _actionSet;
	HMDCharacteristic* _characteristic;
	id _targetValue;

}

@property (nonatomic,copy,readonly) NSUUID * uuid;                                     //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,__weak,readonly) HMDActionSet * actionSet;                        //@synthesize actionSet=_actionSet - In the implementation block
@property (nonatomic,__weak,readonly) HMDCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,copy) id targetValue;                                             //@synthesize targetValue=_targetValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)targetValue;
-(void)setTargetValue:(id)arg1 ;
-(NSUUID *)uuid;
-(HMDCharacteristic *)characteristic;
-(void)replaceCharacteristic:(id)arg1 ;
-(id)initWithCharacteristic:(id)arg1 targetValue:(id)arg2 ;
-(void)configure:(id)arg1 actionSet:(id)arg2 ;
-(HMDActionSet *)actionSet;
@end
