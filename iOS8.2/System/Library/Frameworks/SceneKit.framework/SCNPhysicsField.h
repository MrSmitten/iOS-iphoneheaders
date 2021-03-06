/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:49 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/NSCopying.h>
#import <SceneKit/NSSecureCoding.h>

@class SCNPhysicsWorld, SCNNode;

@interface SCNPhysicsField : NSObject <NSCopying, NSSecureCoding> {

	void* _reserved;
	SCNVector3 _halfExtent;
	float _strength;
	float _falloffExponent;
	float _minimumDistance;
	char _active;
	int _scope;
	char _usesEllipsoidalExtent;
	char _exclusive;
	SCNVector3 _offset;
	SCNVector3 _direction;
	unsigned _categoryBitMask;
	SCNPhysicsWorld* _world;
	SCNNode* _node;
	c3dPhysicsField* _field;

}

@property (assign,nonatomic) float strength; 
@property (assign,nonatomic) float falloffExponent; 
@property (assign,nonatomic) float minimumDistance; 
@property (assign,getter=isActive,nonatomic) char active; 
@property (assign,getter=isExclusive,nonatomic) char exclusive; 
@property (assign,nonatomic) SCNVector3 halfExtent; 
@property (assign,nonatomic) char usesEllipsoidalExtent; 
@property (assign,nonatomic) int scope; 
@property (assign,nonatomic) SCNVector3 offset; 
@property (assign,nonatomic) SCNVector3 direction; 
@property (assign,nonatomic) unsigned categoryBitMask; 
+(id)dragField;
+(id)vortexField;
+(id)radialGravityField;
+(id)linearGravityField;
+(id)noiseFieldWithSmoothness:(float)arg1 animationSpeed:(float)arg2 ;
+(id)turbulenceFieldWithSmoothness:(float)arg1 animationSpeed:(float)arg2 ;
+(id)springField;
+(id)electricField;
+(id)magneticField;
+(id)customFieldWithEvaluationBlock:(/*^block*/id)arg1 ;
+(id)SCNJSExportProtocol;
+(char)supportsSecureCoding;
+(id)field;
-(void)_removeOwner;
-(float)falloffExponent;
-(void)setFalloffExponent:(float)arg1 ;
-(char)isExclusive;
-(void)setExclusive:(char)arg1 ;
-(SCNVector3)halfExtent;
-(void)setHalfExtent:(SCNVector3)arg1 ;
-(char)usesEllipsoidalExtent;
-(void)setUsesEllipsoidalExtent:(char)arg1 ;
-(c3dPhysicsField*)_createField;
-(void)_setupCommonProperties;
-(void)_setOwner:(id)arg1 ;
-(void)_setWorld:(id)arg1 ;
-(id)_owner;
-(c3dPhysicsField*)_handle;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copy;
-(char)isActive;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_commonInit;
-(void)setDirection:(SCNVector3)arg1 ;
-(SCNVector3)direction;
-(void)setOffset:(SCNVector3)arg1 ;
-(SCNVector3)offset;
-(void)setActive:(char)arg1 ;
-(void)setScope:(int)arg1 ;
-(int)scope;
-(void)setMinimumDistance:(float)arg1 ;
-(float)minimumDistance;
-(float)strength;
-(void)setStrength:(float)arg1 ;
-(unsigned)categoryBitMask;
-(void)setCategoryBitMask:(unsigned)arg1 ;
@end

