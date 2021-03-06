/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:45 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <CameraKit/CAMCameraView.h>
#import <PhotoLibrary/PLVideoViewDelegate.h>

@class NSDictionary, PLPhotoTileViewController, CAMStillImageCaptureResponse, PLCropOverlay, PLVideoView, UIView, NSString;

@interface PLImagePickerCameraView : CAMCameraView <PLVideoViewDelegate> {

	char _allowsEditing;
	char _showsCropRegion;
	char _displayedInPopover;
	char _cropOverlayUsesTelephonyUI;
	char _wantsImageData;
	char _showingCropOverlay;
	char __manipulatingCrop;
	char __shouldSkipPostcaptureReview;
	char __retakingPhoto;
	NSDictionary* _imagePickerOptions;
	int _photoSavingOptions;
	PLPhotoTileViewController* _tileViewController;
	CAMStillImageCaptureResponse* __mostRecentCaptureResponse;
	PLCropOverlay* __cropOverlay;
	PLVideoView* __videoView;
	int __enabledGestures;
	int __windowEdgeClip;

}

@property (nonatomic,retain) NSDictionary * imagePickerOptions;                                                           //@synthesize imagePickerOptions=_imagePickerOptions - In the implementation block
@property (assign,nonatomic) char allowsEditing;                                                                          //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) char showsCropRegion;                                                                        //@synthesize showsCropRegion=_showsCropRegion - In the implementation block
@property (assign,nonatomic) char controlsAreVisible; 
@property (assign,getter=isDisplayedInPopover,nonatomic) char displayedInPopover;                                         //@synthesize displayedInPopover=_displayedInPopover - In the implementation block
@property (nonatomic,retain) UIView * customOverlayView; 
@property (assign,nonatomic) char cropOverlayUsesTelephonyUI;                                                             //@synthesize cropOverlayUsesTelephonyUI=_cropOverlayUsesTelephonyUI - In the implementation block
@property (assign,nonatomic) char wantsImageData;                                                                         //@synthesize wantsImageData=_wantsImageData - In the implementation block
@property (assign,nonatomic) int photoSavingOptions;                                                                      //@synthesize photoSavingOptions=_photoSavingOptions - In the implementation block
@property (assign,getter=isShowingCropOverlay,nonatomic) char showingCropOverlay;                                         //@synthesize showingCropOverlay=_showingCropOverlay - In the implementation block
@property (nonatomic,readonly) PLPhotoTileViewController * tileViewController;                                            //@synthesize tileViewController=_tileViewController - In the implementation block
@property (nonatomic,readonly) CAMStillImageCaptureResponse * _mostRecentCaptureResponse;                                 //@synthesize _mostRecentCaptureResponse=__mostRecentCaptureResponse - In the implementation block
@property (nonatomic,readonly) PLCropOverlay * _cropOverlay;                                                              //@synthesize _cropOverlay=__cropOverlay - In the implementation block
@property (assign,setter=_setManipulatingCrop:,getter=_isManipulatingCrop,nonatomic) char _manipulatingCrop;              //@synthesize _manipulatingCrop=__manipulatingCrop - In the implementation block
@property (nonatomic,readonly) PLVideoView * _videoView;                                                                  //@synthesize _videoView=__videoView - In the implementation block
@property (assign,setter=_setEnabledGestures:,nonatomic) int _enabledGestures;                                            //@synthesize _enabledGestures=__enabledGestures - In the implementation block
@property (nonatomic,readonly) char _shouldSkipPostcaptureReview;                                                         //@synthesize _shouldSkipPostcaptureReview=__shouldSkipPostcaptureReview - In the implementation block
@property (assign,setter=_setRetakingPhoto:,getter=_isRetakingPhoto,nonatomic) char _retakingPhoto;                       //@synthesize _retakingPhoto=__retakingPhoto - In the implementation block
@property (assign,setter=_setWindowEdgeClip:,nonatomic) int _windowEdgeClip;                                              //@synthesize _windowEdgeClip=__windowEdgeClip - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PLVideoView *)_videoView;
-(void)setImagePickerOptions:(NSDictionary *)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(void)setAllowsImageEditing:(char)arg1 ;
-(char)allowsEditing;
-(void)setAllowsEditing:(char)arg1 ;
-(id)initWithFrame:(CGRect)arg1 spec:(id)arg2 ;
-(void)viewWillBeDisplayed;
-(void)captureController:(id)arg1 didCompleteResponse:(id)arg2 forStillImageRequest:(id)arg3 error:(id)arg4 ;
-(char)_wantsSuspensionBlurs;
-(char)_shouldBlurWhenSessionStops;
-(char)_shouldStartPreviewWhenApplicationBecomesActive;
-(char)_wantsCaptureAnimations;
-(void)_showVideoCaptureControls;
-(char)_shouldPausePreviewDuringCapture;
-(char)_supportsPreviewingAfterCapture;
-(void)performPostcapturePreviewForVideoAtPath:(id)arg1 ;
-(void)_removeVideoCaptureControls;
-(void)cameraControllerPreviewDidStart:(id)arg1 ;
-(char)_wantsFullScreenPreview;
-(void)verifyViewOrdering;
-(char)_isLockedToPortraitOrientation;
-(char)_wantsOrientationAnimations;
-(void)setControlsAreVisible:(char)arg1 ;
-(void)captureController:(id)arg1 didStopRecordingForVideoRequest:(id)arg2 ;
-(CGRect)_bottomBarFrame;
-(void)setAllowsMultipleModes:(char)arg1 ;
-(char)_wantsForcedPreviewAspectRatio;
-(char)_wantsPreviewSizeAdjustmentForBars;
-(void)embedControlsIntoNavigationItem:(id)arg1 animated:(char)arg2 ;
-(int)_windowEdgeClip;
-(float)videoViewScrubberYOrigin:(id)arg1 forOrientation:(int)arg2 ;
-(char)videoViewCanBeginPlayback:(id)arg1 ;
-(void)videoViewIsReadyToBeginPlayback:(id)arg1 ;
-(void)videoViewDidBeginPlayback:(id)arg1 ;
-(void)videoViewDidPausePlayback:(id)arg1 ;
-(void)videoViewDidEndPlayback:(id)arg1 didFinish:(char)arg2 ;
-(char)photoTileViewControllerIsDisplayingLandscape:(id)arg1 ;
-(void)setShowsCropRegion:(char)arg1 ;
-(void)cropOverlayWasCancelled:(id)arg1 ;
-(void)cropOverlayWasOKed:(id)arg1 ;
-(void)cropOverlayPlay:(id)arg1 ;
-(void)cropOverlayPause:(id)arg1 ;
-(void)cropOverlay:(id)arg1 didFinishSaving:(id)arg2 ;
-(PLCropOverlay *)_cropOverlay;
-(void)setCropOverlayUsesTelephonyUI:(char)arg1 ;
-(void)setShowingCropOverlay:(char)arg1 ;
-(void)setPhotoSavingOptions:(int)arg1 ;
-(void)setWantsImageData:(char)arg1 ;
-(void)setDisplayedInPopover:(char)arg1 ;
-(UIView *)customOverlayView;
-(void)setCustomOverlayView:(UIView *)arg1 ;
-(PLPhotoTileViewController *)tileViewController;
-(void)_resetImageTile;
-(void)_setManipulatingCrop:(char)arg1 ;
-(void)_createCropOverlayIfNecessary;
-(char)isDisplayedInPopover;
-(void)_setWindowEdgeClip:(int)arg1 ;
-(void)_updateImageEditability;
-(char)_isManipulatingCrop;
-(CGSize)_displaySizeForPreviewForCameraMode:(int)arg1 ;
-(char)cropOverlayUsesTelephonyUI;
-(NSDictionary *)imagePickerOptions;
-(void)_setRetakingPhoto:(char)arg1 ;
-(char)_allowsVideoEditing;
-(char)_isRetakingPhoto;
-(char)_shouldSkipPostcaptureReview;
-(void)_previewVideoAtPath:(id)arg1 ;
-(void)_setEnabledGestures:(int)arg1 ;
-(void)cropOverlayWasToggled:(id)arg1 ;
-(char)showsCropRegion;
-(char)wantsImageData;
-(int)photoSavingOptions;
-(char)isShowingCropOverlay;
-(CAMStillImageCaptureResponse *)_mostRecentCaptureResponse;
-(int)_enabledGestures;
@end

