/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:26 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSSQLCore;

@interface NSSQLGenerator : NSObject {

	NSSQLCore* _persistentStore;

}
+(void)initialize;
-(id)initWithPersistentStore:(id)arg1 ;
-(id)newSQLStatementForFetchRequest:(id)arg1 ignoreInheritance:(BOOL)arg2 countOnly:(BOOL)arg3 nestingLevel:(unsigned)arg4 ;
-(id)newSQLStatementForUpdateRequest:(id)arg1 ;
-(id)_predicateRestrictingSuperentitiesForEntity:(id)arg1 ;
-(id)_predicateRestrictingToSubentitiesForEntity:(id)arg1 ;
-(id)_predicateForSpecificEntity:(id)arg1 ;
-(void)generateWhereIntermediatesInContext:(id)arg1 ;
-(void)generateGroupByIntermediatesForProperties:(id)arg1 inContext:(id)arg2 ;
-(void)generateHavingIntermediateForPredicate:(id)arg1 inContext:(id)arg2 ;
-(void)generateSelectIntermediateInContext:(id)arg1 ;
-(void)generateOrderIntermediateInContext:(id)arg1 ;
-(void)generateIntermediateForLimit:(unsigned long long)arg1 inContext:(id)arg2 ;
-(void)generateIntermediateForOffset:(unsigned long long)arg1 inContext:(id)arg2 ;
-(id)generateUpdateColumnsIntermediateInContext:(id)arg1 ;
-(id)predicateForRequestInContext:(id)arg1 ;
-(id)initializeContextForRequest:(id)arg1 ignoreInheritance:(BOOL)arg2 nestingLevel:(unsigned)arg3 ;
-(id)initializeContextForFetchRequest:(id)arg1 ignoreInheritance:(BOOL)arg2 nestingLevel:(unsigned)arg3 ;
-(id)initializeContextForUpdateRequest:(id)arg1 ;
-(id)generateIntermediatesForFetchInContext:(id)arg1 countOnly:(BOOL)arg2 ;
-(id)generateIntermediatesForUpdateInContext:(id)arg1 ;
-(id)newSQLStatementForRequest:(id)arg1 ignoreInheritance:(BOOL)arg2 countOnly:(BOOL)arg3 nestingLevel:(unsigned)arg4 ;
@end
