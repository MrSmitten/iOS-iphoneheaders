/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:30 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHRendererLayer.h>

@interface TSCHPieWedgeRendererLayer : TSCHRendererLayer {

	CGPoint mLayerStartPoint;
	float mLayerStartExplosion;

}

@property (assign,nonatomic) CGPoint layerStartPoint; 
@property (nonatomic,readonly) float layerStartExplosion; 
-(CGPoint)layerStartPoint;
-(float)layerStartExplosion;
-(void)setLayerStartPoint:(CGPoint)arg1 ;
-(id)description;
-(void)setExplosion:(id)arg1 ;
@end
