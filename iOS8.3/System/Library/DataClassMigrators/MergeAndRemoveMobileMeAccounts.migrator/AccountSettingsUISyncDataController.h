/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:27:17 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/DataClassMigrators/MergeAndRemoveMobileMeAccounts.migrator/MergeAndRemoveMobileMeAccounts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AccountSettingsUIAccount;
@class ASSBasicAccount, ASSDeviceLocalAccount;

@interface AccountSettingsUISyncDataController : NSObject {

	ASSBasicAccount*<AccountSettingsUIAccount> _syncAccount;
	ASSDeviceLocalAccount* _deviceLocalAccount;
	char _shouldSaveDeviceLocalAccount;

}

@property (nonatomic,retain) ASSBasicAccount*<AccountSettingsUIAccount> syncAccount;              //@synthesize syncAccount=_syncAccount - In the implementation block
@property (nonatomic,readonly) char shouldSaveDeviceLocalAccount;                                 //@synthesize shouldSaveDeviceLocalAccount=_shouldSaveDeviceLocalAccount - In the implementation block
@property (nonatomic,readonly) ASSDeviceLocalAccount * deviceLocalAccount; 
-(void)hideLocalStoreForDataclass:(id)arg1 ;
-(void)setSyncAccount:(ASSBasicAccount*<AccountSettingsUIAccount>)arg1 ;
-(void)showLocalStoreIfAppropriateForDataclass:(id)arg1 ;
-(ASSDeviceLocalAccount *)deviceLocalAccount;
-(void)mergeSyncDataForDataclass:(id)arg1 ;
-(void)removeDataStoreForDataclass:(id)arg1 ;
-(ASSBasicAccount*<AccountSettingsUIAccount>)syncAccount;
-(id)_syncActionsAccount;
-(void)createLocalDataSourceForDataclass:(id)arg1 ;
-(void)clearAnchorsForLocalDataclass:(id)arg1 ;
-(void*)createDeviceLocalSyncDataSourceForDataclass:(id)arg1 ;
-(void*)_createMobileMeDataSourceForDataclass:(id)arg1 ;
-(id)_syncableChildAccountIDOfClass:(id)arg1 ;
-(void)saveDeviceLocalAccount;
-(void)mergeLocalDataForDataclass:(id)arg1 ;
-(void)removeLocalDataStoreForDataclass:(id)arg1 ;
-(char)shouldSaveDeviceLocalAccount;
-(void)dealloc;
@end
