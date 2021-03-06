/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:13 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIView.h>

@class UIBezierPath, UIColor;

@interface TPPathView : UIView {

	UIBezierPath* _path;
	UIColor* _fillColor;

}

@property (nonatomic,retain) UIBezierPath * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;              //@synthesize fillColor=_fillColor - In the implementation block
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(UIBezierPath *)path;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(void)setPath:(UIBezierPath *)arg1 ;
@end

