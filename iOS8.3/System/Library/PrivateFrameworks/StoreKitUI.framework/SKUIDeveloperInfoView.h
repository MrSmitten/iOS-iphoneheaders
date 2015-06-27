/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:38:33 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class SKUIClientContext, SKUIDeveloperInfo, UIView, SKUIProductInformationView, NSMutableArray;

@interface SKUIDeveloperInfoView : UIView {

	SKUIClientContext* _clientContext;
	SKUIDeveloperInfo* _developerInfo;
	UIView* _infoSeparatorView;
	SKUIProductInformationView* _infoView;
	NSMutableArray* _lineViews;

}

@property (nonatomic,readonly) SKUIClientContext * clientContext;              //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) SKUIDeveloperInfo * developerInfo;              //@synthesize developerInfo=_developerInfo - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(SKUIClientContext *)clientContext;
-(id)initWithDeveloperInfo:(id)arg1 clientContext:(id)arg2 ;
-(SKUIDeveloperInfo *)developerInfo;
@end
