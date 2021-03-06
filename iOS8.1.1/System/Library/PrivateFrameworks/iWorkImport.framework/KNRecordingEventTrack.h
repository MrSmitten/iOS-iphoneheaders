/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:35:44 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>

@class NSString, NSArray;

@interface KNRecordingEventTrack : TSPObject {

	NSString* mType;
	NSArray* mEvents;

}

@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) NSArray * events; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(RecordingEventTrackArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const RecordingEventTrackArchive*)arg1 unarchiver:(id)arg2 ;
-(id)initWithContext:(id)arg1 type:(id)arg2 events:(id)arg3 ;
-(id)eventTrackByReplacingSegmentAfterTime:(double)arg1 withEventTrack:(id)arg2 ;
-(NSArray *)events;
-(void)dealloc;
-(NSString *)type;
-(id)initWithContext:(id)arg1 ;
@end

