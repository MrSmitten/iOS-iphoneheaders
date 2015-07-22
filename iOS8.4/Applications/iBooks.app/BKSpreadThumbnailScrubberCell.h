/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <iBooks/BKThumbnailScrubberCell.h>

@class UIImage, UIImageView;

@interface BKSpreadThumbnailScrubberCell : BKThumbnailScrubberCell {

	char _shouldHaveLeftImage;
	char _shouldHaveRightImage;
	UIImage* _leftImage;
	UIImage* _rightImage;
	UIImageView* _leftImageView;
	UIImageView* _rightImageView;

}

@property (assign,nonatomic) char shouldHaveLeftImage;               //@synthesize shouldHaveLeftImage=_shouldHaveLeftImage - In the implementation block
@property (assign,nonatomic) char shouldHaveRightImage;              //@synthesize shouldHaveRightImage=_shouldHaveRightImage - In the implementation block
@property (nonatomic,retain) UIImage * leftImage; 
@property (nonatomic,retain) UIImage * rightImage; 
-(void)setRightImage:(UIImage *)arg1 ;
-(void)setShouldHaveRightImage:(char)arg1 ;
-(void)setShouldHaveLeftImage:(char)arg1 ;
-(char)shouldHaveLeftImage;
-(char)shouldHaveRightImage;
-(UIImage *)rightImage;
-(void)setLeftImage:(UIImage *)arg1 ;
-(UIImage *)leftImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
@end
