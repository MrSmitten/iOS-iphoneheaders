/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:39 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MobileActivation.framework/Support/mobactivationd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSDictionary, NSArray, MobileActivationDaemon;

@interface LockdownMessenger : NSObject {

	void* message;
	NSDictionary* cmdContent;
	NSArray* stuffFunctions;
	MobileActivationDaemon* _mobDaemon;

}

@property (assign) MobileActivationDaemon * mobDaemon;              //@synthesize mobDaemon=_mobDaemon - In the implementation block
-(MobileActivationDaemon *)mobDaemon;
-(id)madCmdDeactivate;
-(id)madCmdGetActivationInfo;
-(id)madCmdGetRecertInfo;
-(id)madCmdHandleActivate;
-(id)madCmdHandleRecert;
-(id)madCmdGetActivationStatus;
-(id)madCmdGetBrickState;
-(void)setMobDaemon:(MobileActivationDaemon *)arg1 ;
@end
