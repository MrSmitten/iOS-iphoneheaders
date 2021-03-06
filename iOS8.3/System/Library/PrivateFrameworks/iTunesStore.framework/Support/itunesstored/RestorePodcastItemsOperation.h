/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:37:24 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSArray, NSMutableArray;

@interface RestorePodcastItemsOperation : ISOperation {

	NSArray* _downloadItems;
	NSMutableArray* _responses;

}

@property (readonly) NSArray * downloadItems; 
@property (assign) id<RestorePodcastItemsOperationDelegate> delegate; 
@property (readonly) NSArray * responses; 
-(id)initWithDownloadItems:(id)arg1 ;
-(id)_newResponseWithItems:(id)arg1 error:(id)arg2 ;
-(void)_addResponse:(id)arg1 ;
-(NSArray *)downloadItems;
-(id)_newURLOperationForItem:(id)arg1 error:(id*)arg2 ;
-(id)_addResponseForItem:(id)arg1 operation:(id)arg2 ;
-(void)dealloc;
-(void)run;
-(NSArray *)responses;
@end

