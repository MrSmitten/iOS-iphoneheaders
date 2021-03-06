/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface UIStatusBarCorners : UIView {

	int _cornerStyle;
	int _cornerAlignment;
	UIView* _leftCorner;
	UIView* _rightCorner;

}
+(double)cornerRadius;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(int)cornerStyle;
-(id)initForAlignment:(int)arg1 style:(int)arg2 ;
-(id)_imageForCornerWithStyle:(int)arg1 ;
@end

