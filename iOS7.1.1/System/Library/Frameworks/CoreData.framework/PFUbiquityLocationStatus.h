/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class PFUbiquityLocation, NSError;

@interface PFUbiquityLocationStatus : NSObject {

	bool _isLive;
	bool _isDeleted;
	bool _isDownloaded;
	bool _isDownloading;
	bool _isUploaded;
	bool _isUploading;
	bool _isImported;
	bool _isScheduled;
	bool _isExported;
	bool _isFailed;
	PFUbiquityLocation* _location;
	NSError* _error;
	unsigned long long _hash;
	long long _numBytes;
	long long _numNotifications;

}

@property (nonatomic,readonly) bool isLive;                                //@synthesize isLive=_isLive - In the implementation block
@property (nonatomic,readonly) bool isDeleted;                             //@synthesize isDeleted=_isDeleted - In the implementation block
@property (nonatomic,readonly) bool isDownloaded;                          //@synthesize isDownloaded=_isDownloaded - In the implementation block
@property (assign,nonatomic) bool isDownloading;                           //@synthesize isDownloading=_isDownloading - In the implementation block
@property (nonatomic,readonly) bool isUploaded;                            //@synthesize isUploaded=_isUploaded - In the implementation block
@property (nonatomic,readonly) bool isUploading;                           //@synthesize isUploading=_isUploading - In the implementation block
@property (nonatomic,readonly) bool isScheduled;                           //@synthesize isScheduled=_isScheduled - In the implementation block
@property (nonatomic,readonly) bool isImported;                            //@synthesize isImported=_isImported - In the implementation block
@property (nonatomic,readonly) bool isExported;                            //@synthesize isExported=_isExported - In the implementation block
@property (nonatomic,readonly) bool isFailed;                              //@synthesize isFailed=_isFailed - In the implementation block
@property (nonatomic,readonly) long long numBytes;                         //@synthesize numBytes=_numBytes - In the implementation block
@property (nonatomic,readonly) NSError * error;                            //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * location;              //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) long long numNotifications;                 //@synthesize numNotifications=_numNotifications - In the implementation block
-(long long)numBytes;
-(void)statusDidChange;
-(id)initWithLocation:(id)arg1 ;
-(void)checkFileURLState;
-(void)logWasImported;
-(void)logWasScheduled;
-(void)logImportWasCancelled;
-(void)logWasExported;
-(void)encounteredError:(id)arg1 ;
-(void)recoveredFromError;
-(bool)isLive;
-(bool)isDownloaded;
-(bool)isDownloading;
-(void)setIsDownloading:(bool)arg1 ;
-(bool)isUploaded;
-(bool)isUploading;
-(bool)isImported;
-(bool)isExported;
-(bool)isScheduled;
-(bool)isFailed;
-(long long)numNotifications;
-(void)dealloc;
-(id)init;
-(unsigned long long)hash;
-(id)description;
-(id)location;
-(bool)isDeleted;
-(id)error;
@end
