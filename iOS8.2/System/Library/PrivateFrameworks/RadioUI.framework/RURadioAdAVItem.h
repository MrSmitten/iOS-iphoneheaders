/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:56 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MPAVAdItem.h>

@class RURadioAdTrack, RadioStation, NSString;

@interface RURadioAdAVItem : MPAVAdItem {

	RURadioAdTrack* _adTrack;
	RadioStation* _station;
	NSString* _stationHash;
	NSString* _stationName;
	long long _stationID;

}

@property (nonatomic,retain) RadioStation * station;                //@synthesize station=_station - In the implementation block
@property (nonatomic,readonly) NSString * stationHash;              //@synthesize stationHash=_stationHash - In the implementation block
@property (nonatomic,readonly) long long stationID;                 //@synthesize stationID=_stationID - In the implementation block
@property (nonatomic,readonly) NSString * stationName;              //@synthesize stationName=_stationName - In the implementation block
-(void)loadAssetAndPlayerItem;
-(char)isValidPlayerSubstituteForItem:(id)arg1 ;
-(char)isStreamable;
-(id)mainTitle;
-(char)supportsSkip;
-(id)titlesForTime:(double)arg1 ;
-(void)reevaluateType;
-(id)artworkCatalogForPlaybackTime:(double)arg1 ;
-(NSString *)stationHash;
-(long long)stationID;
-(void)_applyLoudnessInfo;
-(unsigned)type;
-(id)title;
-(id)album;
-(id)mpuReporting_containerID;
-(unsigned)mpuReporting_containerType;
-(unsigned)mpuReporting_itemType;
-(id)mpuReporting_personalizedContainerID;
-(char)mpuReporting_shouldReportPlayEventsToStore;
-(id)adTrack;
-(id)initWithAdTrack:(id)arg1 ;
-(id)mpuReporting_externalID;
-(RadioStation *)station;
-(void)setStation:(RadioStation *)arg1 ;
-(NSString *)stationName;
@end

