/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:24 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKMapTileModel.h>

@interface VKVectorMapModel : VKMapTileModel {

	int _sourceTileZtoStencilOffset;
	BOOL _needsTileStencil;
	vector<std::__1::shared_ptr<ggl::RenderItem>, std::__1::allocator<std::__1::shared_ptr<ggl::RenderItem> > >* _stencilItems;
	vector<std::__1::shared_ptr<ggl::RenderState>, std::__1::allocator<std::__1::shared_ptr<ggl::RenderState> > >* _stencilStates;
	vector<std::__1::shared_ptr<ggl::PolygonSolidFill::Shader::Setup>, std::__1::allocator<std::__1::shared_ptr<ggl::PolygonSolidFill::Shader::Setup> > >* _stencilShaderSetups;

}

@property (assign,nonatomic) int sourceTileZtoStencilOffset;              //@synthesize sourceTileZtoStencilOffset=_sourceTileZtoStencilOffset - In the implementation block
@property (assign,nonatomic) BOOL needsTileStencil;                       //@synthesize needsTileStencil=_needsTileStencil - In the implementation block
+(BOOL)reloadOnStylesheetChange;
+(BOOL)reloadOnActiveTileGroupChange;
-(void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(RenderQueue*)arg3 ;
-(unsigned long long)mapLayerPosition;
-(BOOL)wantsCategorizedSourceTiles;
-(void)_layoutScene:(id)arg1 withContext:(id)arg2 ;
-(void)pushStencilItems:(CommandBuffer*)arg1 tiles:(id)arg2 minZ:(int)arg3 maxZ:(int)arg4 fullyLoaded:(BOOL)arg5 layoutContext:(id)arg6 ;
-(void)pushStencilItems:(CommandBuffer*)arg1 fullyLoaded:(BOOL)arg2 layoutContext:(id)arg3 ;
-(int)sourceTileZtoStencilOffset;
-(void)setSourceTileZtoStencilOffset:(int)arg1 ;
-(BOOL)needsTileStencil;
-(void)setNeedsTileStencil:(BOOL)arg1 ;
@end
