/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:24 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIAnimationZoomDownAppToHome.h>

@class SBLockScreenViewController, SBLockToAppStatusBarAnimator, SBIconAnimator;

@interface SBUIAnimationZoomDownLockScreenToHome : SBUIAnimationZoomDownAppToHome {

	SBLockScreenViewController* _lockScreenViewController;
	SBLockToAppStatusBarAnimator* _statusBarAnimator;
	SBIconAnimator* _iconAnimator;

}
-(void)prepareZoom;
-(void)animateZoomWithCompletion:(/*^block*/id)arg1 ;
-(void)_prepareAnimation;
-(void)cleanupZoom;
-(char)_shouldDismissBanner;
-(id)initWithLockScreenViewController:(id)arg1 ;
-(void)dealloc;
@end
