/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:05:49 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <cloudphotod/CPLPrequeliteStorage.h>
#import <cloudphotod/CPLEngineResourceStorageImplementation.h>

@class CPLPrequeliteVariable, NSString;

@interface CPLPrequeliteResourceStorage : CPLPrequeliteStorage <CPLEngineResourceStorageImplementation> {

	CPLPrequeliteVariable* _totalSizeVar;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)initializeStorage;
-(char)upgradeStorageToVersion:(long long)arg1 ;
-(char)_incrementTotalResourceSize:(unsigned long long)arg1 error:(id*)arg2 ;
-(char)_decrementTotalResourceSize:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)status;
-(unsigned)retainCountForIdentity:(id)arg1 ;
-(char)retainIdentity:(id)arg1 error:(id*)arg2 ;
-(char)releaseIdentity:(id)arg1 lastReference:(char*)arg2 error:(id*)arg3 ;
-(void)enumerateIdentitiesWithBlock:(/*^block*/id)arg1 ;
-(char)resetWithError:(id*)arg1 ;
-(id)initWithAbstractObject:(id)arg1 ;
-(unsigned long long)totalResourceSize;
@end
