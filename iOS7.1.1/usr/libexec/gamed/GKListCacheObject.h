/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/gamed
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <gamed/GKExpiringCacheObject.h>

@class NSOrderedSet, NSString;

@interface GKListCacheObject : GKExpiringCacheObject

@property (nonatomic,@dynamic,retain) NSOrderedSet * entries; 
@property (nonatomic,@dynamic,retain) NSString * seed; 
@property (assign,nonatomic,@dynamic) BOOL detailsLoaded; 
+(id)relationshipKeyPathsForPrefetch;
+(Class)entryClass;
-(void)updateEntriesWithRepresentations:(id)arg1 entryForRepresentation:(/*^block*/ id)arg2 reuseEntriesByIndex:(BOOL)arg3 ;
-(void)updateSeed;
-(void)reorderEntry:(id)arg1 toIndex:(int)arg2 ;
-(void)removeEntriesMatchingPredicate:(id)arg1 ;
-(id)findEntry:(/*^block*/ id)arg1 ;
-(id)entryPassingTest:(/*^block*/ id)arg1 ;
-(id)entriesPassingTest:(/*^block*/ id)arg1 ;
-(id)internalRepresentation;
@end
