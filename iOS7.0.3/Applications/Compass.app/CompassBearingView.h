/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Compass.app/Compass
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Compass/Compass-Structs.h>
#import <CompassUI/CompassRotatingView.h>

@class CAShapeLayer;

@interface CompassBearingView : CompassRotatingView {

	CAShapeLayer* _bearingDeviationLayer;
	float _bearing;
	float _radius;
	float _innerRadius;
	float _outerRadius;
	float _startAngle;
	float _endAngle;

}

@property (assign,nonatomic) float bearing;                  //@synthesize bearing=_bearing - In the implementation block
@property (assign,nonatomic) float innerRadius;              //@synthesize innerRadius=_innerRadius - In the implementation block
@property (assign,nonatomic) float outerRadius;              //@synthesize outerRadius=_outerRadius - In the implementation block
-(void)updateLayer;
-(float)outerRadius;
-(void)setOuterRadius:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setInnerRadius:(float)arg1 ;
-(float)innerRadius;
-(void)setCompassHeading:(double)arg1 ;
-(void)setBearing:(float)arg1 ;
-(float)bearing;
@end

