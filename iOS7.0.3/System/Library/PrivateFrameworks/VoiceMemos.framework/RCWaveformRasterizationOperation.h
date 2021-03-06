/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:22 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <Foundation/NSOperation.h>

@protocol OS_dispatch_semaphore;
@class RCGLWaveformRenderer, RCAudioFileWaveformDataSource, NSObject, RCSavedRecording, UIImage, UIColor;

@interface RCWaveformRasterizationOperation : NSOperation {

	RCGLWaveformRenderer* _renderer;
	RCAudioFileWaveformDataSource* _dataSource;
	BOOL _loadingSuccessful;
	NSObject<OS_dispatch_semaphore>* _completionSemaphore;
	RCSavedRecording* _recording;
	UIImage* _rasterizedImage;
	CGSize _outputImageSize;

}

@property (nonatomic,readonly) RCSavedRecording * recording;              //@synthesize recording=_recording - In the implementation block
@property (nonatomic,readonly) CGSize outputImageSize;                    //@synthesize outputImageSize=_outputImageSize - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor; 
@property (nonatomic,retain) UIColor * foregroundColor; 
@property (nonatomic,readonly) UIImage * rasterizedImage;                 //@synthesize rasterizedImage=_rasterizedImage - In the implementation block
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(void)main;
-(id)foregroundColor;
-(void)setForegroundColor:(id)arg1 ;
-(id)recording;
-(id)initWithRecording:(id)arg1 outputImageSize:(CGSize)arg2 ;
-(id)rasterizedImage;
-(CGSize)outputImageSize;
-(void).cxx_destruct;
@end

