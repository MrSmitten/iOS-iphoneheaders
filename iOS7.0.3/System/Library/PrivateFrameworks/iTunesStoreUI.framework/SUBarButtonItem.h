/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIBarButtonItem.h>

@class UIView, SUUIAppearance, UINavigationItem, NSString, SUTouchCaptureView;

@interface SUBarButtonItem : UIBarButtonItem {

	UIView* _accessoryView;
	UIEdgeInsets _accessoryViewInsets;
	SUUIAppearance* _confirmationAppearance;
	UINavigationItem* _lastNavigationItem;
	NSString* _preConfirmationTitle;
	SUTouchCaptureView* _touchCaptureView;

}

@property (nonatomic,retain) UIView * accessoryView;                                               //@synthesize accessoryView=_accessoryView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets accessoryViewInsets;                                     //@synthesize accessoryViewInsets=_accessoryViewInsets - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading; 
@property (getter=isShowingConfirmation,nonatomic,readonly) BOOL showingConfirmation; 
+(Class)classForNavigationButton;
-(void)setLoading:(BOOL)arg1 ;
-(BOOL)isShowingConfirmation;
-(void)dealloc;
-(id)createViewForNavigationItem:(id)arg1 ;
-(BOOL)isLoading;
-(void)setAccessoryView:(id)arg1 ;
-(id)accessoryView;
-(void)setAccessoryViewInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)accessoryViewInsets;
-(void)configureFromScriptButton:(id)arg1 ;
-(void)hideConfirmationWithAppearance:(id)arg1 animated:(BOOL)arg2 ;
-(void)showConfirmationWithTitle:(id)arg1 appearance:(id)arg2 animated:(BOOL)arg3 ;
-(void)_touchCaptureAction:(id)arg1 ;
-(void)_removeTouchCaptureView;
-(void)_setTitle:(id)arg1 isConfirmation:(BOOL)arg2 appearance:(id)arg3 animated:(BOOL)arg4 ;
-(id)_navigationButton;
-(void)_updateViewForAccessoryChange;
-(void)_addTouchCaptureViewForNavigationButton:(id)arg1 ;
@end

