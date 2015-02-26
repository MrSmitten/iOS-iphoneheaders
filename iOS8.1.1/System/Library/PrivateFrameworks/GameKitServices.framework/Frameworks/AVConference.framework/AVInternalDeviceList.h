/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:31:46 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class NSMutableArray;

@interface AVInternalDeviceList : NSObject {

	/*^block*/id changeListener;
	NSMutableArray* deviceList;
	opaque_pthread_mutex_t listLock;

}

@property (nonatomic,copy) id changeListener; 
+(id)newDeviceList;
+(id)defaultDeviceOfType:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(void)cleanup;
-(id)deviceList;
-(void)setChangeListener:(id)arg1 ;
-(id)changeListener;
@end
