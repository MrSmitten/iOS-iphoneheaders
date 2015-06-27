/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:50 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSNumber, HAPService, HAPCharacteristicMetadata;

@interface HAPCharacteristic : NSObject {

	char _eventNotificationsEnabled;
	NSString* _type;
	NSNumber* _instanceID;
	HAPService* _service;
	unsigned _properties;
	HAPCharacteristicMetadata* _metadata;
	id _value;

}

@property (nonatomic,copy) NSString * type;                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSNumber * instanceID;                               //@synthesize instanceID=_instanceID - In the implementation block
@property (assign,nonatomic,__weak) HAPService * service;                       //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) unsigned properties;                               //@synthesize properties=_properties - In the implementation block
@property (assign,nonatomic) char eventNotificationsEnabled;                    //@synthesize eventNotificationsEnabled=_eventNotificationsEnabled - In the implementation block
@property (nonatomic,retain) HAPCharacteristicMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy) id value;                                            //@synthesize value=_value - In the implementation block
+(id)masterCharacteristicsUUIDDictionary;
+(id)characteristicTypeFromUUIDString:(id)arg1 ;
-(id)description;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setValue:(id)arg1 ;
-(id)value;
-(unsigned)properties;
-(void)setProperties:(unsigned)arg1 ;
-(void)setEventNotificationsEnabled:(char)arg1 ;
-(id)validateValue:(id)arg1 outValue:(id*)arg2 ;
-(NSNumber *)instanceID;
-(char)isEqualToCharacteristic:(id)arg1 ;
-(id)initWithType:(id)arg1 instanceID:(id)arg2 value:(id)arg3 properties:(unsigned)arg4 eventNotificationsEnabled:(char)arg5 metadata:(id)arg6 ;
-(HAPService *)service;
-(void)setService:(HAPService *)arg1 ;
-(void)setInstanceID:(NSNumber *)arg1 ;
-(id)_getDefaultMetadata;
-(void)_updateMetadata:(id)arg1 withProvidedMetadata:(id)arg2 ;
-(id)_generateValidMetadata:(id)arg1 ;
-(id)propertiesDescription;
-(char)eventNotificationsEnabled;
-(void)setMetadata:(HAPCharacteristicMetadata *)arg1 ;
-(HAPCharacteristicMetadata *)metadata;
@end
