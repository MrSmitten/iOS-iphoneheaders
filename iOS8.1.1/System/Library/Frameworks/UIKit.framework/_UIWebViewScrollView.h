/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:14 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIWebScrollView.h>

@class _UIWebViewScrollViewDelegateForwarder, UIWebBrowserView;

@interface _UIWebViewScrollView : UIWebScrollView {

	_UIWebViewScrollViewDelegateForwarder* _forwarder;
	BOOL _bouncesSetExplicitly;
	UIWebBrowserView* _browserView;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setBounces:(BOOL)arg1 ;
-(void)setBouncesHorizontally:(BOOL)arg1 ;
-(void)setBouncesVertically:(BOOL)arg1 ;
-(void)_weaklySetBouncesHorizontally:(BOOL)arg1 ;
-(void)_setWebView:(id)arg1 ;
@end
