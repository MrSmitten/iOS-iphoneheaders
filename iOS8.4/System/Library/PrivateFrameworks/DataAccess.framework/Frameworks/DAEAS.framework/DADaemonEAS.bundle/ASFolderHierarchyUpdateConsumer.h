/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:01 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DADaemonEAS.bundle/DADaemonEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ASFolderHierarchyUpdateConsumer <NSObject>
@required
-(void)folderHierarchySuccessfullyUpdated:(id)arg1 withNumChangedFolders:(unsigned long long)arg2;
-(void)folderHierarchyFailedToUpdate:(id)arg1 withStatus:(long long)arg2 andError:(id)arg3;

@end

