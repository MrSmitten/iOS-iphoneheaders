/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:19 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SBPresentingDelegate <NSObject>
@optional
-(void)presentingController:(id)arg1 conflictingGestureDidBegin:(id)arg2;
-(void)presentingController:(id)arg1 conflictingGestureDidEnd:(id)arg2;

@required
-(char)presentingController:(id)arg1 gestureRecognizerShouldBegin:(id)arg2;
-(void)presentingControllerDidFinishPresentation:(id)arg1;
-(char)presentingController:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3;
-(void)presentingController:(id)arg1 willHandleGesture:(id)arg2;

@end
