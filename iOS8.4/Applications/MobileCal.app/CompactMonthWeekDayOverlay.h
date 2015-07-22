/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:45 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class NSDate;

@interface CompactMonthWeekDayOverlay : UIView {

	NSDate* _date;

}

@property (nonatomic,retain) NSDate * date;              //@synthesize date=_date - In the implementation block
+(id)_generateImageForString:(id)arg1 isWeekend:(char)arg2 underlineThickness:(float)arg3 ;
+(id)_cachedImageForString:(id)arg1 isWeekend:(char)arg2 underlineThickness:(float)arg3 ;
+(id)_font;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(void)update;
@end
