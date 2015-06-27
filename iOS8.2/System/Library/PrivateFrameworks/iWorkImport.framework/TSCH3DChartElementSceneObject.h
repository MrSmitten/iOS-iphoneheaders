/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:06 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DSceneObject.h>

@interface TSCH3DChartElementSceneObject : TSCH3DSceneObject
+(char)isHorizontalChart;
+(void)setLowDetailedGeometriesForScene:(id)arg1 ;
+(id)scenePropertiesKey;
+(char)shouldCreateMeshSeriesStorage;
+(TSCH3DScenePart)partWithEnumerator:(id)arg1 layoutSettings:(SCD_Struct_TS333)arg2 ;
+(id)resetSeriesStorage:(id)arg1 forSeries:(id)arg2 ;
-(char)canOptimizePositiveOnlyForGrowAnimation;
-(float)capFudgeForGrowAnimation;
-(float)clipFudgeForGrowAnimation;
-(id)elementPropertiesFromScene:(id)arg1 ;
-(float)chartOpacityForScene:(id)arg1 ;
-(char)shouldDelayForChartOpacity:(float)arg1 ;
-(void)setTransparencyBlendingForProcessor:(id)arg1 ;
-(id)areaClipPlaneEffect;
-(id)scenePropertiesKey;
-(char)growNeedsPerElementAlphaBlendingForDeliveryStyle:(unsigned)arg1 ;
-(void)renderTwoPassGeometry:(char)arg1 processor:(id)arg2 renderBlock:(/*^block*/id)arg3 ;
-(void)addZAxisAnimationToClips:(id)arg1 scene:(id)arg2 ;
-(void)p_addZAxisAnimationToClips:(id)arg1 scene:(id)arg2 zStart:(float)arg3 ;
-(GeometryResource)geometryForSeries:(id)arg1 index:(const tvec2<int>*)arg2 scene:(id)arg3 ;
-(void)postAddDataToGeometryResourceAnimationData:(id)arg1 ;
-(char)delayOpaqueForElementBlendAnimationClip;
-(char)blendOpaqueForElementBlendAnimationClip;
-(char)alwaysRenderForElementBlendAnimationClip;
-(char)shouldUpdateDelayOpaqueForRotationAnimationElementBlendAnimationClip;
-(char)delayOpaqueForRotationAnimationElementBlendAnimationClip;
-(char)shouldUpdateBlendOpaqueForRotationAnimationElementBlendAnimationClip;
-(char)blendOpaqueForRotationAnimationElementBlendAnimationClip;
-(id)modelEnumeratorFromScene:(id)arg1 ;
-(void)getBounds:(id)arg1 ;
-(void)rayPick:(id)arg1 ;
-(float)depthForScene:(id)arg1 ;
-(tvec3<float>)adjustedScaleForInfoChartScale:(const tvec3<float>*)arg1 scene:(id)arg2 ;
-(void)getSelectionKnobsPositions:(id)arg1 ;
-(id)selectionPathForInfo:(id)arg1 scene:(id)arg2 pickedPoint:(id)arg3 ;
-(void)renderLabelsSceneObject:(id)arg1 pipeline:(id)arg2 ;
-(char)applyEffectsForProperties:(id)arg1 series:(id)arg2 index:(const tvec2<int>*)arg3 pipeline:(id)arg4 injectEffectsUsingBlock:(/*^block*/id)arg5 ;
-(ElementRenderPass)render:(const RenderElementInfo*)arg1 pushMatrix:(char)arg2 delayedPass:(char)arg3 ;
-(id)delegateFromScene:(id)arg1 ;
-(char)shouldRenderEachValue;
-(char)shouldRenderSeries:(id)arg1 ;
-(char)p_isRenderPassDelayedForDelegate:(id)arg1 ;
-(void)p_processItems:(id)arg1 processItemsClass:(Class)arg2 ;
-(void)prerenderElement:(const RenderElementInfo*)arg1 ;
-(void)renderElement:(const RenderElementInfo*)arg1 ;
-(void)postrenderElement:(const RenderElementInfo*)arg1 ;
-(void)updateLightingEffectsState:(id)arg1 scene:(id)arg2 ;
-(char)transparencyDepthMask;
-(TSCH3DScenePart)scenePartForScene:(id)arg1 ;
-(tvec2<float>)labelObjectSpacePosition:(unsigned)arg1 axisValue:(double)arg2 intercept:(double)arg3 ;
-(tvec2<float>)labelOffset:(unsigned)arg1 labelSize:(const tvec2<float>*)arg2 textureSize:(const tvec2<float>*)arg3 dataSpaceValue:(float)arg4 ;
-(void)renderSeriesLabelsSceneObject:(id)arg1 pipeline:(id)arg2 ;
-(Class)resizer3DClass;
-(Class)getBounds3DClass;
-(void)render:(id)arg1 ;
@end
