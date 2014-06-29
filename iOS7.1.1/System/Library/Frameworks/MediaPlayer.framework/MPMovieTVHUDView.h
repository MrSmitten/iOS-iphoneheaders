/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:25 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, MPAVController;

@interface MPMovieTVHUDView : UIView {

	unsigned long long _currentState;
	UIImageView* _playbackMode;
	MPAVController* _player;

}

@property (nonatomic,retain) MPAVController * player;              //@synthesize player=_player - In the implementation block
-(void)_playbackStateDidChangeNotification:(id)arg1 ;
-(void)_fadeOut;
-(void)_changeState;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)animationDidStop:(id)arg1 ;
-(void).cxx_destruct;
-(id)player;
-(void)setPlayer:(id)arg1 ;
@end
