/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:26 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/CoreAuthUI.app/CoreAuthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>
#import <CoreAuthUI/LARemoteUI.h>
#import <CoreAuthUI/LAUIMechanism.h>

@protocol LABackoffCounter, LAUIMechanism, LARemoteUIHost;
@class NSDictionary, NSString, NSData;

@interface TransitionViewController : SBUIRemoteAlertServiceViewController <LARemoteUI, LAUIMechanism> {

	char _awaitingDissappear;
	char _awaitingDaemonActivity;
	char _disappeared;
	char _appeared;
	/*^block*/id _disappearedNotification;
	/*^block*/id _appearedNotification;
	TransitionViewController* _childController;
	int _policy;
	NSDictionary* _policyOptions;
	id<LABackoffCounter> _backoffCounter;
	NSString* _callerName;
	NSString* _callerBundleId;
	NSData* _externalizedACMContext;
	NSDictionary* _uiOptions;
	NSString* _authenticationTitle;
	NSString* _authenticationSubtitle;
	id<LAUIMechanism> _mechanism;
	id<LARemoteUIHost> _remoteUIHost;

}

@property (nonatomic,readonly) int policy;                                       //@synthesize policy=_policy - In the implementation block
@property (nonatomic,readonly) NSDictionary * policyOptions;                     //@synthesize policyOptions=_policyOptions - In the implementation block
@property (nonatomic,readonly) id<LABackoffCounter> backoffCounter;              //@synthesize backoffCounter=_backoffCounter - In the implementation block
@property (nonatomic,readonly) NSString * callerName;                            //@synthesize callerName=_callerName - In the implementation block
@property (nonatomic,readonly) NSString * callerBundleId;                        //@synthesize callerBundleId=_callerBundleId - In the implementation block
@property (nonatomic,readonly) NSData * externalizedACMContext;                  //@synthesize externalizedACMContext=_externalizedACMContext - In the implementation block
@property (nonatomic,readonly) NSDictionary * uiOptions;                         //@synthesize uiOptions=_uiOptions - In the implementation block
@property (nonatomic,retain) NSString * authenticationTitle;                     //@synthesize authenticationTitle=_authenticationTitle - In the implementation block
@property (nonatomic,retain) NSString * authenticationSubtitle;                  //@synthesize authenticationSubtitle=_authenticationSubtitle - In the implementation block
@property (nonatomic,readonly) id<LAUIMechanism> mechanism;                      //@synthesize mechanism=_mechanism - In the implementation block
@property (nonatomic,readonly) id<LARemoteUIHost> remoteUIHost;                  //@synthesize remoteUIHost=_remoteUIHost - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)_isSecureForRemoteViewService;
-(void)didReceiveAuthenticationData;
-(NSString *)callerBundleId;
-(void)setAuthenticationTitle:(NSString *)arg1 ;
-(NSString *)authenticationTitle;
-(NSString *)authenticationSubtitle;
-(void)uiFallback;
-(NSDictionary *)policyOptions;
-(void)uiCancel;
-(void)dismissChildWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)isRemoteViewController;
-(id<LAUIMechanism>)mechanism;
-(id<LABackoffCounter>)backoffCounter;
-(id<LARemoteUIHost>)remoteUIHost;
-(void)_performOnMainQueueWhenAppeared:(/*^block*/id)arg1 ;
-(id)initWithUiOptions:(id)arg1 parentViewController:(id)arg2 ;
-(char)isFullScreenController;
-(void)_setActivityWatchdog;
-(NSData *)externalizedACMContext;
-(NSDictionary *)uiOptions;
-(void)setAuthenticationSubtitle:(NSString *)arg1 ;
-(int)policy;
-(void)mechanismEvent:(int)arg1 ;
-(void)dismissRemoteUIWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)transitionToController:(int)arg1 internalInfo:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)uiEvent:(int)arg1 options:(id)arg2 ;
-(void)uiSuccessWithResult:(id)arg1 ;
-(void)uiFailureWithError:(id)arg1 ;
-(void)internalInfoWithReply:(/*^block*/id)arg1 ;
-(id)init;
-(unsigned)supportedInterfaceOrientations;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)_willAppearInRemoteViewController:(id)arg1 ;
-(NSString *)callerName;
@end
