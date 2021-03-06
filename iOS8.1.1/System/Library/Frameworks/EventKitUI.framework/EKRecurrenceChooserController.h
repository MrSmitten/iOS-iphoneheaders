/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:10 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol EKRecurrenceChooserControllerDelegate;
@class NSDate;

@interface EKRecurrenceChooserController : NSObject {

	id<EKRecurrenceChooserControllerDelegate> _delegate;
	NSDate* _date;

}

@property (__weak) id<EKRecurrenceChooserControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) int frequency; 
@property (copy) NSDate * date;                                                     //@synthesize date=_date - In the implementation block
+(int)dayFromNumber:(long long)arg1 ;
-(id)initWithDate:(id)arg1 ;
-(id)cellForRow:(long long)arg1 ;
-(double)heightForRow:(long long)arg1 ;
-(BOOL)drawBackgroundForRow:(long long)arg1 ;
-(void)updateRecurrenceRuleBuilder:(id)arg1 ;
-(void)updateFromRecurrenceRule:(id)arg1 ;
-(void)notifyDelegate;
-(void)rowTapped:(long long)arg1 ;
-(id)startDateComponents:(unsigned long long)arg1 ;
-(void)setDelegate:(id<EKRecurrenceChooserControllerDelegate>)arg1 ;
-(id<EKRecurrenceChooserControllerDelegate>)delegate;
-(NSDate *)date;
-(long long)numberOfRows;
-(int)frequency;
-(void)setDate:(NSDate *)arg1 ;
@end

