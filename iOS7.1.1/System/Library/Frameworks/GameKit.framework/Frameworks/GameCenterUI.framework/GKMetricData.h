/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:19 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class GKGridLayoutMetrics, NSMutableArray, GKSectionMetrics, NSString;

@interface GKMetricData : NSObject {

	GKGridLayoutMetrics* _metrics;
	unsigned long long _currentMaxVisibleItemCount;
	unsigned long long _filteredTotalItemCount;
	NSMutableArray* _headerPinnableAttributes;
	NSMutableArray* _footerPinnableAttributes;

}

@property (nonatomic,readonly) GKSectionMetrics * sectionMetrics; 
@property (nonatomic,retain) GKGridLayoutMetrics * metrics;                              //@synthesize metrics=_metrics - In the implementation block
@property (nonatomic,readonly) NSString * layoutKey; 
@property (assign,nonatomic) unsigned long long currentMaxVisibleItemCount;              //@synthesize currentMaxVisibleItemCount=_currentMaxVisibleItemCount - In the implementation block
@property (assign,nonatomic) unsigned long long filteredTotalItemCount;                  //@synthesize filteredTotalItemCount=_filteredTotalItemCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * headerPinnableAttributes;                  //@synthesize headerPinnableAttributes=_headerPinnableAttributes - In the implementation block
@property (nonatomic,retain) NSMutableArray * footerPinnableAttributes;                  //@synthesize footerPinnableAttributes=_footerPinnableAttributes - In the implementation block
-(id)_gkDescriptionWithChildren:(int)arg1 ;
-(id)localDescription;
-(id)layoutKey;
-(id)sectionMetrics;
-(void)setMetrics:(id)arg1 ;
-(void)setHeaderPinnableAttributes:(id)arg1 ;
-(void)setFooterPinnableAttributes:(id)arg1 ;
-(void)addAttributes:(id)arg1 forLocation:(unsigned long long)arg2 ;
-(unsigned long long)currentMaxVisibleItemCount;
-(void)setCurrentMaxVisibleItemCount:(unsigned long long)arg1 ;
-(unsigned long long)filteredTotalItemCount;
-(void)setFilteredTotalItemCount:(unsigned long long)arg1 ;
-(id)headerPinnableAttributes;
-(id)footerPinnableAttributes;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)metrics;
@end
