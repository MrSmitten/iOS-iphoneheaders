/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:05 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <cloudphotod/CPLDaemonLibraryManagerProtocol.h>
#import <cloudphotod/CPLLibraryManagerDelegate.h>
#import <cloudphotod/CPLResourceProgressDelegate.h>
#import <cloudphotod/NSXPCConnectionDelegate.h>

@protocol OS_dispatch_queue, CPLDaemonLibraryManagerDelegate;
@class CPLLibraryManager, CPLDirectLibraryManager, NSMutableDictionary, NSObject, Protocol, NSXPCConnection, NSString;

@interface CPLDaemonLibraryManager : NSObject <CPLDaemonLibraryManagerProtocol, CPLLibraryManagerDelegate, CPLResourceProgressDelegate, NSXPCConnectionDelegate> {

	CPLLibraryManager* _manager;
	CPLDirectLibraryManager* _platformManager;
	NSMutableDictionary* _downloadTasksPerIdentifier;
	NSMutableDictionary* _uploadTasksPerIdentifier;
	NSObject*<OS_dispatch_queue> _queue;
	Protocol* _allowedProtocol;
	NSXPCConnection* _connection;
	NSString* _name;
	id<CPLDaemonLibraryManagerDelegate> _delegate;

}

@property (nonatomic,readonly) NSXPCConnection * connection;                                   //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (assign,nonatomic,__weak) id<CPLDaemonLibraryManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConnection:(id)arg1 name:(id)arg2 queue:(id)arg3 allowedProcol:(id)arg4 ;
-(id)_clientWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_storeUploadTransferTask:(id)arg1 ;
-(BOOL)isLibraryManager:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<CPLDaemonLibraryManagerDelegate>)arg1 ;
-(NSString *)description;
-(id<CPLDaemonLibraryManagerDelegate>)delegate;
-(NSString *)name;
-(NSXPCConnection *)connection;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(void)disableSynchronizationWithReason:(id)arg1 ;
-(void)enableSynchronizationWithReason:(id)arg1 ;
-(void)getMappedIdentifiersForIdentifiers:(id)arg1 inAreLocalIdentifiers:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)resetStatus;
-(void)setDiagnosticsEnabled:(BOOL)arg1 ;
-(void)getResourcesForItemWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)compactFileCacheWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)downloadOriginalsOfType:(id)arg1 localIdentifiers:(id)arg2 destinationURL:(id)arg3 progressIdentifier:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)getListOfComponentsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getStatusArrayForComponents:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cloudCacheGetDescriptionForRecordWithIdentifier:(id)arg1 related:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)beginPushSessionWithKnownLibraryVersion:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)beginPullSessionWithKnownLibraryVersion:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)finalizeSessionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)openLibraryWithClientLibraryBaseURL:(id)arg1 cloudLibraryStateStorageURL:(id)arg2 cloudLibraryResourceStorageURL:(id)arg3 libraryIdentifier:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)closeLibraryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)removeLibraryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)deactivateLibraryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)beginDownloadForResource:(id)arg1 clientBundleID:(id)arg2 highPriority:(BOOL)arg3 reply:(/*^block*/id)arg4 ;
-(void)deleteResourcesIfSafe:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)resetCacheWithOption:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startSyncSession;
-(void)publishResource:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)addInfoToLog:(id)arg1 ;
-(void)getStatusForComponents:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)commitChangeBatch:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)acknowledgeChangeBatch:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)getChangeBatchWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)takeStatisticsSnapshotSinceDate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)noteClientIsInForeground;
-(void)noteClientIsInBackground;
-(void)libraryManager:(id)arg1 downloadDidStartForResourceTransferTask:(id)arg2 ;
-(void)libraryManager:(id)arg1 downloadDidFinishForResourceTransferTask:(id)arg2 withError:(id)arg3 ;
-(void)libraryManager:(id)arg1 backgroundDownloadDidFinishForResource:(id)arg2 ;
-(void)libraryManager:(id)arg1 uploadDidStartForResourceTransferTask:(id)arg2 ;
-(void)libraryManager:(id)arg1 uploadDidFinishForResourceTransferTask:(id)arg2 withError:(id)arg3 ;
-(void)libraryManager:(id)arg1 backgroundDownloadDidFailForResource:(id)arg2 ;
-(void)libraryManager:(id)arg1 downloadDidProgress:(float)arg2 forResourceTransferTask:(id)arg3 ;
-(void)libraryManager:(id)arg1 uploadDidProgress:(float)arg2 forResourceTransferTask:(id)arg3 ;
-(void)sizeOfResourcesToUploadDidChangeForLibraryManager:(id)arg1 ;
-(void)libraryManagerStatusDidChange:(id)arg1 ;
-(void)libraryManagerDidStartSynchronization:(id)arg1 ;
-(void)libraryManagerHasChangesToPull:(id)arg1 ;
-(id)displayableName;
-(void)cancelTaskWithIdentifier:(id)arg1 ;
@end
