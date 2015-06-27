/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:47 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PLPhotoLibrary, NSString, NSMutableIndexSet, NSMutableSet, NSMutableDictionary;

@interface PLFileSystemAssetImporter : NSObject {

	PLPhotoLibrary* _photoLibrary;
	NSString* _photoLibraryStoreUUID;
	NSMutableIndexSet* _thumbIndexes;
	char _hasProcessedAnyAssets;
	NSMutableSet* _existingUUIDs;
	NSMutableDictionary* _existingUUIDsByPath;
	NSMutableDictionary* _existingOIDsByUUID;
	unsigned _thumbnailBatchFetchSize;

}

@property (nonatomic,retain) NSMutableSet * existingUUIDs;                           //@synthesize existingUUIDs=_existingUUIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * existingUUIDsByPath;              //@synthesize existingUUIDsByPath=_existingUUIDsByPath - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * existingOIDsByUUID;               //@synthesize existingOIDsByUUID=_existingOIDsByUUID - In the implementation block
@property (assign,nonatomic) unsigned thumbnailBatchFetchSize;                       //@synthesize thumbnailBatchFetchSize=_thumbnailBatchFetchSize - In the implementation block
-(void)dealloc;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(void)setExistingUUIDs:(NSMutableSet *)arg1 ;
-(void)setExistingUUIDsByPath:(NSMutableDictionary *)arg1 ;
-(void)setExistingOIDsByUUID:(NSMutableDictionary *)arg1 ;
-(id)addAssetWithURLs:(id)arg1 forceInsert:(char)arg2 forceUpdate:(char)arg3 ;
-(void)setThumbnailBatchFetchSize:(unsigned)arg1 ;
-(id)assetURLisInDatabase:(id)arg1 ;
-(id)_addAssetWithURL:(id)arg1 existingOID:(id)arg2 ;
-(char)setupPhotoAsset:(id)arg1 withURL:(id)arg2 ;
-(char)setupVideoAsset:(id)arg1 withURL:(id)arg2 ;
-(void)setModificationAndCreationDateOnAsset:(id)arg1 withURL:(id)arg2 ;
-(unsigned)nextThumbnailIndex;
-(unsigned)thumbnailBatchFetchSize;
-(id)addAssetWithURLs:(id)arg1 ;
-(void)addAvailableThumbnailIndex:(unsigned)arg1 ;
-(NSMutableSet *)existingUUIDs;
-(NSMutableDictionary *)existingUUIDsByPath;
-(NSMutableDictionary *)existingOIDsByUUID;
@end
