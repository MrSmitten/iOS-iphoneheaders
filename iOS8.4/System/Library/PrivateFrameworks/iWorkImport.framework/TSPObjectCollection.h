/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:20 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSPObject.h>

@class NSArray;

@interface TSPObjectCollection : TSPObject {

	NSArray* _objects;

}

@property (nonatomic,readonly) NSArray * objects;              //@synthesize objects=_objects - In the implementation block
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)initWithContext:(id)arg1 objects:(id)arg2 ;
-(NSArray *)objects;
-(id)initWithContext:(id)arg1 ;
@end
