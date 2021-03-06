/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:33 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, AVAsset, NSDate, CLLocation, NSString, PHAdjustmentData, UIImage, NSURL;

@interface PHContentEditingInput : NSObject {

	long long _sandboxExtensionHandle;
	NSObject*<OS_dispatch_queue> _avAssetIsolationQueue;
	int _fullSizeImageOrientation;
	AVAsset* _avAsset;
	long long _mediaType;
	unsigned long long _mediaSubtypes;
	NSDate* _creationDate;
	CLLocation* _location;
	NSString* _uniformTypeIdentifier;
	PHAdjustmentData* _adjustmentData;
	UIImage* _displaySizeImage;
	NSURL* _fullSizeImageURL;
	long long _baseVersion;
	NSURL* _videoURL;

}

@property (assign) long long mediaType;                            //@synthesize mediaType=_mediaType - In the implementation block
@property (assign) unsigned long long mediaSubtypes;               //@synthesize mediaSubtypes=_mediaSubtypes - In the implementation block
@property (copy) NSDate * creationDate;                            //@synthesize creationDate=_creationDate - In the implementation block
@property (copy) CLLocation * location;                            //@synthesize location=_location - In the implementation block
@property (copy) NSString * uniformTypeIdentifier;                 //@synthesize uniformTypeIdentifier=_uniformTypeIdentifier - In the implementation block
@property (retain) PHAdjustmentData * adjustmentData;              //@synthesize adjustmentData=_adjustmentData - In the implementation block
@property (retain) UIImage * displaySizeImage;                     //@synthesize displaySizeImage=_displaySizeImage - In the implementation block
@property (copy) NSURL * fullSizeImageURL;                         //@synthesize fullSizeImageURL=_fullSizeImageURL - In the implementation block
@property (assign) int fullSizeImageOrientation;                   //@synthesize fullSizeImageOrientation=_fullSizeImageOrientation - In the implementation block
@property (readonly) AVAsset * avAsset;                            //@synthesize avAsset=_avAsset - In the implementation block
@property (assign,nonatomic) long long baseVersion;                //@synthesize baseVersion=_baseVersion - In the implementation block
@property (nonatomic,copy) NSURL * videoURL;                       //@synthesize videoURL=_videoURL - In the implementation block
-(id)videoComposition;
-(id)audioMix;
-(void)consumeSandboxExtensionToken:(id)arg1 ;
-(void)requestFullSizeImageURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(UIImage *)displaySizeImage;
-(int)fullSizeImageOrientation;
-(void)_invalidateAVAsset;
-(void)loadFullSizeImageDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)imagePreview;
-(BOOL)isMediaSubtype:(unsigned long long)arg1 ;
-(long long)baseVersion;
-(void)setAdjustmentData:(PHAdjustmentData *)arg1 ;
-(void)setBaseVersion:(long long)arg1 ;
-(unsigned long long)mediaSubtypes;
-(void)setMediaSubtypes:(unsigned long long)arg1 ;
-(void)setDisplaySizeImage:(UIImage *)arg1 ;
-(NSURL *)videoURL;
-(void)setVideoURL:(NSURL *)arg1 ;
-(void)setFullSizeImageURL:(NSURL *)arg1 ;
-(void)setFullSizeImageOrientation:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(CLLocation *)location;
-(NSDate *)creationDate;
-(NSString *)uniformTypeIdentifier;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setUniformTypeIdentifier:(NSString *)arg1 ;
-(PHAdjustmentData *)adjustmentData;
-(void)setCreationDate:(NSDate *)arg1 ;
-(long long)mediaType;
-(void)setMediaType:(long long)arg1 ;
-(NSURL *)fullSizeImageURL;
-(AVAsset *)avAsset;
@end

