/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:23 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartSeparateCapGrowAnimationClip.h>

@interface TSCH3DChartPieGrowAnimationClip : TSCH3DChartSeparateCapGrowAnimationClip {

	BOOL mUseDiscard;

}

@property (assign,nonatomic) BOOL useDiscard; 
-(BOOL)useDiscard;
-(void)setUseDiscard:(BOOL)arg1 ;
-(id)clipPlaneEffect;
-(void)setupElementBodyForGrowState:(ChartGrowAnimationState*)arg1 info:(const ChartAnimationElementInfo*)arg2 ;
-(BOOL)setupElementCapForGrowState:(ChartGrowAnimationState*)arg1 info:(const ChartAnimationElementInfo*)arg2 ;
@end

