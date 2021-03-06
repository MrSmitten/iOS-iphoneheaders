/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:47 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/_UIServiceWebViewControllerProtocol.h>
#import <UIKit/WebUIBrowserLoadingControllerDelegate.h>

@class _UIServiceWebView, WebUIBrowserLoadingController;

@interface _UIServiceWebViewController : UIViewController <_UIServiceWebViewControllerProtocol, WebUIBrowserLoadingControllerDelegate> {

	_UIServiceWebView* _uiWebView;
	WebUIBrowserLoadingController* _loadingController;

}
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
-(void)dealloc;
-(void)reload;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(int)arg1 ;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 ;
-(id)_makeAlertView;
-(void)stopLoading;
-(void)goBack;
-(void)goForward;
-(void)_willAppearInRemoteViewController;
-(void)loadEncodedRequest:(id)arg1 ;
-(void)loadUserTypedAddress:(id)arg1 ;
-(void)setShouldDecidePolicyRemotely:(BOOL)arg1 ;
-(void)configureWithEncodedSettings:(id)arg1 ;
-(void)_webContentSizeWithReplyHandler:(/*^block*/ id)arg1 ;
-(BOOL)_isInternalInstall;
-(id)localizedApplicationNameForProcess:(int)arg1 ;
-(void)_setupRemoteInspectorDetailsForRequestingProcess;
-(void)browserLoadingControllerDidUpdateURLString:(id)arg1 ;
-(void)browserLoadingControllerDidUpdateTitle:(id)arg1 ;
-(void)browserLoadingControllerDidUpdateBackForward:(id)arg1 ;
-(void)browserLoadingControllerDidUpdateEstimatedProgress:(id)arg1 ;
-(void)browserLoadingControllerDidStartLoading:(id)arg1 ;
-(void)browserLoadingController:(id)arg1 didFinishLoadingWithError:(id)arg2 dataSource:(id)arg3 ;
-(void)_remotelyDecidePolicyForRequest:(id)arg1 inMainFrame:(BOOL)arg2 navigationType:(id)arg3 decisionHandler:(/*^block*/ id)arg4 ;
-(void)_remotelyDispatchWillPresentViewControllerWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)_remotelyDispatchDidDismissViewController;
@end

