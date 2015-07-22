/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:23:50 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUTableCell.h>

@class UIImageView, UIView, MSAudioProgressView, SUPlayerStatus;

@interface MSTableCell : SUTableCell {

	UIImageView* _backsideSnapshotView;
	UIView* _previewContainerView;
	MSAudioProgressView* _previewProgressView;
	SUPlayerStatus* _previewStatus;

}

@property (nonatomic,retain) SUPlayerStatus * previewStatus;              //@synthesize previewStatus=_previewStatus - In the implementation block
-(void)dealloc;
-(void)setPreviewStatus:(SUPlayerStatus *)arg1 ;
-(void)setPreviewStatus:(id)arg1 animated:(BOOL)arg2 ;
-(void)_flipFromPreviewProgressView;
-(void)_destroyPreviewProgressView;
-(void)_flipToPreviewProgressView;
-(SUPlayerStatus *)previewStatus;
@end
