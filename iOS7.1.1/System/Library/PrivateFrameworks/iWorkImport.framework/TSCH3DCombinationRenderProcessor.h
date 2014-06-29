/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:26 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DRetargetRenderProcessor.h>

@class NSIndexSet, TSCH3DShaderEffects, TSCH3DShaderEffectsStates;

@interface TSCH3DCombinationRenderProcessor : TSCH3DRetargetRenderProcessor {

	NSIndexSet* mEnabled;
	StateStack<glm::detail::tmat4x4<float>, 8> mTransformStack;
	tmat4x4<float> mProjection;
	bool mTransformChanged;
	bool mProjectionChanged;
	StateStack<TSCH3D::ObjectState, 6>* mObjectStateStack;
	TSCH3DShaderEffects* mEffects;
	TSCH3DShaderEffectsStates* mShaderEffectsStates;

}

@property (nonatomic,readonly) bool transformChanged; 
@property (nonatomic,readonly) bool projectionChanged; 
+(id)processorWithOriginal:(id)arg1 enableTypes:(id)arg2 ;
-(StateStack<TSCH3D::ObjectState, 6>*)objectStateStack;
-(void)resetBuffers;
-(tmat4x4<float>*)projectionTransform;
-(bool)transformChanged;
-(id)effectsStates;
-(void)popMatrix;
-(void)pushMatrix;
-(void)projection:(tmat4x4<float>*)arg1 ;
-(id)initWithOriginal:(id)arg1 ;
-(void)translate:(tvec3<float>*)arg1 ;
-(void)copyProjectionInto:(tmat4x4<float>*)arg1 ;
-(void)copyTransformInto:(tmat4x4<float>*)arg1 ;
-(bool)projectionChanged;
-(id)initWithOriginal:(id)arg1 enableTypes:(id)arg2 ;
-(bool)objectStateEnabled;
-(bool)shaderEnabled;
-(void)resetTransformChangeFlags;
-(bool)matrixEnabled;
-(void)popState;
-(void)dealloc;
-(void)replace:(tmat4x4<float>*)arg1 ;
-(id).cxx_construct;
-(void).cxx_destruct;
-(void)pushState;
-(tmat4x4<float>*)currentTransform;
-(id)effects;
-(void)scale:(tvec3<float>*)arg1 ;
-(void)multiply:(tmat4x4<float>*)arg1 ;
@end
