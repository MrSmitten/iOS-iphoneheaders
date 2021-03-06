/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:31:56 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iLifeSlideshow.framework/iLifeSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MRMarimbaPlayback
@required
-(char)isInTransition;
-(double)relativeTime;
-(void)moveToEffectContainer:(id)arg1 withStartOffset:(double)arg2 toStopOffset:(double)arg3 blocking:(char)arg4;
-(id)displayedEffectContainers;
-(id)currentSlides;
-(void)gotoSlide:(id)arg1;
-(void)moveToNextEffectContainer;
-(void)moveToPreviousEffectContainer;
-(double)relativeTimeForBackgroundAudio;
-(double)relativeTimeForLayer:(id)arg1;
-(void)moveToTitleSlide;
-(void)moveToSubtitleForSlide:(id)arg1;
-(id)currentSlide;
-(void)gotoNextSlide;
-(void)gotoPreviousSlide;
-(void)whenTransitionIsFinishedSendAction:(SEL)arg1 toTarget:(id)arg2;
-(void)removeEffectContainersBeforeTime:(double)arg1;

@end

