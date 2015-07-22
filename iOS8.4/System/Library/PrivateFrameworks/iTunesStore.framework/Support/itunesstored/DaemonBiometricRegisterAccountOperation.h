/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:02 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSNumber;

@interface DaemonBiometricRegisterAccountOperation : ISOperation {

	NSNumber* _accountID;

}

@property (readonly) NSNumber * accountIdentifier; 
-(BOOL)_shouldPromptForPinCode;
-(id)_newSourceByStartingTimeoutTimer;
-(id)initWithAccountIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)run;
-(NSNumber *)accountIdentifier;
@end
