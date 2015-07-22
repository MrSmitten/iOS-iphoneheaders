/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:51 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIControl.h>

@class UIImageView, UIImage;

@interface SKUIStarRatingControl : UIControl {

	long long _previousUserRating;
	UIImageView* _emptyStarsImageView;
	UIImageView* _filledStarsImageView;
	long long _userRating;
	float _starSpacing;
	float _starWidth;

}

@property (nonatomic,retain) UIImage * emptyStarsImage; 
@property (nonatomic,retain) UIImage * filledStarsImage; 
@property (assign,nonatomic) long long userRating;                    //@synthesize userRating=_userRating - In the implementation block
@property (assign,nonatomic) float starSpacing;                       //@synthesize starSpacing=_starSpacing - In the implementation block
@property (assign,nonatomic) float starWidth;                         //@synthesize starWidth=_starWidth - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setUserRating:(long long)arg1 ;
-(long long)userRating;
-(void)setStarWidth:(float)arg1 ;
-(void)setEmptyStarsImage:(UIImage *)arg1 ;
-(void)setFilledStarsImage:(UIImage *)arg1 ;
-(void)_updateUserRatingWithTouch:(id)arg1 ;
-(float)starWidth;
-(float)starSpacing;
-(UIImage *)emptyStarsImage;
-(UIImage *)filledStarsImage;
-(void)setStarSpacing:(float)arg1 ;
@end
