/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:04 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AVDecodedAudioSettingsForFig
@required
-(void)getAudioStreamBasicDescription:(AudioStreamBasicDescription*)arg1 forAudioFileTypeID:(unsigned)arg2 sourceFormatDescription:(opaqueCMFormatDescriptionRef)arg3;
-(AudioChannelLayout*)copyAudioChannelLayoutForSourceFormatDescription:(opaqueCMFormatDescriptionRef)arg1 audioChannelLayoutSize:(unsigned long long*)arg2;
-(id)audioOptions;

@end

