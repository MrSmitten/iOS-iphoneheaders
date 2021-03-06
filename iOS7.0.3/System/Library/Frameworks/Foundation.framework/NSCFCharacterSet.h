/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:12 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSMutableCharacterSet.h>

@interface NSCFCharacterSet : NSMutableCharacterSet
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(Class)classForArchiver;
-(BOOL)longCharacterIsMember:(unsigned long)arg1 ;
-(BOOL)hasMemberInPlane:(unsigned char)arg1 ;
-(void)addCharactersInRange:(NSRange)arg1 ;
-(void)removeCharactersInRange:(NSRange)arg1 ;
-(void)addCharactersInString:(id)arg1 ;
-(void)removeCharactersInString:(id)arg1 ;
-(void)formIntersectionWithCharacterSet:(id)arg1 ;
-(void)invert;
-(id)bitmapRepresentation;
-(BOOL)isSupersetOfSet:(id)arg1 ;
-(void)makeCharacterSetCompact;
-(void)makeCharacterSetFast;
-(Class)classForKeyedArchiver;
-(oneway void)release;
-(id)retain;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(unsigned)retainCount;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(BOOL)characterIsMember:(unsigned short)arg1 ;
-(BOOL)allowsWeakReference;
-(BOOL)retainWeakReference;
-(id)mutableCopyWithZone:(NSZoneRef)arg1 ;
-(void)formUnionWithCharacterSet:(id)arg1 ;
-(void)finalize;
-(id)invertedSet;
@end

