/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:35 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PreferenceBundles/VimeoSettings.bundle/VimeoSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>
#import <FacebookSettings/ACUIAppInstallerDelegate.h>

@class ACAccountType, ACAccount, NSString, ACUIAppInstaller, PSSpecifier, NSArray, SLNetworkReachabilityWarning, UIAlertView;

@interface SLVimeoSettingsViewController : ACUIViewController <ACUIAppInstallerDelegate> {

	ACAccountType* _vimeoAccountType;
	ACAccount* _account;
	NSString* _username;
	NSString* _password;
	ACUIAppInstaller* _vimeoAppInstaller;
	PSSpecifier* _signInButtonSpecifier;
	NSArray* _accountStateDependentSpecifiers;
	SLNetworkReachabilityWarning* _networkWarning;
	UIAlertView* _appInstallAlert;

}
-(id)_passwordWithSpecifier:(id)arg1 ;
-(void)_setPassword:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_textFieldValueDidChange:(id)arg1 ;
-(void)_setUsername:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_updateInstallCell:(id)arg1 ;
-(id)_learnMoreLinkGroupSpecifier;
-(id)_loginSpecifiers;
-(id)_networkWarning;
-(void)_learnMoreLinkButtonTapped:(id)arg1 ;
-(id)_usernameWithSpecifier:(id)arg1 ;
-(void)_handleAccountAuthenticationWithResult:(bool)arg1 error:(id)arg2 ;
-(void)_showAppDownloadAlert;
-(void)_installButtonTapped:(id)arg1 ;
-(id)_vimeoAccountType;
-(id)_installVimeoCellSpecifier;
-(id)_vimeoAppInstaller;
-(id)_vimeoApp;
-(id)_specifiersForNoAccounts;
-(id)_specifiersForExistingAccount;
-(void)_signInButtonTapped:(id)arg1 ;
-(void)_updateUsernameAndPasswordKeysWithValuesFromTextFields;
-(void)_showAlertForError:(id)arg1 ;
-(void)_accountStoreDidChange:(id)arg1 ;
-(void)setPassword:(id)arg1 ;
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(bool)arg1 ;
-(void).cxx_destruct;
-(void)appInstallerWillStart:(id)arg1 ;
-(void)_stopObservingAccountStoreDidChangeNotification;
-(void)_beginObservingAccountStoreDidChangeNotification;
-(void)_updateSignInButton;
-(void)setUsername:(id)arg1 ;
-(id)specifiers;
-(void)returnPressedAtEnd;
@end
