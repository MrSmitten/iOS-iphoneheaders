/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:07 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartBoundsLayoutSceneDelegate.h>

@interface TSCH3DChartBoundsLayoutSceneDelegatePie : TSCH3DChartBoundsLayoutSceneDelegate
-(ElementRenderPass)renderPassForSceneObject:(id)arg1 ;
-(char)willBeginProcessingSceneObject:(id)arg1 ;
-(void)didEndProcessingSceneObject:(id)arg1 ;
-(char)willProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3 ;
-(void)didProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3 ;
-(char)willProcessElement:(const RenderElementInfo*)arg1 sceneObject:(id)arg2 ;
-(ElementRenderPass)renderPassForElement:(const RenderElementInfo*)arg1 sceneObject:(id)arg2 ;
-(char)willUpdateElementEffectsStatesForElement:(const RenderElementInfo*)arg1 sceneObject:(id)arg2 ;
-(void)didTransformElement:(const RenderElementInfo*)arg1 sceneObject:(id)arg2 ;
-(char)willRenderElement:(const RenderElementInfo*)arg1 sceneObject:(id)arg2 ;
-(char)willSubmitElement:(const RenderElementInfo*)arg1 sceneObject:(id)arg2 ;
-(id)interestedClasses;
@end
