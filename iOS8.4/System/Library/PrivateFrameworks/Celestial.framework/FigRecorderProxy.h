/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:21:09 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/FigCaptureSessionProxy.h>

@protocol FigCaptureSessionPreviewTapDelegate;
@interface FigRecorderProxy : FigCaptureSessionProxy {

	OpaqueFigRecorderRef _recorder;
	long long _identifier;
	BOOL _previewTapOpened;
	id<FigCaptureSessionPreviewTapDelegate> _previewTapDelegate;

}
-(void)dealloc;
-(long long)identifier;
-(id)initWithFigRecorder:(OpaqueFigRecorderRef)arg1 identifier:(long long)arg2 ;
-(int)openPreviewTapWithDelegate:(id)arg1 ;
-(void)closePreviewTap;
@end
