/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:41 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>

@class NSArray, UIActionSheet, MFPopoverController, UIBarButtonItem, UIView, NSMutableArray, NSString;

@interface MFMailPopoverManager : NSObject <UIPopoverPresentationControllerDelegate, UIActionSheetDelegate> {

	id _delegate;
	id _actionSheetDelegate;
	NSArray* _explicitPassthroughViews;
	UIActionSheet* _actionSheet;
	MFPopoverController* _popoverController;
	UIBarButtonItem* _currentBarButtonItem;
	UIView* _currentView;
	CGRect _currentRect;
	NSMutableArray* _passThroughContexts;
	unsigned _currentArrowDirections;
	double _popoverDismissalEnd;
	char _popoverBeingHiddenDuringRotation;
	char _isHandlingActionSheetClick;
	char _popoverDismissalIsDelayed;
	char _popoverDismissalShouldBeAnimated;

}

@property (assign,nonatomic) char popoverBeingHiddenDuringRotation;                //@synthesize popoverBeingHiddenDuringRotation=_popoverBeingHiddenDuringRotation - In the implementation block
@property (assign,nonatomic) char rasterizePopoverLayer; 
@property (nonatomic,retain) MFPopoverController * popoverController;              //@synthesize popoverController=_popoverController - In the implementation block
@property (nonatomic,retain) UIActionSheet * actionSheet;                          //@synthesize actionSheet=_actionSheet - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * currentBarButtonItem;               //@synthesize currentBarButtonItem=_currentBarButtonItem - In the implementation block
@property (nonatomic,retain) UIView * currentView;                                 //@synthesize currentView=_currentView - In the implementation block
@property (assign,nonatomic) CGRect currentRect;                                   //@synthesize currentRect=_currentRect - In the implementation block
@property (assign,nonatomic) unsigned currentArrowDirections;                      //@synthesize currentArrowDirections=_currentArrowDirections - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)managerForWindow:(id)arg1 createIfNeeded:(char)arg2 ;
+(void)enumerateManagersUsingBlock:(/*^block*/id)arg1 ;
+(void)dismissPopover:(id)arg1 animated:(char)arg2 ;
-(void)presentPopover:(id)arg1 fromRect:(CGRect)arg2 inView:(id)arg3 direction:(unsigned)arg4 allowInteractionWithViews:(id)arg5 withDelegate:(id)arg6 animated:(char)arg7 ;
-(char)popoverBeingHiddenDuringRotation;
-(void)popoverControllerDidDismissPopover:(id)arg1 isUserAction:(char)arg2 ;
-(char)popoverShowing;
-(char)_isEquivalentToCurrentPopover:(id)arg1 ;
-(void)_cleanupCurrentPopover;
-(void)setCurrentBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)_willPresentPopover:(id)arg1 ;
-(id)_allPassthroughViewsIncludingViews:(id)arg1 excludingViews:(id)arg2 ;
-(void)setCurrentView:(UIView *)arg1 ;
-(void)_configureDelegate:(id)arg1 forPopoverController:(id)arg2 ;
-(void)setCurrentArrowDirections:(unsigned)arg1 ;
-(UIBarButtonItem *)currentBarButtonItem;
-(unsigned)currentArrowDirections;
-(void)setCurrentRect:(CGRect)arg1 ;
-(UIView *)currentView;
-(CGRect)currentRect;
-(void)_dismissPopoverNow;
-(void)_popoverDismissalDidFinish;
-(id)_currentPassthroughProviders;
-(char)_delegateSupportsRotation;
-(void)setPopoverBeingHiddenDuringRotation:(char)arg1 ;
-(void)presentPopover:(id)arg1 fromBarButtonItem:(id)arg2 animated:(char)arg3 ;
-(void)presentPopover:(id)arg1 fromView:(id)arg2 animated:(char)arg3 ;
-(void)presentPopover:(id)arg1 fromBarButtonItem:(id)arg2 withDelegate:(id)arg3 animated:(char)arg4 ;
-(void)dismissPopoverAfterDelay:(double)arg1 animated:(char)arg2 ;
-(char)popoverDismissalIsDelayed;
-(double)delayUntilPopoverFinishesDismissing;
-(void)addPassthroughViewProvider:(id)arg1 ;
-(void)removePassthroughViewProvider:(id)arg1 ;
-(void)beginModalPassthroughContext;
-(void)endModalPassthroughContext;
-(void)addPassthroughView:(id)arg1 ;
-(void)removePassthroughView:(id)arg1 ;
-(char)rasterizePopoverLayer;
-(void)setRasterizePopoverLayer:(char)arg1 ;
-(void)dealloc;
-(char)respondsToSelector:(SEL)arg1 ;
-(id)init;
-(id)_init;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)actionSheetCancel:(id)arg1 ;
-(void)willPresentActionSheet:(id)arg1 ;
-(void)didPresentActionSheet:(id)arg1 ;
-(void)actionSheet:(id)arg1 willDismissWithButtonIndex:(int)arg2 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(int)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(void)dismissPopoverAnimated:(char)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)willRotate;
-(void)didRotate;
-(void)setPopoverController:(MFPopoverController *)arg1 ;
-(MFPopoverController *)popoverController;
-(id)popover;
-(UIActionSheet *)actionSheet;
-(void)setActionSheet:(UIActionSheet *)arg1 ;
@end
