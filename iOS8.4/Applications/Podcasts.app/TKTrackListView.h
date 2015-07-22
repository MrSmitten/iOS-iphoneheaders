/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:08 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/TKView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class NSMutableDictionary, UIView, UITableView, NSString, TKTracklistComponent;

@interface TKTrackListView : TKView <UITableViewDataSource, UITableViewDelegate> {

	NSMutableDictionary* artworkCache;
	UIView* _headerView;
	char _explicitDisabled;
	char _connectionReachable;
	char _reloading;
	UITableView* _table;
	NSMutableDictionary* _downloadingItems;
	NSString* _nowPlayingGuid;
	NSString* _nowPlayingUrl;
	float _headerHeight;

}

@property (retain) UITableView * table;                                 //@synthesize table=_table - In the implementation block
@property (retain) TKTracklistComponent * component; 
@property (retain) NSMutableDictionary * downloadingItems;              //@synthesize downloadingItems=_downloadingItems - In the implementation block
@property (retain) NSString * nowPlayingGuid;                           //@synthesize nowPlayingGuid=_nowPlayingGuid - In the implementation block
@property (retain) NSString * nowPlayingUrl;                            //@synthesize nowPlayingUrl=_nowPlayingUrl - In the implementation block
@property (assign,nonatomic) char explicitDisabled;                     //@synthesize explicitDisabled=_explicitDisabled - In the implementation block
@property (assign,nonatomic) char connectionReachable;                  //@synthesize connectionReachable=_connectionReachable - In the implementation block
@property (assign) float headerHeight;                                  //@synthesize headerHeight=_headerHeight - In the implementation block
@property (assign) char reloading;                                      //@synthesize reloading=_reloading - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGRect)rectForBounds:(CGRect)arg1 withTop:(float)arg2 withTheme:(id)arg3 withComponent:(id)arg4 ;
-(void)setConnectionReachable:(char)arg1 ;
-(void)setExplicitDisabled:(char)arg1 ;
-(void)updateDownloadingItem:(id)arg1 ;
-(void)setNowPlayingUrl:(NSString *)arg1 ;
-(void)updatePlayingGuid:(id)arg1 ;
-(void)updatePlayingUrl:(id)arg1 ;
-(void)removeDownloadingItem:(id)arg1 ;
-(void)setNowPlayingGuid:(NSString *)arg1 ;
-(NSString *)nowPlayingGuid;
-(NSString *)nowPlayingUrl;
-(void)willRotateToInterfaceOrientation:(int)arg1 withFrame:(CGRect)arg2 ;
-(id)initWithFrame:(CGRect)arg1 withComponent:(id)arg2 withTheme:(id)arg3 ;
-(void)accessoryClickedWithCell:(id)arg1 ;
-(void)downloadActionForItem:(int)arg1 ;
-(void)pauseDownloadActionForItem:(int)arg1 ;
-(char)explicitDisabled;
-(char)connectionReachable;
-(char)reloading;
-(void)setDownloadingItems:(NSMutableDictionary *)arg1 ;
-(id)createCellForTableView:(id)arg1 ;
-(void)updateCell:(id)arg1 withDownloadState:(id)arg2 ;
-(id)cellForGuid:(id)arg1 ;
-(NSMutableDictionary *)downloadingItems;
-(void)setReloading:(char)arg1 ;
-(void)addDownloadingItem:(id)arg1 ;
-(void)setupObservers;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)reload;
-(UITableView *)table;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(float)headerHeight;
-(void)setHeaderHeight:(float)arg1 ;
-(void)deselectAll;
-(void)setTable:(UITableView *)arg1 ;
@end
