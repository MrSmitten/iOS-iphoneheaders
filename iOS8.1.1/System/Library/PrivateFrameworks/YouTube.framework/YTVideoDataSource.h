/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:58 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, YTSearchRequest, NSError;

@interface YTVideoDataSource : NSObject {

	BOOL _hasLoaded;
	NSMutableArray* _videos;
	YTSearchRequest* _searchRequest;
	unsigned _startIndex;
	unsigned _videosRemaining;
	NSError* _lastError;

}
+(BOOL)shouldRemoveOldDefaults;
+(void)setShouldRemoveOldDefaults;
+(void)saveDataSources;
+(id)sharedDataSource;
-(void)loadMore;
-(void)dealloc;
-(void)reloadData;
-(id)init;
-(BOOL)isLoading;
-(id)lastError;
-(void)_didChange;
-(id)videos;
-(BOOL)hasLoaded;
-(void)searchRequest:(id)arg1 receivedVideos:(id)arg2 startIndex:(unsigned)arg3 videosRemaining:(unsigned)arg4 ;
-(void)searchRequest:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_saveToDefaults;
-(void)_searchRequestLoadingStatusDidChange;
-(void)_setLastError:(id)arg1 ;
-(id)_deprecatedVideosDefaultsKey;
-(void)_setVideos:(id)arg1 ;
-(void)addVideos:(id)arg1 toTop:(BOOL)arg2 ;
-(void)_clearVideos;
-(unsigned)videosRemaining;
-(unsigned)maxVideosToSave;
-(void)removeVideoAtIndex:(int)arg1 ;
-(void)removeAllVideos;
-(void)loadFromDefaults;
@end

