/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:02 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSTimer, CADisplayLink, NSObject;

@interface SKDisplayLink : NSObject {

	NSTimer* _timer;
	CADisplayLink* _caDisplayLink;
	unsigned long long _mode;
	BOOL _paused;
	BOOL _asynchronous;
	long long _frameInterval;
	double _previousFrameTime;
	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _queue;
	float _averageFrameTime;
	long long _frameCount;
	double _frameCountBeginTime;
	int _queuedFrameCount;
	unsigned long long _maxQueuedFrameCount;

}

@property (assign,getter=isPaused,nonatomic) BOOL paused; 
@property (assign,nonatomic) long long frameInterval; 
@property (assign,nonatomic) unsigned long long mode; 
@property (assign,nonatomic) BOOL asynchronous; 
@property (assign) unsigned long long maxQueuedFrameCount;              //@synthesize maxQueuedFrameCount=_maxQueuedFrameCount - In the implementation block
+(id)displayLinkWithBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)_caDisplayLinkCallback;
-(void)setMaxQueuedFrameCount:(unsigned long long)arg1 ;
-(void)_nsTimerCallback;
-(unsigned long long)maxQueuedFrameCount;
-(void)_restart;
-(void)_callbackForNextFrame:(double)arg1 ;
-(BOOL)asynchronous;
-(void)dealloc;
-(id)init;
-(void)setFrameInterval:(long long)arg1 ;
-(void)_start;
-(long long)frameInterval;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(void)setPaused:(BOOL)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
-(void)_setup;
-(void)_teardown;
-(BOOL)isPaused;
-(void)setAsynchronous:(BOOL)arg1 ;
@end
