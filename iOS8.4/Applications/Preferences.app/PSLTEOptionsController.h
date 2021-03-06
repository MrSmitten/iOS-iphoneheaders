/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:09 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Preferences.app/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSListItemsController.h>
#import <UIKit/UIAlertViewDelegate.h>

@class NSString;

@interface PSLTEOptionsController : PSListItemsController <UIAlertViewDelegate>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_executeCTConnectionDependentBlock:(/*^block*/id)arg1 ;
+(unsigned)voiceAvailability;
+(char)isOnCallOfSubType:(CFStringRef)arg1 ;
+(char)isVoiceEnabled;
+(char)isProvisioning;
+(char)shouldShowVoiceOptions;
+(void)setVoiceEnabled:(char)arg1 ;
-(void)updateProvisioning;
-(char)presentOnCallAlertIfNeededForService:(unsigned)arg1 okayCompletion:(/*^block*/id)arg2 ;
-(void)presentCallCarrierAlert;
-(void)dealloc;
-(id)init;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)specifiers;
-(void)listItemSelected:(id)arg1 ;
@end

