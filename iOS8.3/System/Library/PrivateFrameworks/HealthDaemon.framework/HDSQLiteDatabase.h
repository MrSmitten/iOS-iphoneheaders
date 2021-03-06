/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:57:59 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <HealthDaemon/HealthDaemon-Structs.h>
@class NSMutableDictionary, NSURL;

@interface HDSQLiteDatabase : NSObject {

	sqlite3Ref _db;
	char _isInTransaction;
	int _transactionType;
	CFDictionaryRef _statementCache;
	NSMutableDictionary* _attachedDatabaseURLsByName;
	NSURL* _fileURL;

}

@property (nonatomic,readonly) NSURL * fileURL;              //@synthesize fileURL=_fileURL - In the implementation block
+(char)statementDidFinishAfterStepping:(sqlite3_stmtRef)arg1 error:(id*)arg2 ;
+(char)statementHasRowAfterStepping:(sqlite3_stmtRef)arg1 resultCode:(int*)arg2 error:(id*)arg3 ;
+(char)statementHasRowAfterStepping:(sqlite3_stmtRef)arg1 error:(id*)arg2 ;
+(char)statementDidFinishAfterStepping:(sqlite3_stmtRef)arg1 resultCode:(int*)arg2 error:(id*)arg3 ;
+(void)resetStatement:(sqlite3_stmtRef)arg1 finalize:(char)arg2 ;
+(id)virtualFilesystemModule;
+(char)_stepStatement:(sqlite3_stmtRef)arg1 hasRow:(char*)arg2 resultCode:(int*)arg3 error:(id*)arg4 ;
+(char)deleteDatabaseAtPath:(id)arg1 ;
-(void)dealloc;
-(NSURL *)fileURL;
-(int)open;
-(char)executeSQL:(id)arg1 ;
-(char)executeSQL:(id)arg1 error:(id*)arg2 ;
-(char)executeSQL:(id)arg1 argument:(id)arg2 error:(id*)arg3 ;
-(char)prepareStatementForSQL:(id)arg1 cache:(char)arg2 error:(id*)arg3 usingBlock:(/*^block*/id)arg4 ;
-(char)performTransactionWithType:(int)arg1 error:(id*)arg2 usingBlock:(/*^block*/id)arg3 ;
-(sqlite3_stmtRef)preparedStatementForSQL:(id)arg1 cache:(char)arg2 error:(id*)arg3 ;
-(id)getLastErrorWithResultCode:(int)arg1 ;
-(int)_openWithPath:(id)arg1 ;
-(char)executeSQL:(id)arg1 error:(id*)arg2 retryIfBusy:(char)arg3 ;
-(sqlite3_stmtRef)_statementForSQL:(id)arg1 cache:(char)arg2 error:(id*)arg3 ;
-(char)_setPragma:(id)arg1 integerValue:(int)arg2 withDatabaseName:(id)arg3 ;
-(int)_integerValueForPragma:(id)arg1 databaseName:(id)arg2 ;
-(char)alterTable:(id)arg1 removeColumns:(id)arg2 renameColumns:(id)arg3 ;
-(char)isDatabaseWithNameAttached:(id)arg1 ;
-(void)performTransactionWithType:(int)arg1 usingBlock:(/*^block*/id)arg2 ;
-(char)setUserVersion:(int)arg1 withDatabaseName:(id)arg2 ;
-(int)userVersionWithDatabaseName:(id)arg1 ;
-(char)setSchemaVersion:(int)arg1 withDatabaseName:(id)arg2 ;
-(int)schemaVersionWithDatabaseName:(id)arg1 ;
-(char)addColumnInTable:(id)arg1 columnSQL:(id)arg2 ;
-(char)removeColumnInTable:(id)arg1 name:(id)arg2 ;
-(char)renameColumnInTable:(id)arg1 oldName:(id)arg2 newName:(id)arg3 ;
-(char)renameTable:(id)arg1 newName:(id)arg2 ;
-(char)insertColumns:(id)arg1 fromTableNamed:(id)arg2 toTableNamed:(id)arg3 ;
-(char)attachDatabaseWithName:(id)arg1 fileURL:(id)arg2 error:(id*)arg3 ;
-(void)detachDatabaseWithName:(id)arg1 ;
-(char)dropTable:(id)arg1 ;
-(id)initWithDatabaseURL:(id)arg1 ;
-(void)accessDatabaseUsingBlock:(/*^block*/id)arg1 ;
@end

