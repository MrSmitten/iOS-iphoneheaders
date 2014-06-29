/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:03 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/_UIBasicAnimationFactory.h>

@class UIKBRenderConfig, UIDictationView;

@interface UIKeyboardDicationBackgroundGradientView : UIView <_UIBasicAnimationFactory> {

	UIKBRenderConfig* _renderConfig;
	UIDictationView* _dictationView;

}

@property (nonatomic,retain) UIKBRenderConfig * renderConfig;              //@synthesize renderConfig=_renderConfig - In the implementation block
@property (assign,nonatomic) UIDictationView * dictationView;              //@synthesize dictationView=_dictationView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2 ;
-(id)_timingFunctionForAnimation;
-(id)renderConfig;
-(void)setRenderConfig:(id)arg1 ;
-(id)dictationView;
-(CGRect)_backgroundFillFrame;
-(id)backgroundColorForCurrentRenderConfig;
-(void)startColorTransitionIn;
-(void)startColorTransitionOut;
-(void)setDictationView:(id)arg1 ;
@end
