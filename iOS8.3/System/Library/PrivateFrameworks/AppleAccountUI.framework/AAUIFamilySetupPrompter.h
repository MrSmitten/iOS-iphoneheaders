/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:41:18 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccountUI/AAUIFamilySetupDelegate.h>

@protocol AAUIFamilySetupPrompterDelegate;
@class ACAccountStore, ACAccount, SSAccount, UIViewController, NSOperationQueue, NSString;

@interface AAUIFamilySetupPrompter : NSObject <AAUIFamilySetupDelegate> {

	ACAccountStore* _accountStore;
	ACAccount* _appleAccount;
	ACAccount* _grandSlamAccount;
	SSAccount* _iTunesAccount;
	UIViewController* _presentingViewController;
	NSOperationQueue* _networkingQueue;
	char _isRequestInFlight;
	id<AAUIFamilySetupPrompterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AAUIFamilySetupPrompterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setDelegate:(id<AAUIFamilySetupPrompterDelegate>)arg1 ;
-(id)init;
-(id<AAUIFamilySetupPrompterDelegate>)delegate;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(id)initWithiTunesAccount:(id)arg1 ;
-(void)_handleFamilyEligibilityResponse:(id)arg1 isFirstRun:(char)arg2 ;
-(void)_showUnderageAlertWithEligibilityResponse:(id)arg1 ;
-(void)_showConfirmationForStartingFamilySetupWithPendingInvite;
-(void)_showConfirmationForStartingFamilySetup;
-(void)_showPendingInvitesDialog;
-(void)_startFamilySetupFlowWithEligibilityResponse:(id)arg1 ;
-(void)_goToInvitations;
-(void)_goToFamilySetup;
-(void)promptIfEligibleWithPresentingViewController:(id)arg1 isFirstRun:(char)arg2 ;
-(void)familySetupViewController:(id)arg1 didCompleteWithSuccess:(char)arg2 ;
@end

