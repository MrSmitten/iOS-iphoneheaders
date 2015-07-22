/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:55 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PreferenceBundles/AirPortSettings.bundle/AirPortSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSBundleController.h>

@class PSSpecifier, NSString, WiFiManager;

@interface AirPortController : PSBundleController {

	PSSpecifier* _specifier;
	NSString* _disconnectedStr;
	NSString* _onStr;
	NSString* _offStr;
	NSString* _unavailableStr;
	WiFiManager* _manager;
	BOOL _displayedInRootMenu;

}
-(void)dealloc;
-(id)bundle;
-(void)networkChanged:(id)arg1 ;
-(id)currentNetwork:(id)arg1 ;
-(void)updateUI:(BOOL)arg1 ;
-(void)setCurrentNetwork:(id)arg1 specifier:(id)arg2 ;
-(void)willResignActive;
-(void)willBecomeActive;
-(id)initWithParentListController:(id)arg1 ;
-(id)specifiersWithSpecifier:(id)arg1 ;
@end
