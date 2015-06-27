/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:13 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>
#import <StoreKitUI/SKUIArtworkRequestDelegate.h>

@class SKUIViewElementLayoutContext, SKUITracklistColumnData, SKUITracklistPageComponent, NSString;

@interface SKUITracklistPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate> {

	SKUIViewElementLayoutContext* _cellLayoutContext;
	SKUITracklistColumnData* _columnData;
	int _lastNeedsMoreCount;

}

@property (nonatomic,readonly) SKUITracklistPageComponent * pageComponent; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIEdgeInsets)sectionContentInset;
-(void)dealloc;
-(id)initWithPageComponent:(id)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(void)prefetchResourcesWithReason:(int)arg1 ;
-(char)updateCellWithIndexPath:(id)arg1 itemState:(id)arg2 animated:(char)arg3 ;
-(char)requestLayoutWithReloadReason:(int)arg1 ;
-(void)reloadCellWithIndexPath:(id)arg1 reason:(int)arg2 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(id)cellForIndexPath:(id)arg1 ;
-(void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2 ;
-(int)numberOfCells;
-(void)collectionViewWillDisplayCellForItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1 ;
-(void)collectionViewDidSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionViewWillScrollToOffset:(CGPoint)arg1 visibleRange:(SKUIIndexPathRange)arg2 ;
-(void)willTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)firstAppearanceIndexPath;
-(void)getModalSourceViewForViewElement:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)backgroundColorForIndexPath:(id)arg1 ;
-(void)artworkRequest:(id)arg1 didLoadImage:(id)arg2 ;
-(id)_columnData;
-(void)_enumerateVisibleViewElementsUsingBlock:(/*^block*/id)arg1 ;
-(id)_viewElementForIndex:(int)arg1 ;
-(float)_widthForButtonElements:(id)arg1 ;
-(void)_requestCellLayoutWithColumnData:(id)arg1 ;
-(id)_representativeStringForViewElement:(id)arg1 ;
-(id)_mediaURLWithTrack:(id)arg1 ;
@end
