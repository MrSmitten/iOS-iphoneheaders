/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:24 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DTileSceneRenderPipeline.h>

@class TSCH3DSceneRenderPipeline, NSArray;

@interface TSCH3DTileImageSceneRenderPipeline : TSCH3DTileSceneRenderPipeline {

	unsigned long long mTileSize;
	TSCH3DSceneRenderPipeline* mTargetPipeline;
	BOOL mSingleOutputImage;
	NSArray* mImages;
	unsigned long long mTileSamples;
	unsigned long long mTileOverlap;
	BOOL mFlipImages;

}

@property (assign,nonatomic) BOOL singleOutputImage; 
@property (assign,nonatomic) BOOL flipImages; 
@property (assign,nonatomic) unsigned long long tileSize; 
@property (assign,nonatomic) unsigned long long tileSamples; 
@property (assign,nonatomic) unsigned long long tileOverlap; 
@property (nonatomic,retain) TSCH3DSceneRenderPipeline * targetPipeline; 
@property (nonatomic,readonly) NSArray * images; 
-(unsigned long long)tileSamples;
-(void)setTileSamples:(unsigned long long)arg1 ;
-(id)cloneTargetPipeline:(id)arg1 ;
-(BOOL)flipImages;
-(BOOL)processTile:(id)arg1 generator:(id)arg2 ;
-(BOOL)singleOutputImage;
-(void)setSingleOutputImage:(BOOL)arg1 ;
-(void)setFlipImages:(BOOL)arg1 ;
-(unsigned long long)tileOverlap;
-(void)setTileOverlap:(unsigned long long)arg1 ;
-(TSCH3DSceneRenderPipeline *)targetPipeline;
-(void)setTargetPipeline:(TSCH3DSceneRenderPipeline *)arg1 ;
-(void)dealloc;
-(id)init;
-(NSArray *)images;
-(void)setTileSize:(unsigned long long)arg1 ;
-(BOOL)run;
-(unsigned long long)tileSize;
@end

