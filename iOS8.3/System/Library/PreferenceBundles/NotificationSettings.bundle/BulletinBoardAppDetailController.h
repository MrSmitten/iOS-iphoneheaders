/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:08:58 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PreferenceBundles/NotificationSettings.bundle/NotificationSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <NotificationSettings/BulletinBoardAppDetailControllerDelegate.h>

@protocol BulletinBoardAppDetailControllerDelegate;
@class PSSpecifier, NSArray, NSString;

@interface BulletinBoardAppDetailController : PSListController <BulletinBoardAppDetailControllerDelegate> {

	PSSpecifier* _shownItemCount;
	PSSpecifier* _showInLockscreen;
	NSArray* _accountSpecifiers;
	NSArray* _disallowedStateHiddenSpecifiers;
	id<BulletinBoardAppDetailControllerDelegate> _delegate;

}

@property (assign,nonatomic) id<BulletinBoardAppDetailControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)alertCount:(id)arg1 ;
-(id)badges:(id)arg1 ;
-(unsigned)_generalSettingsInsertIndexForSpecifiers:(id)arg1 ;
-(void)setSounds:(id)arg1 specifier:(id)arg2 ;
-(void)setBadges:(id)arg1 specifier:(id)arg2 ;
-(void)_handleSpecialCasesForSpecifiers:(id)arg1 sectionInfo:(id)arg2 ;
-(void)_updateAllowedStateAnimated:(char)arg1 forSpecifiers:(id)arg2 ;
-(id)incomingAlertFiltration:(id)arg1 ;
-(void)_updateAllowedStateAnimated:(char)arg1 ;
-(void)appDetailController:(id)arg1 moveSpecifier:(id)arg2 toOnPosition:(char)arg3 isSubsection:(char)arg4 ;
-(void)_setShowInNotificationCenter:(char)arg1 ;
-(void)notifyGamedOfChanges:(unsigned)arg1 mask:(unsigned)arg2 ;
-(void)_setGKAlertState:(id)arg1 ;
-(void)notifyFMFOfChanges;
-(id)itemsPerAppValues:(id)arg1 ;
-(id)_itemsPerAppTitles:(id)arg1 shortTitles:(char)arg2 ;
-(id)_valueOfNotificationType:(unsigned)arg1 ;
-(void)_setValue:(id)arg1 notificationType:(unsigned)arg2 ;
-(void)appDetailControllerWillDisappear:(id)arg1 ;
-(void)setIncomingAlertFiltration:(id)arg1 specifier:(id)arg2 ;
-(int)_validateAlertFiltration:(int)arg1 ;
-(long)_validateAlertCount:(long)arg1 ;
-(void)setAlertType:(id)arg1 specifier:(id)arg2 ;
-(id)showInNotificationCenter:(id)arg1 ;
-(id)allowNotifications:(id)arg1 ;
-(void)setAllowNotifications:(id)arg1 specifier:(id)arg2 ;
-(id)getItemsPerApp:(id)arg1 ;
-(void)setShowInNotificationCenter:(id)arg1 specifier:(id)arg2 ;
-(id)getViewInLockScreen:(id)arg1 ;
-(void)setViewInLockScreen:(id)arg1 specifier:(id)arg2 ;
-(id)itemsPerAppTitles:(id)arg1 ;
-(id)itemsPerAppShortTitles:(id)arg1 ;
-(void)setItemsPerApp:(id)arg1 specifier:(id)arg2 ;
-(id)detailTextForToneWithSpecifier:(id)arg1 ;
-(void)setAlertCount:(id)arg1 specifier:(id)arg2 ;
-(void)setShowsMessagePreview:(id)arg1 specifier:(id)arg2 ;
-(id)showsMessagePreview:(id)arg1 ;
-(id)sounds:(id)arg1 ;
-(id)getAlertType:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<BulletinBoardAppDetailControllerDelegate>)arg1 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<BulletinBoardAppDetailControllerDelegate>)delegate;
-(void)viewWillDisappear:(char)arg1 ;
-(id)effectiveSectionInfo;
-(void)setSectionInfo:(id)arg1 forSectionID:(id)arg2 ;
-(id)specifiers;
-(void)reloadSpecifiers;
-(void)migrateSpecifierMetadataFrom:(id)arg1 to:(id)arg2 ;
-(id)controllerForSpecifier:(id)arg1 ;
@end

