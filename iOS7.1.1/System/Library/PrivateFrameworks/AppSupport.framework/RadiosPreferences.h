/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:45 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol RadiosPreferencesDelegate, OS_dispatch_queue;
#import <AppSupport/AppSupport-Structs.h>
@class NSObject;

@interface RadiosPreferences : NSObject {

	SCPreferencesRef _prefs;
	int _applySkipCount;
	<RadiosPreferencesDelegate>* _delegate;
	bool _isCachedAirplaneModeValid;
	bool _cachedAirplaneMode;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	bool notifyForExternalChangeOnly;

}

@property (assign,nonatomic) bool airplaneMode; 
@property (assign,nonatomic) <RadiosPreferencesDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) bool notifyForExternalChangeOnly; 
-(void*)getValueForKey:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(oneway void)release;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)setValue:(void*)arg1 forKey:(id)arg2 ;
-(void)synchronize;
-(void)setAirplaneMode:(bool)arg1 ;
-(void)notifyTarget:(unsigned)arg1 ;
-(void)initializeSCPrefs:(id)arg1 ;
-(void)setCallback:(/*function pointer*/ void*)arg1 withContext:(SCD_Struct_Ra9*)arg2 ;
-(bool)notifyForExternalChangeOnly;
-(void)setNotifyForExternalChangeOnly:(bool)arg1 ;
-(void)refresh;
-(bool)airplaneMode;
@end
