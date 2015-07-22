/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:15 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSUUID;

@interface MPContentTastePendingUpdateRecord : NSObject {

	NSString* _playlistGlobalID;
	long long _storeAdamID;
	unsigned long long _tasteType;
	long long _type;
	NSUUID* _UUID;

}

@property (nonatomic,readonly) NSString * playlistGlobalID;               //@synthesize playlistGlobalID=_playlistGlobalID - In the implementation block
@property (nonatomic,readonly) long long storeAdamID;                     //@synthesize storeAdamID=_storeAdamID - In the implementation block
@property (nonatomic,readonly) unsigned long long tasteType;              //@synthesize tasteType=_tasteType - In the implementation block
@property (nonatomic,readonly) long long type;                            //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSUUID * UUID;                             //@synthesize UUID=_UUID - In the implementation block
-(long long)storeAdamID;
-(id)initWithPlaylistGlobalID:(id)arg1 tasteType:(unsigned long long)arg2 ;
-(id)initWithStoreAdamID:(long long)arg1 tasteType:(unsigned long long)arg2 ;
-(unsigned long long)tasteType;
-(void)_initializeWithType:(long long)arg1 tasteType:(unsigned long long)arg2 ;
-(NSString *)playlistGlobalID;
-(long long)type;
-(NSUUID *)UUID;
@end
