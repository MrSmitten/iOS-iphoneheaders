/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:37 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLPhotoDCFObject.h>

@class PLPhotoDCFDirectory, NSString, NSMutableSet, NSDate;

@interface PLPhotoDCFFileGroup : PLPhotoDCFObject {

	id _delegate;
	PLPhotoDCFDirectory* _directory;
	NSString* _directoryPath;
	NSString* _prebakedThumbnailPath;
	NSString* _videoFileExtension;
	NSMutableSet* _extensions;
	NSDate* _date;
	NSString* _preferredExtension;
	unsigned long long _hash;
	unsigned _hashComputed : 1;
	unsigned _addedExtensions : 1;
	unsigned _writeIsPending : 1;

}
+(id)allMetadataFileExtensions;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)delegate;
-(long long)compare:(id)arg1 ;
-(BOOL)isValid;
-(id)date;
-(void)setDate:(id)arg1 ;
-(BOOL)hasThumbnail;
-(id)pathForVideoPreviewFile;
-(id)pathForFullSizeImage;
-(id)pathForVideoFile;
-(id)directory;
-(id)pathForPrebakedWildcatThumbnailsFile;
-(id)pathForTrimmedVideoFile;
-(id)pathForPrebakedLandscapeScrubberThumbnails;
-(id)pathForPrebakedPortraitScrubberThumbnails;
-(id)initWithName:(id)arg1 number:(int)arg2 directory:(id)arg3 ;
-(void)addExtension:(id)arg1 ;
-(void)deleteFiles;
-(void)setWriteIsPending:(BOOL)arg1 ;
-(id)pathForMetadata;
-(id)prebakedThumbnailFilename;
-(id)pathForGroupWithoutExtension;
-(BOOL)hasVideoFile;
-(void)addExtensionsFromMetadataDirectory;
-(id)thumbnailFilename;
-(id)prebakedLandscapeScrubberThumbnailsFilename;
-(id)prebakedPortraitScrubberThumbnailsFilename;
-(id)prebakedWildcatThumbnailsFilename;
-(id)lowResolutionFilename;
-(id)videoPreviewFilename;
-(id)imageSourceTypeHint;
-(void)deleteObsoleteFiles;
-(BOOL)hasObsoleteFiles;
-(BOOL)isValidImage;
-(void)forceAddExtensionsFromMetadataDirectory;
-(id)extensions;
-(id)pathForContainingDirectory;
-(id)pathForMetadataWithGroupName;
-(void)createMetadataDirectoryIfNecessary;
-(id)pathForThumbnailFile;
-(id)pathForPrebakedThumbnail;
-(id)pathForLowResolutionFile;
-(BOOL)hasPrebakedThumbnail;
-(BOOL)hasPrebakedLandscapeScrubberThumbnails;
-(BOOL)hasPrebakedPortraitScrubberThumbnails;
-(BOOL)hasPrebakedWildcatThumbnails;
-(BOOL)isWritePending;
@end

