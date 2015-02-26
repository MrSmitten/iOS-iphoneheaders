/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:36:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/SpringBoardPlugins/FindMyiPhoneLockScreen.lockbundle/FindMyiPhoneLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class NSString, UIView, UILabel, UIButton, NSLayoutConstraint;

@interface LockScreenView : UIView {

	BOOL _callButtonEnabled;
	NSString* _messageText;
	NSString* _phoneNumber;
	UIView* _containerView;
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	UILabel* _phoneNumberLabel;
	UIButton* _callButton;
	NSLayoutConstraint* _titleTopConstraint;
	NSLayoutConstraint* _titleLeadingConstraint;
	NSLayoutConstraint* _titleTrailingConstraint;
	NSLayoutConstraint* _messageTopConstraint;
	NSLayoutConstraint* _titleToMessageConstraint;
	NSLayoutConstraint* _messageToPhoneNumConstraint;
	NSLayoutConstraint* _phoneNumToCallButtonBottomConstraint;
	NSLayoutConstraint* _phoneNumBottomConstraint;
	NSLayoutConstraint* _callButtonBottomConstraint;

}

@property (nonatomic,retain) NSString * messageText;                                                 //@synthesize messageText=_messageText - In the implementation block
@property (nonatomic,retain) NSString * phoneNumber;                                                 //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (assign,nonatomic) BOOL callButtonEnabled;                                                 //@synthesize callButtonEnabled=_callButtonEnabled - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                                 //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                                                 //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) UILabel * phoneNumberLabel;                                             //@synthesize phoneNumberLabel=_phoneNumberLabel - In the implementation block
@property (nonatomic,retain) UIButton * callButton;                                                  //@synthesize callButton=_callButton - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleTopConstraint;                                //@synthesize titleTopConstraint=_titleTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleLeadingConstraint;                            //@synthesize titleLeadingConstraint=_titleLeadingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleTrailingConstraint;                           //@synthesize titleTrailingConstraint=_titleTrailingConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * messageTopConstraint;                              //@synthesize messageTopConstraint=_messageTopConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleToMessageConstraint;                          //@synthesize titleToMessageConstraint=_titleToMessageConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * messageToPhoneNumConstraint;                       //@synthesize messageToPhoneNumConstraint=_messageToPhoneNumConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * phoneNumToCallButtonBottomConstraint;              //@synthesize phoneNumToCallButtonBottomConstraint=_phoneNumToCallButtonBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * phoneNumBottomConstraint;                          //@synthesize phoneNumBottomConstraint=_phoneNumBottomConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * callButtonBottomConstraint;                        //@synthesize callButtonBottomConstraint=_callButtonBottomConstraint - In the implementation block
-(void)setTitleLeadingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setMessageTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPhoneNumberLabel:(UILabel *)arg1 ;
-(NSLayoutConstraint *)titleLeadingConstraint;
-(NSLayoutConstraint *)phoneNumBottomConstraint;
-(NSLayoutConstraint *)callButtonBottomConstraint;
-(NSLayoutConstraint *)messageToPhoneNumConstraint;
-(void)setMessageText:(NSString *)arg1 ;
-(NSLayoutConstraint *)messageTopConstraint;
-(NSLayoutConstraint *)titleTrailingConstraint;
-(NSLayoutConstraint *)titleTopConstraint;
-(NSLayoutConstraint *)titleToMessageConstraint;
-(UILabel *)phoneNumberLabel;
-(void)setCallButtonEnabled:(BOOL)arg1 ;
-(NSLayoutConstraint *)phoneNumToCallButtonBottomConstraint;
-(UIButton *)callButton;
-(void)setMessageToPhoneNumConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPhoneNumBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(BOOL)callButtonEnabled;
-(void)setCallButtonBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTitleTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTitleTopConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTitleToMessageConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setCallButton:(UIButton *)arg1 ;
-(void)setPhoneNumToCallButtonBottomConstraint:(NSLayoutConstraint *)arg1 ;
-(UIView *)containerView;
-(void)awakeFromNib;
-(void)setContainerView:(UIView *)arg1 ;
-(UILabel *)titleLabel;
-(UILabel *)messageLabel;
-(NSString *)phoneNumber;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(NSString *)messageText;
-(void)setMessageLabel:(UILabel *)arg1 ;
-(void)setPhoneNumber:(NSString *)arg1 ;
@end
