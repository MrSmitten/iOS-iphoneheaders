/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:40 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>
#import <Maps/MainChromeTopBarContent.h>

@protocol SearchBarDelegate;
@class MainChromeViewController, UITextField, PassthruSearchBar, UIButton, UIImage, NSString;

@interface SearchBar : UIView <MainChromeTopBarContent> {

	id<SearchBarDelegate> _delegate;
	UITextField* _searchField;
	PassthruSearchBar* _searchBar;
	UIButton* _directionsButton;
	UIButton* _shareButton;
	UIButton* _cancelButton;
	UIImage* _defaultClearButtonImage;
	UIImage* _defaultClearButtonPressedImage;
	int _suspensionCount;
	int _lightness;
	char _didPerformInitialSetup;
	MainChromeViewController* _chromeViewController;

}

@property (assign,nonatomic,__weak) id<SearchBarDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UITextField * searchField;                                  //@synthesize searchField=_searchField - In the implementation block
@property (nonatomic,readonly) PassthruSearchBar * searchBar;                              //@synthesize searchBar=_searchBar - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) MainChromeViewController * chromeViewController;              //@synthesize chromeViewController=_chromeViewController - In the implementation block
+(id)directionsButtonUsingGlyphs:(char)arg1 ;
+(id)shareButtonUsingGlyphs:(char)arg1 ;
+(float)defaultHeight;
-(void)performInitialSetup;
-(MainChromeViewController *)chromeViewController;
-(void)_directionsButtonTapped:(id)arg1 ;
-(id)presentationSourceForDirectionsSearch;
-(id)presentationSourceForShareSheet;
-(void)setChromeViewController:(MainChromeViewController *)arg1 ;
-(void)beginSuspendingTapDelegateMessages;
-(void)endSuspendingTapDelegateMessages;
-(void)setBackdropLightness:(int)arg1 animation:(id)arg2 ;
-(void)_updateSearchFieldAppearance;
-(void)_cancelButtonTapped:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<SearchBarDelegate>)arg1 ;
-(id<SearchBarDelegate>)delegate;
-(PassthruSearchBar *)searchBar;
-(UITextField *)searchField;
-(void)_shareButtonTapped:(id)arg1 ;
@end
