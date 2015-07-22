/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:49 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/ExternalAccessory.framework/PlugIns/ExternalAccessoryWACUIBits.bundle/ExternalAccessoryWACUIBits
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <ExternalAccessoryWACUIBits/WACUIHostProtocol.h>

@class EAWiFiUnconfiguredAccessoryBrowserManager, NSString;

@interface WACUIRemoteViewController : _UIRemoteViewController <WACUIHostProtocol> {

	EAWiFiUnconfiguredAccessoryBrowserManager* _parent;

}

@property (__weak) EAWiFiUnconfiguredAccessoryBrowserManager * parent;              //@synthesize parent=_parent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)_signalPresentationComplete;
-(void)wifiDidShutdown;
-(void)dismissWithStatus:(int)arg1 ;
-(void)backendDidStopSearchWithError:(id)arg1 ;
-(void)backendDidStartSearchWithError:(id)arg1 ;
-(void)backendFoundNewWACDevices:(id)arg1 andRemovedWACDevices:(id)arg2 ;
-(EAWiFiUnconfiguredAccessoryBrowserManager *)parent;
-(void)setParent:(EAWiFiUnconfiguredAccessoryBrowserManager *)arg1 ;
-(void)updateState:(long long)arg1 ;
@end
