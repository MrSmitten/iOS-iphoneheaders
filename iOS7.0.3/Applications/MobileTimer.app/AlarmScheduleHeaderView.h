/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileTimer.app/MobileTimer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileTimer/MobileTimer-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableArray, NSDateFormatter;

@interface AlarmScheduleHeaderView : UIView {

	NSMutableArray* _dateLabels;
	NSDateFormatter* _formatter;
	int _firstDayOfWeek;
	int _currentDayOfWeek;
	float _leftMargin;
	float _columnWidth;

}

@property (assign,nonatomic) int firstDayOfWeek;                //@synthesize firstDayOfWeek=_firstDayOfWeek - In the implementation block
@property (assign,nonatomic) int currentDayOfWeek;              //@synthesize currentDayOfWeek=_currentDayOfWeek - In the implementation block
@property (assign,nonatomic) float leftMargin;                  //@synthesize leftMargin=_leftMargin - In the implementation block
@property (assign,nonatomic) float columnWidth;                 //@synthesize columnWidth=_columnWidth - In the implementation block
+(float)defaultHeight;
-(void)handleLocaleChange;
-(int)currentDayOfWeek;
-(void)setCurrentDayOfWeek:(int)arg1 ;
-(void)updateDayLabelValues;
-(id)newDateLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(float)columnWidth;
-(void)setColumnWidth:(float)arg1 ;
-(void)setFirstDayOfWeek:(int)arg1 ;
-(int)firstDayOfWeek;
-(float)leftMargin;
-(void)setLeftMargin:(float)arg1 ;
@end

