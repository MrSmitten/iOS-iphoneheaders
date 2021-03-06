/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:26:48 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL;

@interface RAPStorage : NSObject {

	NSURL* _directoryURL;

}
-(id)initWithStorageDirectoryURL:(id)arg1 ;
-(char)_validateIdentifier:(id)arg1 error:(id*)arg2 ;
-(char)removeItemWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)orphanedIdentifiersAfterRemovingItemsOutsideOfIdentifiers:(id)arg1 ;
-(id)dataForItemWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(char)saveItemWithData:(id)arg1 forIdentifier:(id)arg2 error:(id*)arg3 ;
-(id)initByUsingOrCreatingStorageDirectoryAtURL:(id)arg1 error:(out id*)arg2 ;
-(void)removeAllItems;
@end

