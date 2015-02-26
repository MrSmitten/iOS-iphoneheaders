/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:27:04 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol SBFolderControllerDelegate <NSObject>
@optional
-(void)folderControllerDidReceiveCancelReachabilityAction:(id)arg1;

@required
-(Class)controllerClassForFolder:(id)arg1;
-(BOOL)folderController:(id)arg1 draggedIconDidPauseAtLocation:(CGPoint)arg2 inListView:(id)arg3;
-(BOOL)folderController:(id)arg1 draggedIconDidMoveFromListView:(id)arg2 toListView:(id)arg3;
-(BOOL)folderController:(id)arg1 draggedIconMightDropFromListView:(id)arg2;
-(void)folderController:(id)arg1 draggedIconShouldDropFromListView:(id)arg2;
-(void)folderControllerShouldClose:(id)arg1;
-(void)folderControllerShouldBeginEditing:(id)arg1;
-(void)folderControllerDidEndScrolling:(id)arg1;

@end
