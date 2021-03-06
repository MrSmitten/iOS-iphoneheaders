/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:16 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSSecureCoding.h>
#import <Foundation/NSCopying.h>

@class NSString;

@interface NSSortDescriptor : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _sortDescriptorFlags;
	NSString* _key;
	SEL _selector;
	id _selectorOrBlock;

}

@property (copy,readonly) NSString * key; 
@property (readonly) BOOL ascending; 
@property (readonly) SEL selector; 
@property (readonly) id comparator; 
@property (retain,readonly) id reversedSortDescriptor; 
+(id)sortDescriptorWithKey:(id)arg1 ascending:(BOOL)arg2 comparator:(/*^block*/id)arg3 ;
+(id)_defaultSelectorName;
+(BOOL)supportsSecureCoding;
+(void)initialize;
+(id)sortDescriptorWithKey:(id)arg1 ascending:(BOOL)arg2 selector:(SEL)arg3 ;
+(id)sortDescriptorWithKey:(id)arg1 ascending:(BOOL)arg2 ;
-(id)CKDPQuerySort;
-(id)replacementObjectForPortCoder:(id)arg1 ;
-(void)allowEvaluation;
-(id)comparator;
-(long long)compareObject:(id)arg1 toObject:(id)arg2 ;
-(id)initWithKey:(id)arg1 ascending:(BOOL)arg2 comparator:(/*^block*/id)arg3 ;
-(id)_selectorName;
-(void)_setSelectorName:(id)arg1 ;
-(void)_disallowEvaluation;
-(BOOL)_isEqualToSortDescriptor:(id)arg1 ;
-(void)_setKey:(id)arg1 ;
-(void)_setAscending:(BOOL)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SEL)selector;
-(id)initWithKey:(id)arg1 ascending:(BOOL)arg2 ;
-(NSString *)key;
-(id)initWithKey:(id)arg1 ascending:(BOOL)arg2 selector:(SEL)arg3 ;
-(BOOL)ascending;
-(id)reversedSortDescriptor;
@end

