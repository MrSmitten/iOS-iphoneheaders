/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MediaControlSender.framework/MediaControlSender
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AirPlayControllerSync
@required
-(int)performCommand:(id)arg1 qualifier:(id)arg2 params:(id)arg3 response:(id*)arg4;
-(void)postEvent:(id)arg1 qualifier:(id)arg2 params:(id)arg3;
-(id)getProperty:(id)arg1 qualifier:(id)arg2 status:(int*)arg3;
-(int)setProperty:(id)arg1 qualifier:(id)arg2 value:(id)arg3;

@end
