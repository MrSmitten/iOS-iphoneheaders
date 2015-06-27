/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:52 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRC/CoreRC-Structs.h>
#import <CoreRC/CoreRCInterface.h>

@protocol CECInterfaceDelegate;
@class NSDictionary;

@interface CECInterface : CoreRCInterface {

	char _promiscMode;
	unsigned short _addressMask;
	id<CECInterfaceDelegate> _delegate;
	CECFrame _lastReceivedFrame;

}

@property (assign,nonatomic) id<CECInterfaceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned short addressMask;                   //@synthesize addressMask=_addressMask - In the implementation block
@property (nonatomic,readonly) char promiscMode;                             //@synthesize promiscMode=_promiscMode - In the implementation block
@property (nonatomic,readonly) NSDictionary * properties; 
@property (nonatomic,readonly) char isValid; 
@property (nonatomic,readonly) CECFrame lastReceivedFrame;                   //@synthesize lastReceivedFrame=_lastReceivedFrame - In the implementation block
-(void)setDelegate:(id<CECInterfaceDelegate>)arg1 ;
-(id<CECInterfaceDelegate>)delegate;
-(char)isValid;
-(NSDictionary *)properties;
-(char)sendFrame:(CECFrame)arg1 withRetryCount:(unsigned char)arg2 error:(id*)arg3 ;
-(char)pingTo:(unsigned char)arg1 acknowledged:(char*)arg2 error:(id*)arg3 ;
-(unsigned short)addressMask;
-(char)promiscMode;
-(void)receivedFrame:(CECFrame)arg1 ;
-(char)errorIsNack:(id)arg1 ;
-(char)setAddressMask:(unsigned short)arg1 error:(id*)arg2 ;
-(char)setPromiscMode:(char)arg1 error:(id*)arg2 ;
-(char)sendFrame:(CECFrame)arg1 error:(id*)arg2 ;
-(char)allocateCECAddress:(unsigned char*)arg1 forDeviceType:(unsigned char)arg2 error:(id*)arg3 ;
-(CECFrame)lastReceivedFrame;
-(char)sendMessage:(id)arg1 withRetryCount:(unsigned char)arg2 error:(id*)arg3 ;
-(char)sendMessage:(id)arg1 error:(id*)arg2 ;
@end
