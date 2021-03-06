/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:44 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSString;

@interface ABStarkNoContentBannerView : UIView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;

}

@property (nonatomic,retain) NSString * titleString; 
@property (nonatomic,retain) NSString * subtitleString; 
@property (retain) UILabel * titleLabel;                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (retain) UILabel * subtitleLabel;                          //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(UILabel *)titleLabel;
-(NSString *)subtitleString;
-(UILabel *)subtitleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(void)setSubtitleString:(NSString *)arg1 ;
-(NSString *)titleString;
-(void)setTitleString:(NSString *)arg1 ;
@end

