/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:33 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Game Center/Game Center-Structs.h>
#import <UIKit/UIControl.h>

@class UIImageView;

@interface GKRatingControl : UIControl {

	float _value;
	UIImageView* _dotsImageView;
	UIImageView* _starsImageView;
	float _trackingValue;
	CGPoint _lastLocation;

}

@property (assign,nonatomic) float value;                               //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) UIImageView * dotsImageView;               //@synthesize dotsImageView=_dotsImageView - In the implementation block
@property (nonatomic,retain) UIImageView * starsImageView;              //@synthesize starsImageView=_starsImageView - In the implementation block
@property (assign,nonatomic) CGPoint lastLocation;                      //@synthesize lastLocation=_lastLocation - In the implementation block
@property (assign,nonatomic) float trackingValue;                       //@synthesize trackingValue=_trackingValue - In the implementation block
-(void)setupImages;
-(float)trackingValue;
-(float)valueForPoint:(CGPoint)arg1 ;
-(void)setTrackingValue:(float)arg1 ;
-(UIImageView *)dotsImageView;
-(void)setDotsImageView:(UIImageView *)arg1 ;
-(UIImageView *)starsImageView;
-(void)setStarsImageView:(UIImageView *)arg1 ;
-(void)setLastLocation:(CGPoint)arg1 ;
-(CGPoint)lastLocation;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(char)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setEnabled:(char)arg1 ;
-(float)value;
-(void)setValue:(float)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(char)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(char)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
@end
