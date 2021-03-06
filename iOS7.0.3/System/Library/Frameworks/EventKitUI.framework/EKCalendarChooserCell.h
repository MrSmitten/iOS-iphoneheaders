/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImage, UIImageView, UILabel;

@interface EKCalendarChooserCell : UITableViewCell {

	BOOL _showCheckmarksOnLeft;
	BOOL _checked;
	BOOL _shouldAnimate;
	BOOL _showsColorDot;
	UIImage* _colorDot;
	UIImage* _colorDotHighlighted;
	UIImageView* _colorDotView;
	UIImageView* _checkmarkView;
	UILabel* _customTitleTextLabel;
	UILabel* _customDetailTextLabel;

}

@property (assign,nonatomic) BOOL showCheckmarksOnLeft;              //@synthesize showCheckmarksOnLeft=_showCheckmarksOnLeft - In the implementation block
@property (assign,nonatomic) BOOL checked;                           //@synthesize checked=_checked - In the implementation block
@property (assign,nonatomic) BOOL shouldAnimate;                     //@synthesize shouldAnimate=_shouldAnimate - In the implementation block
@property (assign,nonatomic) BOOL showsColorDot;                     //@synthesize showsColorDot=_showsColorDot - In the implementation block
-(void)setContentAlpha:(float)arg1 ;
-(BOOL)showCheckmarksOnLeft;
-(void)setShouldAnimate:(BOOL)arg1 ;
-(void)setShowCheckmarksOnLeft:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setShowCheckmarksOnLeft:(BOOL)arg1 ;
-(void)setShowsColorDot:(BOOL)arg1 ;
-(void)setColorDotImage:(id)arg1 ;
-(void)setColorDotHighlightedImage:(id)arg1 ;
-(BOOL)showsColorDot;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setChecked:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(BOOL)shouldAnimate;
-(void).cxx_destruct;
-(BOOL)checked;
@end

