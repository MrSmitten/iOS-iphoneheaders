/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSSecureCoding.h>

@protocol DAFolderChangeConsumer;
@class NSString;

@interface DAFolderChange : NSObject <NSSecureCoding> {

	int _changeType;
	NSString* _folderId;
	NSString* _parentFolderId;
	NSString* _displayName;
	int _dataclass;
	BOOL _renameOnCollision;
	unsigned _taskId;
	<DAFolderChangeConsumer>* _consumer;

}

@property (readonly) int changeType;                                 //@synthesize changeType=_changeType - In the implementation block
@property (readonly) NSString * folderId;                            //@synthesize folderId=_folderId - In the implementation block
@property (readonly) NSString * parentFolderId;                      //@synthesize parentFolderId=_parentFolderId - In the implementation block
@property (readonly) NSString * displayName;                         //@synthesize displayName=_displayName - In the implementation block
@property (readonly) int dataclass;                                  //@synthesize dataclass=_dataclass - In the implementation block
@property (assign) BOOL renameOnCollision;                           //@synthesize renameOnCollision=_renameOnCollision - In the implementation block
@property (assign) <DAFolderChangeConsumer> * consumer;              //@synthesize consumer=_consumer - In the implementation block
@property (assign) unsigned taskId;                                  //@synthesize taskId=_taskId - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)mf_deferredOperation;
-(id)consumer;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)displayName;
-(int)dataclass;
-(void)setFolderId:(id)arg1 ;
-(BOOL)renameOnCollision;
-(unsigned)taskId;
-(void)setTaskId:(unsigned)arg1 ;
-(id)initFolderChangeWithChangeType:(int)arg1 folderId:(id)arg2 parentFolderId:(id)arg3 displayName:(id)arg4 dataclass:(int)arg5 consumer:(id)arg6 ;
-(void)setConsumer:(id)arg1 ;
-(id)folderId;
-(void)setRenameOnCollision:(BOOL)arg1 ;
-(id)parentFolderId;
-(int)changeType;
-(void)setDisplayName:(id)arg1 ;
@end

