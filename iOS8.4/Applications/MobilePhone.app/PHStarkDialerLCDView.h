/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:52 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobilePhone/MobilePhone-Structs.h>
#import <UIKit/UIView.h>
#import <MobilePhone/DialerLCDFieldProtocol.h>

@protocol DialerLCDFieldDelegate;
@class UILabel, NSString;

@interface PHStarkDialerLCDView : UIView <DialerLCDFieldProtocol> {

	UILabel* _mainNumberLabel;
	id<DialerLCDFieldDelegate> _delegate;
	NSString* _unformattedText;

}

@property (retain) UILabel * mainNumberLabel;                                  //@synthesize mainNumberLabel=_mainNumberLabel - In the implementation block
@property (assign,nonatomic) id<DialerLCDFieldDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSString * unformattedText;                                 //@synthesize unformattedText=_unformattedText - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setInCallMode:(char)arg1 ;
-(void)setText:(id)arg1 needsFormat:(char)arg2 ;
-(void)deleteCharacter;
-(char)inCallMode;
-(NSString *)unformattedText;
-(void)setMainNumberLabel:(UILabel *)arg1 ;
-(UILabel *)mainNumberLabel;
-(void)setUnformattedText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<DialerLCDFieldDelegate>)arg1 ;
-(id<DialerLCDFieldDelegate>)delegate;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)text;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(char)arg1 ;
-(void)setLabel:(id)arg1 ;
-(char)highlighted;
@end

