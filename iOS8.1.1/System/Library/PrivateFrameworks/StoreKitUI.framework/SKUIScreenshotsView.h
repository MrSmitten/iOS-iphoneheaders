/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:04 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface SKUIScreenshotsView : UIView {

	UIView* _primaryView;
	UIView* _separatorView;

}

@property (nonatomic,retain) UIView * primaryView;              //@synthesize primaryView=_primaryView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setPrimaryView:(UIView *)arg1 ;
-(UIView *)primaryView;
@end
