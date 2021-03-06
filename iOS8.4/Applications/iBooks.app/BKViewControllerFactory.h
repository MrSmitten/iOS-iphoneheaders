/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUViewControllerFactory.h>
#import <iBooks/AEStoreViewControllerFactory.h>

@class UIColor, NSString;

@interface BKViewControllerFactory : SUViewControllerFactory <AEStoreViewControllerFactory> {

	UIColor* _pageColor;

}

@property (nonatomic,retain) UIColor * pageColor;                   //@synthesize pageColor=_pageColor - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIColor *)pageColor;
-(void)setPageColor:(UIColor *)arg1 ;
-(id)newPlaceholderViewController;
-(id)newStorePageViewControllerWithSection:(id)arg1 ;
-(id)newViewControllerForPage:(id)arg1 ofType:(int)arg2 ;
-(id)newNetworkLockoutViewControllerWithSection:(id)arg1 ;
@end

