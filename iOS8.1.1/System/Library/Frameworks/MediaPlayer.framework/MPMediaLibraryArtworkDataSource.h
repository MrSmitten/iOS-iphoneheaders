/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:34 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPArtworkDataSource.h>

@class NSCache, MPArtworkResizeUtility, NSString;

@interface MPMediaLibraryArtworkDataSource : NSObject <MPArtworkDataSource> {

	NSCache* _fallbackCache;
	MPArtworkResizeUtility* _artworkResizeUtility;

}

@property (nonatomic,retain) NSCache * fallbackCache;                                    //@synthesize fallbackCache=_fallbackCache - In the implementation block
@property (nonatomic,retain) MPArtworkResizeUtility * artworkResizeUtility;              //@synthesize artworkResizeUtility=_artworkResizeUtility - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg1 ;
-(BOOL)areRepresentationsForCatalog:(id)arg1 visuallyIdenticalToRepresentationsForCatalog:(id)arg2 ;
-(void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1 ;
-(id)existingRepresentationForArtworkCatalog:(id)arg1 ;
-(BOOL)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2 ;
-(void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_cachedRepresentationForCatalog:(id)arg1 ;
-(BOOL)_isRepresentation:(id)arg1 validForCatalog:(id)arg2 ;
-(CGSize)_bestSizeForArtworkCatalog:(id)arg1 ;
-(id)_representationAtSize:(CGSize)arg1 forCatalog:(id)arg2 ;
-(void)_cacheRepresentation:(id)arg1 forCatalog:(id)arg2 ;
-(BOOL)_isRepresentationSize:(CGSize)arg1 validForFittingSize:(CGSize)arg2 ;
-(id)_resizeArtwork:(id)arg1 toSize:(CGSize)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSCache *)fallbackCache;
-(MPArtworkResizeUtility *)artworkResizeUtility;
-(void)setFallbackCache:(NSCache *)arg1 ;
-(void)setArtworkResizeUtility:(MPArtworkResizeUtility *)arg1 ;
-(id)init;
@end
