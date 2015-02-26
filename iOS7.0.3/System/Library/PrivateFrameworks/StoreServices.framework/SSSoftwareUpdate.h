/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:44 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSDictionary, NSDate, NSString;

@interface SSSoftwareUpdate : NSObject {

	NSDictionary* _dictionary;
	NSDate* _installDate;
	int _updateState;

}

@property (nonatomic,readonly) NSDictionary * updateDictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,copy) NSDate * installDate;                             //@synthesize installDate=_installDate - In the implementation block
@property (nonatomic,readonly) int parentalControlsRank; 
@property (nonatomic,readonly) long long storeItemIdentifier; 
@property (assign,nonatomic) int updateState;                                //@synthesize updateState=_updateState - In the implementation block
-(long long)storeItemIdentifier;
-(void)dealloc;
-(id)bundleIdentifier;
-(int)updateState;
-(id)installDate;
-(void)setInstallDate:(id)arg1 ;
-(int)parentalControlsRank;
-(id)initWithUpdateDictionary:(id)arg1 ;
-(void)setUpdateState:(int)arg1 ;
-(id)updateDictionary;
@end
