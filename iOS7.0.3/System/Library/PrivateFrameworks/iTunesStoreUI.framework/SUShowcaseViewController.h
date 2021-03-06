/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUViewController.h>
#import <iTunesStoreUI/SKUIShowcaseDelegate.h>

@class SKUIResourceLoader, NSArray, SKUIShowcaseViewController;

@interface SUShowcaseViewController : SUViewController <SKUIShowcaseDelegate> {

	SKUIResourceLoader* _artworkLoader;
	NSArray* _showcaseItems;
	SKUIShowcaseViewController* _underlyingViewController;

}
-(void)dealloc;
-(void)loadView;
-(id)initWithShowcaseDictionary:(id)arg1 ;
-(id)_artworkLoader;
-(void)showcase:(id)arg1 didSelectItem:(id)arg2 atIndex:(int)arg3 ;
@end

