/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:59 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIView, UIResponder, UIKeyboard;

@interface UIInputViewSet : NSObject {

	UIView* _inputView;
	UIView* _inputAccessoryView;
	bool _isKeyboard;
	bool _supportsSplit;
	bool _isSplit;
	double _splitHeightDelta;
	UIResponder* _restorableResponder;

}

@property (nonatomic,readonly) UIKeyboard * keyboard; 
@property (nonatomic,retain) UIView * inputView;                             //@synthesize inputView=_inputView - In the implementation block
@property (nonatomic,retain) UIView * inputAccessoryView;                    //@synthesize inputAccessoryView=_inputAccessoryView - In the implementation block
@property (nonatomic,readonly) CGRect inputAccessoryViewBounds; 
@property (nonatomic,readonly) CGRect inputViewBounds; 
@property (getter=isEmpty,nonatomic,readonly) bool empty; 
@property (nonatomic,readonly) bool supportsSplit;                           //@synthesize supportsSplit=_supportsSplit - In the implementation block
@property (nonatomic,readonly) bool isSplit;                                 //@synthesize isSplit=_isSplit - In the implementation block
@property (nonatomic,readonly) bool inputViewKeyboardCanSplit; 
@property (assign,nonatomic) UIResponder * restorableResponder;              //@synthesize restorableResponder=_restorableResponder - In the implementation block
@property (nonatomic,readonly) UIView * layeringView; 
@property (assign,nonatomic) double splitHeightDelta;                        //@synthesize splitHeightDelta=_splitHeightDelta - In the implementation block
+(id)emptyInputSet;
+(id)inputSetWithKeyboardAndAccessoryView:(id)arg1 ;
+(id)inputSetWithInputView:(id)arg1 accessoryView:(id)arg2 ;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(id)description;
-(bool)isEmpty;
-(bool)containsView:(id)arg1 ;
-(id)inputView;
-(id)inputAccessoryView;
-(void)setInputView:(id)arg1 ;
-(void)setInputAccessoryView:(id)arg1 ;
-(void)_setRenderConfig:(id)arg1 ;
-(bool)isSplit;
-(bool)supportsSplit;
-(void)refreshPresentation;
-(id)keyboard;
-(bool)visible;
-(id)_themableInputAccessoryView;
-(long long)keyboardOrientation:(id)arg1 ;
-(bool)inputViewKeyboardCanSplit;
-(bool)_inputViewIsSplit;
-(double)splitHeightDelta;
-(bool)_accessorySuppressesShadow;
-(id)layeringView;
-(CGRect)inputViewBounds;
-(CGRect)_leftInputViewSetFrame;
-(CGRect)_rightInputViewSetFrame;
-(bool)__isCKAccessoryView;
-(id)_splittableInputAccessoryView;
-(CGRect)inputAccessoryViewBounds;
-(bool)inSyncWithOrientation:(long long)arg1 forKeyboard:(id)arg2 ;
-(void)setSplitHeightDelta:(double)arg1 ;
-(void)_beginSplitTransitionIfNeeded;
-(void)_setSplitProgress:(double)arg1 ;
-(void)_endSplitTransitionIfNeeded;
-(bool)isStrictSupersetOfViewSet:(id)arg1 ;
-(bool)containsResponder:(id)arg1 ;
-(bool)canAnimateToInputViewSet:(id)arg1 ;
-(bool)usesKeyClicks;
-(void)setRestorableResponder:(id)arg1 ;
-(id)restorableResponder;
-(bool)_inputViewSetSupportsSplit;
-(id)initWithInputView:(id)arg1 accessoryView:(id)arg2 isKeyboard:(bool)arg3 ;
-(bool)_inputViewIsVisible;
-(bool)_inputViewSupportsSplit;
-(bool)_inputAccessoryViewSupportsSplit;
@end
