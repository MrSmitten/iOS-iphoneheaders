/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:08 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface SUCellConfigurationCache : NSObject {

	id _cellContext;
	NSMutableArray* _configurations;

}

@property (nonatomic,retain) id cellContext;              //@synthesize cellContext=_cellContext - In the implementation block
-(void)dealloc;
-(void)reset;
-(void)resetLayoutCaches;
-(id)configurationForRow:(unsigned long long)arg1 ;
-(id)cellContext;
-(void)setCellContext:(id)arg1 ;
-(id)initWithClass:(Class)arg1 tableHeight:(double)arg2 ;
@end
