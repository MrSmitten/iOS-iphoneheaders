/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:08 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVFrameRateRangeInternal;

@interface AVFrameRateRange : NSObject {

	AVFrameRateRangeInternal* _internal;

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

