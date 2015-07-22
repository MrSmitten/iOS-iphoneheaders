/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:36 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AVAssetExportSession, RCWaveformDataSource, RCComposition;

@interface RCCompositionComposedAssetWriter : NSObject {

	AVAssetExportSession* _exportSession;
	RCWaveformDataSource* _waveformDataSource;
	BOOL _canGenerateWaveform;
	BOOL _canGenerateWaveformByProcessingAVURL;
	BOOL _canSaveCompositionMetadata;
	RCComposition* _composition;

}

@property (nonatomic,readonly) RCComposition * composition;                          //@synthesize composition=_composition - In the implementation block
@property (assign,nonatomic) BOOL canGenerateWaveform;                               //@synthesize canGenerateWaveform=_canGenerateWaveform - In the implementation block
@property (assign,nonatomic) BOOL canGenerateWaveformByProcessingAVURL;              //@synthesize canGenerateWaveformByProcessingAVURL=_canGenerateWaveformByProcessingAVURL - In the implementation block
@property (assign,nonatomic) BOOL canSaveCompositionMetadata;                        //@synthesize canSaveCompositionMetadata=_canSaveCompositionMetadata - In the implementation block
@property (nonatomic,readonly) float progress; 
-(RCComposition *)composition;
-(void)cancel;
-(float)progress;
-(id)initWithComposition:(id)arg1 ;
-(void)setCanSaveCompositionMetadata:(BOOL)arg1 ;
-(void)setCanGenerateWaveformByProcessingAVURL:(BOOL)arg1 ;
-(void)setCanGenerateWaveform:(BOOL)arg1 ;
-(void)writeCompositionWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_writeCompositionWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_writeCompositionWaveformForFinalizedAssetWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_writeCompositionWaveformForFinalizedAssetFromFragmentsWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)canGenerateWaveform;
-(BOOL)canGenerateWaveformByProcessingAVURL;
-(BOOL)canSaveCompositionMetadata;
@end
