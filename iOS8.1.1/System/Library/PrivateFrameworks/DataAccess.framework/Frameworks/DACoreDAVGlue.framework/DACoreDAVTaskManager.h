/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:28 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACoreDAVGlue.framework/DACoreDAVGlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataAccess/DATaskManager.h>
#import <DACoreDAVGlue/CoreDAVTaskManager.h>

@class NSRunLoop, NSMutableSet, NSString;

@interface DACoreDAVTaskManager : DATaskManager <CoreDAVTaskManager> {

	NSMutableSet* _applicationsShowingActivity;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSRunLoop * workRunLoop; 
-(void)dealloc;
-(void)submitQueuedCoreDAVTask:(id)arg1 ;
-(void)submitIndependentCoreDAVTask:(id)arg1 ;
-(void)coreDAVTaskDidFinish:(id)arg1 ;
-(void)coreDAVTaskEndModal:(id)arg1 ;
-(void)coreDAVTaskRequestModal:(id)arg1 ;
-(void)_updateSpinner:(BOOL)arg1 ;
-(NSRunLoop *)workRunLoop;
-(void)setWorkRunLoop:(NSRunLoop *)arg1 ;
-(void)taskManagerDidAddTask:(id)arg1 ;
-(void)taskManagerWillRemoveTask:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
@end
