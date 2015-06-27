/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:46 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedAlbum.h>

@class NSString;

@interface PLPhotoStreamAlbum : PLManagedAlbum

@property (nonatomic,retain) NSString * personID; 
+(id)entityName;
+(id)photoStreamAlbumWithStreamID:(id)arg1 inPhotoLibrary:(id)arg2 createIfNeeded:(char)arg3 ;
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)keyPathsForValuesAffectingPersonID;
-(char)shouldDeleteWhenEmpty;
-(NSString *)personID;
-(void)addAssetOrderedByDataTaken:(id)arg1 ;
-(void)enforceImageLimitIfNecessary;
-(void)awakeFromInsert;
-(void)setPersonID:(NSString *)arg1 ;
@end
