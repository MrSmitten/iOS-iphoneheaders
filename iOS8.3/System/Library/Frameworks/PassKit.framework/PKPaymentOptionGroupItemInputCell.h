/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:04:25 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PassKit/PKPaymentOptionGroupItemCell.h>

@class UITextField;

@interface PKPaymentOptionGroupItemInputCell : PKPaymentOptionGroupItemCell {

	UITextField* _textField;

}

@property (nonatomic,retain) UITextField * textField;              //@synthesize textField=_textField - In the implementation block
-(void)_updateCellContent;
-(void)dealloc;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(UITextField *)textField;
-(void)setTextField:(UITextField *)arg1 ;
@end

