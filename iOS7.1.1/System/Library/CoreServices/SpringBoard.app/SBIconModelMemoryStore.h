/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 1:57:54 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBIconModelStore.h>

@class NSDictionary;

@interface SBIconModelMemoryStore : NSObject <SBIconModelStore> {

	NSDictionary* _currentState;
	NSDictionary* _desiredState;

}

@property (nonatomic,retain) NSDictionary * currentState;              //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,retain) NSDictionary * desiredState;              //@synthesize desiredState=_desiredState - In the implementation block
-(id)loadDesiredIconState:(id*)arg1 ;
-(id)loadCurrentIconState:(id*)arg1 ;
-(BOOL)deleteDesiredIconState:(id*)arg1 ;
-(BOOL)deleteCurrentIconState:(id*)arg1 ;
-(BOOL)saveDesiredIconState:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveCurrentIconState:(id)arg1 error:(id*)arg2 ;
-(id)initWithCurrentState:(id)arg1 desiredState:(id)arg2 ;
-(void)setDesiredState:(id)arg1 ;
-(id)desiredState;
-(void)dealloc;
-(id)currentState;
-(void)setCurrentState:(id)arg1 ;
@end
