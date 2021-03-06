/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:20:35 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAudioOutputSettings.h>
#import <AVFoundation/AVReencodedAudioSettingsForFig.h>
#import <AVFoundation/AVDecodedAudioSettingsForFig.h>

@interface AVAVAudioSettingsAudioOutputSettings : AVAudioOutputSettings <AVReencodedAudioSettingsForFig, AVDecodedAudioSettingsForFig>
+(id)_audioOutputSettingsWithAudioSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
+(id)eligibleOutputSettingsDictionaryKeys;
-(bool)willYieldCompressedSamples;
-(void)getAudioStreamBasicDescription:(AudioStreamBasicDescription*)arg1 forAudioFileTypeID:(unsigned)arg2 sourceFormatDescription:(opaqueCMFormatDescriptionRef)arg3 ;
-(AudioChannelLayout*)copyAudioChannelLayoutForSourceFormatDescription:(opaqueCMFormatDescriptionRef)arg1 audioChannelLayoutSize:(unsigned long long*)arg2 ;
-(id)audioOptions;
-(bool)canFullySpecifyOutputFormatReturningReason:(id*)arg1 ;
-(bool)isCodecAvailableOnCurrentSystem;
-(id)initWithTrustedAVAudioSettingsDictionary:(id)arg1 ;
-(id)initWithAVAudioSettingsDictionary:(id)arg1 exceptionReason:(id*)arg2 ;
@end

