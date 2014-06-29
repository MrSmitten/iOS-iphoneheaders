/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUViewController.h>

@class SUGradient, SULoadingView, SUGradientView;

@interface SUPlaceholderViewController : SUViewController {

	SUGradient* _backgroundGradient;
	SUGradient* _defaultBackgroundGradient;
	bool _hideLoadingView;
	SULoadingView* _loadingView;
	SUGradientView* _gradientView;
	bool _shouldShowLoadingView;

}

@property (nonatomic,copy) SUGradient * backgroundGradient;                     //@synthesize backgroundGradient=_backgroundGradient - In the implementation block
@property (nonatomic,copy) SUGradient * defaultBackgroundGradient;              //@synthesize defaultBackgroundGradient=_defaultBackgroundGradient - In the implementation block
@property (nonatomic,readonly) SULoadingView * loadingView; 
@property (assign,nonatomic) bool shouldShowLoadingView;                        //@synthesize shouldShowLoadingView=_shouldShowLoadingView - In the implementation block
-(void)setLoading:(bool)arg1 ;
-(void)dealloc;
-(id)init;
-(void)loadView;
-(void)setBackgroundGradient:(id)arg1 ;
-(id)backgroundGradient;
-(id)copyArchivableContext;
-(id)loadingView;
-(id)copyDefaultScriptProperties;
-(void)setScriptProperties:(id)arg1 ;
-(void)parentViewControllerHierarchyDidChange;
-(id)defaultBackgroundGradient;
-(void)_bagDidLoadNotification:(id)arg1 ;
-(void)_reloadBackgroundGradient;
-(void)_reloadLoadingView;
-(id)_newURLBagBackgroundGradient;
-(id)_copyActiveGradient;
-(void)setDefaultBackgroundGradient:(id)arg1 ;
-(void)setShouldShowLoadingView:(bool)arg1 ;
-(bool)shouldShowLoadingView;
@end
