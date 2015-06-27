/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 10:31:21 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVFrameRateRangeInternal_FigRecorder;

@interface AVFrameRateRange_FigRecorder : NSObject {

	AVFrameRateRangeInternal_FigRecorder* _internal;

}

@property (readonly) double minFrameRate; 
@property (readonly) double maxFrameRate; 
@property (readonly) SCD_Struct_CM4 maxFrameDuration; 
@property (readonly) SCD_Struct_CM4 minFrameDuration; 
+(id)frameRateRangeWithMinRate:(int)arg1 maxFrameRate:(int)arg2 ;
-(double)minFrameRate;
-(double)maxFrameRate;
-(SCD_Struct_CM4)maxFrameDuration;
-(SCD_Struct_CM4)minFrameDuration;
-(id)initWithMinFrameRate:(int)arg1 maxFrameRate:(int)arg2 ;
-(char)includesFrameRate:(double)arg1 ;
-(char)includesFrameDuration:(SCD_Struct_CM4)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
@end
