/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:04 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSNumber, SSAuthenticationContext, ISDialog, ISDialogButton, NSURL;

@interface ServerAuthenticationOperation : ISOperation {

	NSNumber* _authenticatedAccountDSID;
	SSAuthenticationContext* _authenticationContext;
	ISDialog* _dialog;
	BOOL _performsButtonAction;
	ISDialogButton* _performedButton;
	NSURL* _redirectURL;
	ISDialogButton* _selectedButton;

}

@property (readonly) ISDialog * dialog;                                        //@synthesize dialog=_dialog - In the implementation block
@property (copy) SSAuthenticationContext * authenticationContext;              //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (assign) BOOL performsButtonAction;                                  //@synthesize performsButtonAction=_performsButtonAction - In the implementation block
@property (readonly) NSNumber * authenticatedAccountDSID;                      //@synthesize authenticatedAccountDSID=_authenticatedAccountDSID - In the implementation block
@property (readonly) ISDialogButton * performedButton;                         //@synthesize performedButton=_performedButton - In the implementation block
@property (readonly) NSURL * redirectURL;                                      //@synthesize redirectURL=_redirectURL - In the implementation block
@property (readonly) ISDialogButton * selectedButton;                          //@synthesize selectedButton=_selectedButton - In the implementation block
-(BOOL)_shouldSkipInitialDialog:(id)arg1 ;
-(id)_copyButtonToSkipDialog:(id)arg1 ;
-(BOOL)_copySelectedButton:(id*)arg1 returningError:(id*)arg2 ;
-(BOOL)_shouldAuthenticateForButton:(id)arg1 ;
-(BOOL)_copyAccountIdentifier:(id*)arg1 returningError:(id*)arg2 ;
-(void)_handleSelectedButton:(id)arg1 ;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)run;
-(ISDialog *)dialog;
-(ISDialogButton *)selectedButton;
-(NSURL *)redirectURL;
-(id)_copyAuthenticationContext;
-(BOOL)performsButtonAction;
-(void)setPerformsButtonAction:(BOOL)arg1 ;
-(ISDialogButton *)performedButton;
-(id)initWithDialog:(id)arg1 ;
-(SSAuthenticationContext *)authenticationContext;
-(NSNumber *)authenticatedAccountDSID;
@end
