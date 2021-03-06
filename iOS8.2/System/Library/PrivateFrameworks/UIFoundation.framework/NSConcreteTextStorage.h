/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:21 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSTextStorage.h>

@class NSConcreteNotifyingMutableAttributedString;

@interface NSConcreteTextStorage : NSTextStorage {

	NSConcreteNotifyingMutableAttributedString* _contents;
	opaque_pthread_rwlock_t _lock;
	struct {
		unsigned _forceFixAttributes : 1;
		unsigned _needLock : 1;
		unsigned _lockInitialized : 1;
		unsigned _inFixingAttributes : 1;
		unsigned _reserved : 28;
	}  _pFlags;

}
+(unsigned long)_writerCountTSDKey;
-(void)dealloc;
-(id)init;
-(unsigned)length;
-(id)string;
-(Class)classForCoder;
-(id)initWithString:(id)arg1 attributes:(id)arg2 ;
-(void)addAttribute:(id)arg1 value:(id)arg2 range:(NSRange)arg3 ;
-(void)removeAttribute:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithString:(id)arg1 ;
-(id)attribute:(id)arg1 atIndex:(unsigned)arg2 effectiveRange:(NSRange*)arg3 ;
-(void)setAttributes:(id)arg1 range:(NSRange)arg2 ;
-(void)addAttributes:(id)arg1 range:(NSRange)arg2 ;
-(id)initWithAttributedString:(id)arg1 ;
-(id)attribute:(id)arg1 atIndex:(unsigned)arg2 longestEffectiveRange:(NSRange*)arg3 inRange:(NSRange)arg4 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withString:(id)arg2 ;
-(id)attributesAtIndex:(unsigned)arg1 effectiveRange:(NSRange*)arg2 ;
-(id)attributesAtIndex:(unsigned)arg1 longestEffectiveRange:(NSRange*)arg2 inRange:(NSRange)arg3 ;
-(void)replaceCharactersInRange:(NSRange)arg1 withAttributedString:(id)arg2 ;
-(char)_lockForReading;
-(void)_unlock;
-(void)_setForceFixAttributes:(char)arg1 ;
-(char)_attributeFixingInProgress;
-(void)_setAttributeFixingInProgress:(char)arg1 ;
-(char)_lockForWritingWithExceptionHandler:(char)arg1 ;
-(char)fixesAttributesLazily;
-(char)_forceFixAttributes;
-(void)_initLocks;
@end

