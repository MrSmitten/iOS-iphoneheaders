/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:01 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/HealthKitUI.framework/HealthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HealthKitUI/HealthKitUI-Structs.h>
#import <HealthKitUI/NSCopying.h>

@class HKSampleType, NSString, HKUnit;

@interface HKDataUnit : NSObject <NSCopying> {

	BOOL _isCharacteristic;
	BOOL _listeningForLocaleChanges;
	HKSampleType* _dataType;
	NSString* _displayName;
	NSString* _singularDisplayName;
	HKUnit* _unit;
	double _scalarValue;
	long long _keyboardType;

}

@property (nonatomic,readonly) HKSampleType * dataType;                     //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                      //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSString * singularDisplayName;              //@synthesize singularDisplayName=_singularDisplayName - In the implementation block
@property (nonatomic,readonly) HKUnit * unit;                               //@synthesize unit=_unit - In the implementation block
@property (nonatomic,readonly) double scalarValue;                          //@synthesize scalarValue=_scalarValue - In the implementation block
@property (assign,nonatomic) long long keyboardType;                        //@synthesize keyboardType=_keyboardType - In the implementation block
-(HKSampleType *)dataType;
-(void)localeDidChange:(id)arg1 ;
-(id)_initAsCopyOf:(id)arg1 ;
-(id)initFromDictionary:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)keyboardType;
-(void)setKeyboardType:(long long)arg1 ;
-(NSString *)displayName;
-(BOOL)isNikeFuel;
-(BOOL)isSleep;
-(BOOL)isCharacteristic;
-(id)_dataTypeForIdentifier:(id)arg1 aggregationType:(id)arg2 ;
-(id)_unitForCurrentLocale;
-(id)_displayNameForUnit:(id)arg1 localizablePrefix:(id)arg2 ;
-(id)_unitForString:(id)arg1 ;
-(id)_massUnitForCurrentLocale;
-(id)_lengthUnitForCurrentLocaleWithLongLength:(BOOL)arg1 ;
-(id)_temperatureUnitForCurrentLocale;
-(id)adjustedValueForDaemonValue:(id)arg1 ;
-(id)adjustedValueForClientValue:(id)arg1 ;
-(NSString *)singularDisplayName;
-(double)scalarValue;
-(HKUnit *)unit;
@end
