/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:24 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Bridge/COSAboutViewController.h>

@class NSString, NSArray, UIScrollView, UIImageView, UILabel, NSMutableArray;

@interface COSAboutTextViewController : COSAboutViewController {

	NSString* _headerString;
	NSString* _footerString;
	NSArray* _bullets;
	UIScrollView* _scrollView;
	UIImageView* _headerGlyphImageView;
	UILabel* _headerLabel;
	UILabel* _footerLabel;
	NSMutableArray* _bulletLabels;

}

@property (nonatomic,retain) NSString * headerString;                         //@synthesize headerString=_headerString - In the implementation block
@property (nonatomic,retain) NSString * footerString;                         //@synthesize footerString=_footerString - In the implementation block
@property (nonatomic,retain) NSArray * bullets;                               //@synthesize bullets=_bullets - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                       //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UIImageView * headerGlyphImageView;              //@synthesize headerGlyphImageView=_headerGlyphImageView - In the implementation block
@property (nonatomic,retain) UILabel * headerLabel;                           //@synthesize headerLabel=_headerLabel - In the implementation block
@property (nonatomic,retain) UILabel * footerLabel;                           //@synthesize footerLabel=_footerLabel - In the implementation block
@property (nonatomic,retain) NSMutableArray * bulletLabels;                   //@synthesize bulletLabels=_bulletLabels - In the implementation block
-(char)contentViewIsInAdjustedScrollView;
-(void)setBullets:(NSArray *)arg1 ;
-(NSArray *)bullets;
-(UIImageView *)headerGlyphImageView;
-(void)setHeaderGlyphImageView:(UIImageView *)arg1 ;
-(NSMutableArray *)bulletLabels;
-(void)setBulletLabels:(NSMutableArray *)arg1 ;
-(unsigned)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(UIScrollView *)scrollView;
-(void)setHeaderLabel:(UILabel *)arg1 ;
-(UILabel *)headerLabel;
-(NSString *)headerString;
-(NSString *)footerString;
-(void)setHeaderString:(NSString *)arg1 ;
-(void)setFooterString:(NSString *)arg1 ;
-(void)setFooterLabel:(UILabel *)arg1 ;
-(UILabel *)footerLabel;
@end
