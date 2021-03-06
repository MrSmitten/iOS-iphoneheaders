/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:20:28 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBUIUserAgent.h>

@class SBBulletinAlertHandlerRegistry, NSString;

@interface SBUserAgent : NSObject <SBUIUserAgent> {

	SBBulletinAlertHandlerRegistry* _modalAlertRegistry;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedUserAgent;
-(id)foregroundApplicationDisplayID;
-(char)_openApplication:(id)arg1 withURL:(id)arg2 fromSource:(int)arg3 animated:(char)arg4 options:(id)arg5 ;
-(char)canLaunchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3 ;
-(id)_safeValue:(id)arg1 forKey:(id)arg2 ofType:(Class)arg3 ;
-(void)_cleanupFromBannerLaunch;
-(char)_launchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3 allowUnlock:(char)arg4 animate:(char)arg5 ;
-(void)updateCustomSubtitleTextForAwayViewPlugin:(id)arg1 ;
-(void)lockAndDimDeviceDisconnectingCallIfNecessary:(char)arg1 andDimScreen:(char)arg2 ;
-(void)activateRemoteAlertService:(id)arg1 options:(id)arg2 activationHandler:(/*^block*/id)arg3 deactivationHandler:(/*^block*/id)arg4 ;
-(id)foregroundDisplayID;
-(char)isApplicationForegroundObscured:(id)arg1 ;
-(char)applicationInstalledForDisplayID:(id)arg1 ;
-(char)deviceIsPasscodeLockedRemotely;
-(char)deviceIsTethered;
-(int)networkUsageTypeForAppWithDisplayID:(id)arg1 ;
-(char)alertIsActive;
-(char)canUserLaunchIcon;
-(void)openURL:(id)arg1 animateIn:(char)arg2 scale:(float)arg3 start:(double)arg4 duration:(float)arg5 animateOut:(char)arg6 ;
-(char)launchApplicationFromSource:(int)arg1 withURL:(id)arg2 options:(id)arg3 ;
-(char)launchFromSource:(int)arg1 withURL:(id)arg2 bundleID:(id)arg3 allowUnlock:(char)arg4 ;
-(char)canLaunchFromAwayViewPluginWithURL:(id)arg1 bundleID:(id)arg2 ;
-(char)launchFromAwayViewPluginWithURL:(id)arg1 bundleID:(id)arg2 allowUnlock:(char)arg3 animate:(char)arg4 ;
-(CGRect)defaultContentRegionForAwayViewPlugin:(id)arg1 withOrientation:(int)arg2 ;
-(void)adjustLockScreenContentByOffset:(float)arg1 forAwayViewPlugin:(id)arg2 withAnimationDuration:(double)arg3 ;
-(void)updateLockScreenInterfaceIfNecessary;
-(void)dimScreen:(char)arg1 ;
-(char)isIdleTimerDisabledForReason:(id)arg1 ;
-(void)lockAndDimDevice;
-(void)lockAndDimDeviceDisconnectingCallIfNecessary:(char)arg1 ;
-(char)launchDisplayWithURL:(id)arg1 forCall:(char)arg2 sender:(id)arg3 ;
-(void)addActiveInterfaceOrientationObserver:(id)arg1 ;
-(void)removeActiveInterfaceOrientationObserver:(id)arg1 ;
-(void)setMinimumBacklightLevel:(float)arg1 animated:(char)arg2 ;
-(id)topSuspendedEventsOnlyDisplayID;
-(void)setIdleText:(id)arg1 ;
-(char)deviceIsLocked;
-(void)dealloc;
-(id)init;
-(int)activeInterfaceOrientation;
-(void)setIdleTimerDisabled:(char)arg1 forReason:(id)arg2 ;
-(char)openURL:(id)arg1 allowUnlock:(char)arg2 animated:(char)arg3 ;
-(char)deviceIsPasscodeLocked;
-(char)launchApplicationFromSource:(int)arg1 withDisplayID:(id)arg2 options:(id)arg3 ;
-(void)setWallpaperTunnelActive:(char)arg1 forFullscreenAlertController:(id)arg2 ;
-(void)updateInterfaceOrientationIfNecessary;
-(char)springBoardIsActive;
-(char)canLaunchFromBulletinWithURL:(id)arg1 bundleID:(id)arg2 ;
-(char)launchFromPushOrLocalBulletin:(id)arg1 actionIdentifier:(id)arg2 origin:(int)arg3 ;
-(char)launchFromBulletinWithURL:(id)arg1 bundleID:(id)arg2 allowUnlock:(char)arg3 animate:(char)arg4 launchOrigin:(int)arg5 ;
-(char)isSBUILoggingEnabled;
-(char)isScreenOn;
-(id)localizedDisplayNameForDisplayID:(id)arg1 ;
-(char)lockScreenIsShowing;
-(void)notifyOnNextUserEvent;
-(id)modalBulletinAlertHandlerRegistry;
-(void)activateModalBulletinAlert:(id)arg1 ;
-(void)setBadgeNumberOrString:(id)arg1 forApplicationWithID:(id)arg2 ;
-(void)prepareToAnswerCall;
-(void)activateRemoteAlertService:(id)arg1 options:(id)arg2 ;
-(void)enableLockScreenBundleNamed:(id)arg1 activationContext:(id)arg2 ;
-(void)disableLockScreenBundleNamed:(id)arg1 deactivationContext:(id)arg2 ;
-(char)deviceIsBlocked;
-(void)undimScreen;
@end

