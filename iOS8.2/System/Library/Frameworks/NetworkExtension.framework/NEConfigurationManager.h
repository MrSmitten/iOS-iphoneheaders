/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:44 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NEConfigurationManagerDelegate, OS_dispatch_queue;
#import <NetworkExtension/NetworkExtension-Structs.h>
@class NSString, NEHelper, NSUUID, NSObject, NSDictionary, NSMutableDictionary, NSKeyedUnarchiver, NSData;

@interface NEConfigurationManager : NSObject {

	NSString* _description;
	NEHelper* _helper;
	char _hasVPNAPIEntitlement;
	char _hasReadPermission;
	char _isVPNPublicAPI;
	char _isNEHelper;
	NSUUID* _userUUID;
	id<NEConfigurationManagerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;
	int _changedNotifyToken;
	NSDictionary* _currentIndex;
	NSObject*<OS_dispatch_queue> _changedQueue;
	/*^block*/id _changedHandler;
	NSMutableDictionary* _loadedIndex;
	NSMutableDictionary* _loadedConfigurations;
	NSKeyedUnarchiver* _decoder;
	NSData* _SCPreferencesSignature;
	NSString* _pluginType;
	long long _generation;

}

@property (assign) char hasVPNAPIEntitlement;                                                 //@synthesize hasVPNAPIEntitlement=_hasVPNAPIEntitlement - In the implementation block
@property (readonly) NSUUID * userUUID;                                                       //@synthesize userUUID=_userUUID - In the implementation block
@property (retain) id<NEConfigurationManagerDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> queue;                                      //@synthesize queue=_queue - In the implementation block
@property (assign) int changedNotifyToken;                                                    //@synthesize changedNotifyToken=_changedNotifyToken - In the implementation block
@property (retain) NSDictionary * currentIndex;                                               //@synthesize currentIndex=_currentIndex - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> changedQueue;                                 //@synthesize changedQueue=_changedQueue - In the implementation block
@property (copy) id changedHandler;                                                           //@synthesize changedHandler=_changedHandler - In the implementation block
@property (retain) NSMutableDictionary * loadedIndex;                                         //@synthesize loadedIndex=_loadedIndex - In the implementation block
@property (retain) NSMutableDictionary * loadedConfigurations;                                //@synthesize loadedConfigurations=_loadedConfigurations - In the implementation block
@property (retain) NSKeyedUnarchiver * decoder;                                               //@synthesize decoder=_decoder - In the implementation block
@property (assign) long long generation;                                                      //@synthesize generation=_generation - In the implementation block
@property (readonly) NEHelper * helper; 
@property (setter=CPreferencesSignature,retain) NSData * SCPreferencesSignature;              //@synthesize SCPreferencesSignature=_SCPreferencesSignature - In the implementation block
@property (readonly) NSString * pluginType;                                                   //@synthesize pluginType=_pluginType - In the implementation block
@property (assign) char hasReadPermission;                                                    //@synthesize hasReadPermission=_hasReadPermission - In the implementation block
@property (assign) char isVPNPublicAPI;                                                       //@synthesize isVPNPublicAPI=_isVPNPublicAPI - In the implementation block
@property (assign) char isNEHelper;                                                           //@synthesize isNEHelper=_isNEHelper - In the implementation block
+(void)updateFlags:(unsigned long long*)arg1 withConfiguration:(id)arg2 ;
+(char)configurationIsEnabled:(id)arg1 ;
+(int)configuration:(id)arg1 overlapsWithOtherConfiguration:(id)arg2 ;
+(void)disableConfiguration:(id)arg1 onDemandOnly:(char)arg2 ;
+(id)sharedManagerForAllUsers;
+(id)sharedManager;
-(NEHelper *)helper;
-(NSString *)pluginType;
-(id)initWithPluginType:(id)arg1 ;
-(id)initWithUserUUID:(id)arg1 ;
-(int)changedNotifyToken;
-(NSKeyedUnarchiver *)decoder;
-(void)sendRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)loadedConfigurations;
-(void)postChangeNotificationWithGeneration:(long long)arg1 andFlags:(unsigned long long)arg2 ;
-(void)loadConfigurationsInternal:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)readIndexFromDiskWithError:(id*)arg1 ;
-(char)hasReadPermission;
-(void)setDecoder:(NSKeyedUnarchiver *)arg1 ;
-(NSUUID *)userUUID;
-(id)filterIndexWithFilter:(id)arg1 ;
-(void)notifyChanges;
-(NSMutableDictionary *)loadedIndex;
-(void)clearLoadedConfigurationsWithIDs:(id)arg1 ;
-(id)decodeConfigurationWithIdentifier:(id)arg1 ;
-(void)didLoadConfiguration:(id)arg1 ;
-(void)registerForChangeNotifications;
-(char)isVPNPublicAPI;
-(char)reloadFromDisk;
-(char)isNEHelper;
-(void)setGeneration:(long long)arg1 ;
-(id)errorWithCode:(int)arg1 specifics:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)changedQueue;
-(id)changedHandler;
-(id)copyChangedConfigurationIDs:(id)arg1 ;
-(void)getCurrentIndexWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setChangedNotifyToken:(int)arg1 ;
-(void)setLoadedIndex:(NSMutableDictionary *)arg1 ;
-(void)setLoadedConfigurations:(NSMutableDictionary *)arg1 ;
-(void)didLoadConfiguration:(id)arg1 withSignature:(id)arg2 ;
-(char)configurationHasChanged:(id)arg1 ;
-(void)setHasReadPermission:(char)arg1 ;
-(void)setSCPreferencesSignature:(NSData *)arg1 ;
-(char)resetKeychainItemsAfterProtocolChange:(id)arg1 newConfiguration:(id)arg2 ;
-(id)makeMutableCopyOfIndex:(id)arg1 ;
-(NSData *)SCPreferencesSignature;
-(id)saveConfigurationToDisk:(id)arg1 updateSCPreferences:(SCPreferencesRef)arg2 currentSignature:(id)arg3 userUUID:(id)arg4 ;
-(id)removeConfigurationFromDisk:(id)arg1 updateSCPreferences:(SCPreferencesRef)arg2 ;
-(void)updateSCPreferencesSignatureOnDisk;
-(void)setChangedQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setChangedHandler:(id)arg1 ;
-(void)postGeneration;
-(void)saveConfigurationToDisk:(id)arg1 currentSignature:(id)arg2 userUUID:(id)arg3 completionQueue:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)removeConfigurationFromDisk:(id)arg1 completionQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)syncWithSystemConfigurationWithAppNameCallback:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadIndexWithFilter:(id)arg1 completionQueue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)loadConfigurations:(id)arg1 withFilter:(id)arg2 completionQueue:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)loadConfigurationWithID:(id)arg1 withCompletionQueue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)loadConfigurationsWithCompletionQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)saveConfiguration:(id)arg1 withCompletionQueue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)removeConfiguration:(id)arg1 withCompletionQueue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setChangedQueue:(id)arg1 andHandler:(/*^block*/id)arg2 ;
-(void)handleFileRemovedWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)handlePluginTypesRemoved:(id)arg1 configuration:(id)arg2 vpn:(id)arg3 updateSCPreferences:(SCPreferencesRef)arg4 ;
-(void)handleApplicationsRemoved:(id)arg1 pluginTypesRemoved:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)copyIdentities:(id)arg1 fromDomain:(int)arg2 withCompletionQueue:(id)arg3 handler:(/*^block*/id)arg4 ;
-(char)hasVPNAPIEntitlement;
-(void)setHasVPNAPIEntitlement:(char)arg1 ;
-(void)setIsVPNPublicAPI:(char)arg1 ;
-(void)setIsNEHelper:(char)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<NEConfigurationManagerDelegate>)arg1 ;
-(id)init;
-(id)description;
-(id<NEConfigurationManagerDelegate>)delegate;
-(NSDictionary *)currentIndex;
-(NSObject*<OS_dispatch_queue>)queue;
-(long long)generation;
-(void)setCurrentIndex:(NSDictionary *)arg1 ;
@end

