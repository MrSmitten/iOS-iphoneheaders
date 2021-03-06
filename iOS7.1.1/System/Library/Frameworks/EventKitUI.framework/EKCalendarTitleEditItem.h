/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:02 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKCalendarEditItem.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITableViewCell;

@interface EKCalendarTitleEditItem : EKCalendarEditItem <UITextFieldDelegate> {

	UITableViewCell* _cell;

}
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(bool)saveStateToCalendar:(id)arg1 ;
-(bool)becomeFirstResponder;
-(bool)textFieldShouldBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(bool)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)reset;
-(void).cxx_destruct;
@end

