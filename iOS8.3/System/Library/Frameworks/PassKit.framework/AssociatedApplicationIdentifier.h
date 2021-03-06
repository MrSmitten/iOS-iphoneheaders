/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:05:38 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <passd/SQLiteEntity.h>

@interface AssociatedApplicationIdentifier : SQLiteEntity
+(void)deleteEntitiesForPass:(id)arg1 inDatabase:(id)arg2 ;
+(void)insertAssociatedApplicationIdentifiers:(id)arg1 forPass:(id)arg2 inDatabase:(id)arg3 ;
+(id)associatedApplicationIdentifiersInDatabase:(id)arg1 forPassPID:(unsigned long long)arg2 ;
+(id)_predicateForPassPID:(long long)arg1 ;
+(id)_predicateForPass:(id)arg1 ;
+(id)_propertySettersForAssociatedApplicationIdentifier;
+(id)_associatedApplicationIdentifiersInDatabase:(id)arg1 matchingPredicate:(id)arg2 ;
+(id)associatedApplicationIdentifiersInDatabase:(id)arg1 forPass:(id)arg2 ;
+(id)associationPropertyForEntityClass:(Class)arg1 ;
+(id)databaseTable;
-(id)initWithApplicationIdentifier:(id)arg1 pass:(id)arg2 inDatabase:(id)arg3 ;
@end

