/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:06 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AVCaptureFileOutputRecordingDelegate_FigRecorderAVCaptureFileOutputPauseResumeDelegate_FigRecorder;
@class NSURL, NSArray;

@interface AVCaptureFileOutputDelegateWrapper_FigRecorder : NSObject {

	id<AVCaptureFileOutputRecordingDelegate_FigRecorder><AVCaptureFileOutputPauseResumeDelegate_FigRecorder> _delegate;
	NSURL* _outputFileURL;
	char _receivedDidStartRecording;
	char _receivedDidStopRecording;
	long _didStopRecordingError;
	NSArray* _metadata;
	NSArray* _connections;

}

@property (readonly) NSURL * outputFileURL;                                                                                                          //@synthesize outputFileURL=_outputFileURL - In the implementation block
@property (retain) NSArray * metadata;                                                                                                               //@synthesize metadata=_metadata - In the implementation block
@property (readonly) id<AVCaptureFileOutputRecordingDelegate_FigRecorder><AVCaptureFileOutputPauseResumeDelegate_FigRecorder> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NSArray * connections;                                                                                                          //@synthesize connections=_connections - In the implementation block
@property (assign) char receivedDidStartRecording;                                                                                                   //@synthesize receivedDidStartRecording=_receivedDidStartRecording - In the implementation block
@property (assign) char receivedDidStopRecording;                                                                                                    //@synthesize receivedDidStopRecording=_receivedDidStopRecording - In the implementation block
@property (assign) long didStopRecordingError;                                                                                                       //@synthesize didStopRecordingError=_didStopRecordingError - In the implementation block
+(id)wrapperWithURL:(id)arg1 delegate:(id)arg2 connections:(id)arg3 ;
-(id)initWithURL:(id)arg1 delegate:(id)arg2 connections:(id)arg3 ;
-(NSURL *)outputFileURL;
-(char)receivedDidStartRecording;
-(void)setReceivedDidStartRecording:(char)arg1 ;
-(char)receivedDidStopRecording;
-(void)setReceivedDidStopRecording:(char)arg1 ;
-(long)didStopRecordingError;
-(void)setDidStopRecordingError:(long)arg1 ;
-(NSArray *)connections;
-(void)dealloc;
-(id<AVCaptureFileOutputRecordingDelegate_FigRecorder><AVCaptureFileOutputPauseResumeDelegate_FigRecorder>)delegate;
-(void)setMetadata:(NSArray *)arg1 ;
-(NSArray *)metadata;
@end
