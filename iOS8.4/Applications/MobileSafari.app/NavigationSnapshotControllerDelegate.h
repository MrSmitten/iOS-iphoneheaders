/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:53 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NavigationSnapshotControllerDelegate
@required
-(void)navigationSnapshotControllerGestureBegan:(id)arg1;
-(void)navigationSnapshotControllerGestureEnded:(id)arg1 willNavigate:(char)arg2 toHistoryPosition:(int)arg3;
-(void)navigationSnapshotController:(id)arg1 willNavigateAtEndOfGesture:(char)arg2 toHistoryPosition:(int)arg3;
-(void)navigationSnapshotControllerWillUnhideWebContent:(id)arg1;
-(id)navigationSnapshotControllerDocumentToSnapshot:(id)arg1;
-(char)navigationSnapshotController:(id)arg1 shouldReceiveTouch:(id)arg2;
-(char)navigationSnapshotControllerShouldDelaySnapshotForOngoingLoad:(id)arg1;

@end

