/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:37 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoClockBridgeSettings.bundle/NanoClockBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BridgePreferences/BPSNotificationAppController.h>

@class NSMutableDictionary, NPSDomainAccessor, NPSManager;

@interface NCBSMainMenuViewController : BPSNotificationAppController {

	NSMutableDictionary* _sectionInfo;
	NPSDomainAccessor* _gizmoGlobalDomain;
	NPSManager* _syncManager;
	BOOL _localeForces24HourTime;
	unsigned long long _monogramSpecifierIndex;

}
-(void)_setAlertsActive:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_writeSectionState;
-(void)handleCustomMonogramChange:(id)arg1 ;
-(void)_set24HourTime:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_getMonogram:(id)arg1 ;
-(void)_setNotificationsIndicatorActive:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_getNotificationsIndicatorActive:(id)arg1 ;
-(id)_is24HourTime:(id)arg1 ;
-(void)_checkAndUpdateSettings;
-(void)_loadSectionInfo;
-(id)_getAlertsActive:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)bundle;
-(id)applicationBundleIdentifier;
-(id)localizedPaneTitle;
-(id)_currentLocale;
-(id)specifiers;
@end
