/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:33:10 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PersistentConnection/PersistentConnection-Structs.h>
#import <PersistentConnection/PCInterfaceMonitorDelegate.h>

@class NSRecursiveLock, NSMapTable, PCSimpleTimer, NSString, NSTimer;

@interface PCPersistentInterfaceManager : NSObject <PCInterfaceMonitorDelegate> {

	NSRecursiveLock* _lock;
	NSMapTable* _delegatesAndQueues;
	CFSetRef _WiFiAutoAssociationDelegates;
	PCSimpleTimer* _WiFiAutoAssociationDisableTimer;
	CFSetRef _wakeOnWiFiDelegates;
	PCSimpleTimer* _wakeOnWiFiDisableTimer;
	void* _ctServerConnection;
	void* _interfaceAssertion;
	int _WWANContextIdentifier;
	NSString* _WWANInterfaceName;
	BOOL _isWWANInterfaceUp;
	NSTimer* _inCallWWANOverrideTimer;
	BOOL _isWWANInterfaceDataActive;
	BOOL _ctIsWWANInHomeCountry;
	BOOL _hasWWANStatusIndicator;
	BOOL _isPowerStateDetectionSupported;
	BOOL _isWWANInterfaceInProlongedHighPowerState;
	BOOL _isWWANInterfaceActivationPermitted;
	double _lastActivationTime;
	int _wwanRSSI;
	BOOL _isInCall;
	BOOL _isWakeOnWiFiSupported;
	BOOL _isWakeOnWiFiEnabled;
	BOOL _shouldOverrideOnCallBehavior;

}

@property (readonly) BOOL isWWANInterfaceUp; 
@property (readonly) BOOL isWWANInHomeCountry; 
@property (readonly) BOOL isWWANBetterThanWiFi; 
@property (readonly) BOOL doesWWANInterfaceExist; 
@property (readonly) NSString * WWANInterfaceName; 
@property (readonly) BOOL isInternetReachableViaWiFi; 
@property (readonly) BOOL isWakeOnWiFiSupported; 
@property (readonly) BOOL isInternetReachable; 
@property (nonatomic,retain,readonly) NSString * currentLinkQualityString; 
@property (readonly) BOOL isPowerStateDetectionSupported; 
@property (readonly) BOOL isWWANInterfaceInProlongedHighPowerState; 
@property (readonly) BOOL isInCall; 
@property (readonly) BOOL isWWANInterfaceActivationPermitted; 
@property (readonly) BOOL areAllNetworkInterfacesDisabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)removeDelegate:(id)arg1 ;
-(void)handleMachMessage:(void*)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isInternetReachable;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(void)_createCTConnection;
-(void)_updateWWANInterfaceUpStateLocked;
-(void)_serverCallbackLocked:(id)arg1 info:(id)arg2 ;
-(void)_mainThreadCTConnectionAttempt;
-(void)_ctConnectionAttempt;
-(void)_updateWWANInterfaceAssertionsLocked;
-(void)_updateWWANInterfaceUpState;
-(void)_scheduleCalloutsForSelector:(SEL)arg1 ;
-(void)_updateCTIsWWANInHomeCountry:(BOOL)arg1 isWWANInterfaceDataActive:(BOOL)arg2 ;
-(BOOL)_wantsWWANInterfaceAssertion;
-(void)_clearInCallWWANOverrideTimerLocked;
-(void)_inCallWWANOverrideTimerFired;
-(BOOL)_isWWANInHomeCountryLocked;
-(BOOL)_isInternetReachableLocked;
-(void)_adjustWakeOnWiFi;
-(void)_adjustWiFiAutoAssociationLocked;
-(void)_adjustWiFiAutoAssociation;
-(BOOL)_wantsWakeOnWiFiEnabled;
-(void)_adjustWakeOnWiFiLocked;
-(BOOL)doesWWANInterfaceExist;
-(BOOL)isWWANInterfaceActivationPermitted;
-(BOOL)isInCall;
-(BOOL)_isWiFiUsable;
-(BOOL)_allowBindingToWWAN;
-(void)bindCFStream:(CFReadStreamRef)arg1 toWWANInterface:(BOOL)arg2 ;
-(id)urlConnectionBoundToWWANInterface:(BOOL)arg1 withRequest:(id)arg2 delegate:(id)arg3 usesCache:(BOOL)arg4 maxContentLength:(long long)arg5 startImmediately:(BOOL)arg6 connectionProperties:(id)arg7 ;
-(void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2 ;
-(void)interfaceReachabilityChanged:(id)arg1 ;
-(void)_serverCallback:(id)arg1 info:(id)arg2 ;
-(NSString *)currentLinkQualityString;
-(BOOL)_wwanIsPoorLinkQuality;
-(BOOL)_wifiIsPoorLinkQuality;
-(BOOL)isWWANBetterThanWiFi;
-(BOOL)isWWANInterfaceUp;
-(NSString *)WWANInterfaceName;
-(BOOL)isPowerStateDetectionSupported;
-(BOOL)isWWANInterfaceInProlongedHighPowerState;
-(BOOL)isWWANInHomeCountry;
-(BOOL)isInternetReachableViaWiFi;
-(BOOL)isWakeOnWiFiSupported;
-(BOOL)areAllNetworkInterfacesDisabled;
-(void)cutWiFiManagerDeviceAttached:(id)arg1 ;
-(void)_updateWWANInterfaceAssertions;
-(void)enableWiFiAutoAssociation:(BOOL)arg1 forDelegate:(id)arg2 ;
-(void)enableWakeOnWiFi:(BOOL)arg1 forDelegate:(id)arg2 ;
-(void)bindCFStreamToWWANInterface:(CFReadStreamRef)arg1 ;
-(id)urlConnectionBoundToWWANInterfaceWithRequest:(id)arg1 delegate:(id)arg2 usesCache:(BOOL)arg3 maxContentLength:(long long)arg4 startImmediately:(BOOL)arg5 connectionProperties:(id)arg6 ;
@end
