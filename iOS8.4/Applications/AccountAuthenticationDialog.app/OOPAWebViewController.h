/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/AccountAuthenticationDialog.app/AccountAuthenticationDialog
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AccountAuthenticationDialog/AccountAuthenticationDialog-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>
#import <UIKit/UIWebViewPrivateDelegate.h>
#import <AccountAuthenticationDialog/NSURLConnectionDataDelegate.h>

@protocol OOPAWebViewControllerDelegate, ACOOPAuthFlowDelegate;
@class UIWebView, UIBarButtonItem, NSMutableURLRequest, NSObject, NSURL, NSString;

@interface OOPAWebViewController : UIViewController <UIWebViewDelegate, UIWebViewPrivateDelegate, NSURLConnectionDataDelegate> {

	UIWebView* _webView;
	char _hasAlreadyAppeared;
	UIBarButtonItem* _backButton;
	UIBarButtonItem* _forwardButton;
	NSMutableURLRequest* _urlRequest;
	CFURLStorageSessionRef _storageSession;
	char _hidingWebView;
	id<OOPAWebViewControllerDelegate> _delegate;
	NSObject*<ACOOPAuthFlowDelegate> _authFlowDelegate;
	NSURL* _authURL;
	NSString* _navBarTitle;
	NSString* _username;

}

@property (assign,nonatomic,__weak) id<OOPAWebViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<ACOOPAuthFlowDelegate> authFlowDelegate;              //@synthesize authFlowDelegate=_authFlowDelegate - In the implementation block
@property (nonatomic,copy) NSURL * authURL;                                                  //@synthesize authURL=_authURL - In the implementation block
@property (nonatomic,copy) NSString * navBarTitle;                                           //@synthesize navBarTitle=_navBarTitle - In the implementation block
@property (nonatomic,copy) NSString * username;                                              //@synthesize username=_username - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)navBarTitle;
-(void)_loadWebViewIfReady;
-(void)_backButtonTapped:(id)arg1 ;
-(void)_forwardButtonTapped:(id)arg1 ;
-(void)_updateNavigationButtons;
-(NSURL *)authURL;
-(void)_updateNavigationPromptWithActiveURL:(id)arg1 ;
-(void)_loadWebView;
-(CFURLStorageSessionRef)_privateStorageSession;
-(void)setNavBarTitle:(NSString *)arg1 ;
-(void)setAuthURL:(NSURL *)arg1 ;
-(void)setAuthFlowDelegate:(NSObject*<ACOOPAuthFlowDelegate>)arg1 ;
-(NSObject*<ACOOPAuthFlowDelegate>)authFlowDelegate;
-(void)_cancelButtonTapped:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<OOPAWebViewControllerDelegate>)arg1 ;
-(id)init;
-(id<OOPAWebViewControllerDelegate>)delegate;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(void)webView:(id)arg1 didFailLoadWithError:(id)arg2 ;
-(char)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3 ;
-(void)webViewDidStartLoad:(id)arg1 ;
-(id)uiWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5 ;
-(void)webViewDidFinishLoad:(id)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)setUsername:(NSString *)arg1 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(NSString *)username;
-(char)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
@end

