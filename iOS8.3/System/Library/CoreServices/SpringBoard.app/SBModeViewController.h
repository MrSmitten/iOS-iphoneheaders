/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:37 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>
#import <SpringBoard/SBUISizeObservingViewDelegate.h>
#import <SpringBoard/_UISettingsKeyPathObserver.h>

@protocol SBBulletinActionHandler;
@class SBBulletinObserverViewController, UIScrollView, UIView, SBModeControlManager, UISwipeGestureRecognizer, SBNotificationSeparatorView, NSArray, NSString;

@interface SBModeViewController : UIViewController <SBUISizeObservingViewDelegate, _UISettingsKeyPathObserver> {

	id<SBBulletinActionHandler> _delegate;
	SBBulletinObserverViewController* _selectedViewController;
	SBBulletinObserverViewController* _deselectedViewController;
	UIScrollView* _contentView;
	UIView* _headerView;
	SBModeControlManager* _modeControl;
	UISwipeGestureRecognizer* _leftSwipeGestureRecognizer;
	UISwipeGestureRecognizer* _rightSwipeGestureRecognizer;
	SBNotificationSeparatorView* _separator;
	struct {
		unsigned isContentLayoutValid : 1;
		unsigned isSegmentLayoutValid : 1;
		unsigned isRequestHandlingEnabled : 1;
		unsigned shouldLoadAllChildViews : 1;
	}  _modeViewControllerFlags;

}

@property (assign,nonatomic) id<SBBulletinActionHandler> delegate;                                                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) UIViewController*<SBModeViewControllerContentProviding> selectedViewController; 
@property (nonatomic,retain) NSArray * viewControllers; 
@property (assign,getter=isRequestHandlingEnabled,nonatomic) char requestHandlingEnabled; 
@property (nonatomic,retain) SBBulletinObserverViewController * deselectedViewController;                                 //@synthesize deselectedViewController=_deselectedViewController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_buttonTitleFont;
-(void)_backgroundContrastDidChange:(id)arg1 ;
-(char)handleAction:(id)arg1 forBulletin:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setRequestHandlingEnabled:(char)arg1 ;
-(id)widgetDelegate;
-(void)setWidgetDelegate:(id)arg1 ;
-(char)isRequestHandlingEnabled;
-(void)_loadContentView;
-(CGRect)rectForBulletin:(id)arg1 ;
-(id)_viewIfLoaded;
-(void)handleModeChange:(id)arg1 ;
-(float)_headerViewHeightForMode:(int)arg1 ;
-(CGRect)_modeControlFrameWithHeaderBounds:(CGRect)arg1 forMode:(int)arg2 ;
-(id)_newSwipeGestureRecognizerWithDirection:(unsigned)arg1 ;
-(void)_loadHeaderView;
-(void)_invalidateContentLayout;
-(char)_isChildViewControllerViewLoadedInContentView:(id)arg1 ;
-(SBBulletinObserverViewController *)deselectedViewController;
-(void)setDeselectedViewController:(SBBulletinObserverViewController *)arg1 ;
-(void)_setSelectedBulletinObserverViewController:(id)arg1 animated:(char)arg2 ;
-(void)_layoutHeaderViewIfNecessary;
-(void)_layoutSegmentsIfNecessary;
-(void)_layoutContentIfNecessary;
-(void)_invalidateSegmentLayout;
-(char)_addBulletinObserverViewController:(id)arg1 ;
-(char)_contentOffset:(CGPoint*)arg1 forChildViewController:(id)arg2 ;
-(void)_setSelectedSegmentIndex:(int)arg1 ;
-(void)_setContentViewContentOffset:(CGPoint)arg1 animated:(char)arg2 ;
-(void)removeViewController:(id)arg1 ;
-(void)addViewController:(id)arg1 ;
-(char)_isRequestHandlingEnabled;
-(void)setSelectedViewController:(id)arg1 animated:(char)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id<SBBulletinActionHandler>)arg1 ;
-(id<SBBulletinActionHandler>)delegate;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(char)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(NSArray *)viewControllers;
-(void)setViewControllers:(NSArray *)arg1 ;
-(UIViewController*<SBModeViewControllerContentProviding>)selectedViewController;
-(void)setSelectedViewController:(UIViewController*<SBModeViewControllerContentProviding>)arg1 ;
-(void)settings:(id)arg1 changedValueForKeyPath:(id)arg2 ;
-(int)layoutMode;
-(void)sizeObservingView:(id)arg1 didChangeSize:(CGSize)arg2 ;
-(void)hostWillPresent;
-(void)hostDidPresent;
-(void)hostWillDismiss;
-(void)hostDidDismiss;
@end

