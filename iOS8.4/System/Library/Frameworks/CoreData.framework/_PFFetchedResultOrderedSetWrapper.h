/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSOrderedSet.h>

@class NSArray, _PFWeakReference;

@interface _PFFetchedResultOrderedSetWrapper : NSOrderedSet {

	int _cd_rc;
	NSArray* _underlyingArray;
	_PFWeakReference* _weakmoc;

}
+(BOOL)accessInstanceVariablesDirectly;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)alloc;
-(void)willRead;
-(unsigned long long)indexOfObjectWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(unsigned long long)indexOfObjectAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(id)indexesOfObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 passingTest:(/*^block*/id)arg3 ;
-(void)getObjects:(id*)arg1 ;
-(Class)classForArchiver;
-(id)newArrayFromObjectIDs;
-(id)arrayFromObjectIDs;
-(unsigned long long)indexOfManagedObjectForObjectID:(id)arg1 ;
-(id)initWithArray:(id)arg1 andContext:(id)arg2 ;
-(id)retain;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)retainCount;
-(id)description;
-(id)array;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)containsObject:(id)arg1 ;
-(id)allObjects;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(id)objectEnumerator;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(BOOL)isEqualToOrderedSet:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)sortedArrayUsingComparator:(/*^block*/id)arg1 ;
-(id)sortedArrayWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
-(id)indexesOfObjectsWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)managedObjectIDAtIndex:(unsigned long long)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
-(oneway void)release;
-(void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
@end
