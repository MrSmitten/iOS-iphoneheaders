/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:21 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AXHearingAidSupport/AXHearingAidSupport-Structs.h>
#import <Preferences/PSListController.h>

@class AXRemoteHearingAidDevice;

@interface AXHearingDetailViewController : PSListController {

	char _isLiveListening;
	AXRemoteHearingAidDevice* _device;

}

@property (nonatomic,retain) AXRemoteHearingAidDevice * device;              //@synthesize device=_device - In the implementation block
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewDidDisappear:(char)arg1 ;
-(void)updateView;
-(id)specifierForKey:(id)arg1 ;
-(void)updateLiveListenCell:(id)arg1 ;
-(id)deviceSpecifiers;
-(id)_volumeSpecifiers;
-(id)_modeSpecifiers;
-(void)liveListenToggle:(id)arg1 ;
-(id)disconnectedSpecifiers;
-(void)addVolumesForStream:(id)arg1 ;
-(NSRange)programsRange;
-(id)specifiers;
-(AXRemoteHearingAidDevice *)device;
-(void)setDevice:(AXRemoteHearingAidDevice *)arg1 ;
@end
