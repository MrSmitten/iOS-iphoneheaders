/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:39 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/MobileContainerManager.framework/Support/containermanagerd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol ContainerManagerProtocol
@required
-(void)containersWithClass:(long long)arg1 temporary:(BOOL)arg2 withReply:(/*^block*/id)arg3;
-(void)createOrLookupContainerWithId:(id)arg1 createIfNecessary:(BOOL)arg2 containerClass:(long long)arg3 temporary:(BOOL)arg4 withReply:(/*^block*/id)arg5;
-(void)replaceContainer:(id)arg1 withContainer:(id)arg2 identifierOld:(id)arg3 identifierNew:(id)arg4 containerClassOld:(long long)arg5 containerClassNew:(long long)arg6 withReply:(/*^block*/id)arg7;
-(void)stageForDeleteContainersWithUUIDStrings:(id)arg1 identifiers:(id)arg2 classes:(id)arg3 withReply:(/*^block*/id)arg4;
-(void)deleteContainersOnDeathRowWithReply:(/*^block*/id)arg1;
-(void)setInfoValue:(id)arg1 forKey:(id)arg2 uuid:(id)arg3 identifier:(id)arg4 containerClass:(long long)arg5 withReply:(/*^block*/id)arg6;
-(void)infoValueForKey:(id)arg1 uuid:(id)arg2 identifier:(id)arg3 containerClass:(long long)arg4 withReply:(/*^block*/id)arg5;
-(void)metadataWithUUID:(id)arg1 identifier:(id)arg2 containerClass:(long long)arg3 withReply:(/*^block*/id)arg4;
-(void)restoreContainerAtUrl:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)restoreContainerAtUrl:(id)arg1 containerClass:(long long)arg2 identifier:(id)arg3 info:(id)arg4 withReply:(/*^block*/id)arg5;
-(void)recreateDefaultStructureWithUUID:(id)arg1 identifier:(id)arg2 containerClass:(long long)arg3 withReply:(/*^block*/id)arg4;
-(void)regenerateDirectoryUUIDWithInternalUUID:(id)arg1 identifier:(id)arg2 containerClass:(long long)arg3 withReply:(/*^block*/id)arg4;

@end

