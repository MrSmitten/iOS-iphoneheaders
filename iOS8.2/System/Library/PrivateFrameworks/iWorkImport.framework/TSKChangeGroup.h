/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:27:14 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/NSCopying.h>

@class NSMutableArray;

@interface TSKChangeGroup : NSObject <NSCopying> {

	NSMutableArray* mChangesArray;

}

@property (nonatomic,readonly) NSMutableArray * changesArray; 
-(void)registerChange:(int)arg1 details:(id)arg2 forChangeSource:(id)arg3 ;
-(NSMutableArray *)changesArray;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
