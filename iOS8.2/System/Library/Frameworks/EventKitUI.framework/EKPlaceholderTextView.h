/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:27 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UITextView.h>

@class UILabel;

@interface EKPlaceholderTextView : UITextView {

	UILabel* _placeholder;
	char _showingPlaceholder;

}
-(void)_updatePlaceholder;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setText:(id)arg1 ;
-(void)setPlaceholder:(id)arg1 ;
-(void)textChanged:(id)arg1 ;
-(id)placeholder;
-(id)_placeholderLabel;
@end
