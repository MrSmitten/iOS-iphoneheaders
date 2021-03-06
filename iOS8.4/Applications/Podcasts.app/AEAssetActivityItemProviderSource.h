/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:07 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/AEUserPublishingDataSource.h>
#import <Podcasts/AEAssetHTMLGeneratorDataSource.h>

@class UIImage, NSURL, NSString;

@interface AEAssetActivityItemProviderSource : NSObject <AEUserPublishingDataSource, AEAssetHTMLGeneratorDataSource> {

	UIImage* _assetCover;
	NSURL* _storeUrl;
	NSURL* _storeShortUrl;
	char _storeUrlRequested;
	char _storeShortUrlRequested;
	NSString* _epubID;
	NSString* _storeId;
	/*^block*/id _propertySource;
	NSString* _activityType;

}

@property (nonatomic,copy) id propertySource;                       //@synthesize propertySource=_propertySource - In the implementation block
@property (nonatomic,retain) NSString * activityType;               //@synthesize activityType=_activityType - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)citationWithPropertySource:(/*^block*/id)arg1 activityType:(id)arg2 storeURL:(id)arg3 pageRange:(NSRange)arg4 ;
+(id)activityItemProviderWithPropertySource:(/*^block*/id)arg1 ;
-(id)initWithPropertySource:(/*^block*/id)arg1 ;
-(id)propertySource;
-(id)assetCover;
-(id)storeUrl;
-(char)isStoreAsset;
-(id)epubID;
-(id)publisherLocation;
-(id)publisherName;
-(id)publisherYear;
-(char)contentProtected;
-(id)readingDirection;
-(id)userPublishing:(id)arg1 storeURLForStoreId:(id)arg2 ;
-(id)userPublishing:(id)arg1 storeShortURLForStoreId:(id)arg2 ;
-(id)assetCoverForHTMLGenerator:(id)arg1 ;
-(id)storeURLForHTMLGenerator:(id)arg1 ;
-(id)HTMLGenerator:(id)arg1 citationForStoreURL:(id)arg2 ;
-(id)citation;
-(void)populateHTMLGenerator:(id)arg1 ;
-(id)storeShortUrl;
-(id)checkOutBookWithShortCitationWithCharacterLimit:(unsigned)arg1 ;
-(void)setPropertySource:(id)arg1 ;
-(void)dealloc;
-(id)title;
-(NSString *)activityType;
-(id)genre;
-(id)storeId;
-(id)author;
-(void)setActivityType:(NSString *)arg1 ;
@end

