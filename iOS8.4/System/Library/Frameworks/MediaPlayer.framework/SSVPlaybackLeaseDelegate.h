/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:13 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SSVPlaybackLeaseDelegate <NSObject>
@optional
-(void)playbackLease:(id)arg1 automaticRefreshDidFinishWithResponse:(id)arg2 error:(id)arg3;
-(void)playbackLeaseDidEnd:(id)arg1;
-(void)playbackLease:(id)arg1 didEndWithReasonType:(unsigned long long)arg2;
-(void)playbackLease:(id)arg1 automaticRefreshDidFailWithError:(id)arg2;
-(void)playbackLeaseAutomaticRefreshDidFinish:(id)arg1;

@end
