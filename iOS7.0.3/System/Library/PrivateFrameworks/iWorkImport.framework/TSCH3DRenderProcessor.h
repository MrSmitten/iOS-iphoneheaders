/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCH3DRenderProcessor : NSObject
+(id)processor;
-(void)geometry:(id)arg1 ;
-(void)updateRenderState;
-(void)setRenderState:(const RenderState*)arg1 ;
-(RenderHints)renderHints;
-(void)setRenderHints:(const RenderHints*)arg1 ;
-(void)normals:(id)arg1 ;
-(void)texcoords:(id)arg1 ;
-(int)texture:(id)arg1 ;
-(BOOL)canRenderPrefilteredLines;
-(void)popState;
-(void)pushState;
-(id)effects;
-(void)pushRenderState;
-(void)popRenderState;
-(RenderState)renderState;
@end
