/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:21 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol UITextInputAdditions
@property (getter=isEditable,nonatomic,readonly) BOOL editable; 
@property (getter=isEditing,nonatomic,readonly) BOOL editing; 
@property (getter=_caretRect,nonatomic,readonly) CGRect caretRect; 
@optional
-(BOOL)_useGesturesForEditableContent;
-(id)_textInputViewForAddingGestureRecognizers;

@required
-(BOOL)isEditable;
-(BOOL)isEditing;
-(id)interactionAssistant;
-(id)textInputView;
-(void)beginSelectionChange;
-(void)endSelectionChange;
-(CGRect*)_caretRect;
@end
