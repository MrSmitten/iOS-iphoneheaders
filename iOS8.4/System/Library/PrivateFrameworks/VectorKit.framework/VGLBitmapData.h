/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:26:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class NSData;

@interface VGLBitmapData : NSObject {

	NSData* _bitmapData;
	VGLBitmapInfo* _bitmapInfo;
	IOSurfaceRef _surface;

}

@property (nonatomic,readonly) unsigned long long dataLength; 
@property (nonatomic,readonly) VGLBitmapInfo* bitmapInfo;                  //@synthesize bitmapInfo=_bitmapInfo - In the implementation block
-(void)dealloc;
-(id)description;
-(void)getBytes:(void*)arg1 range:(NSRange)arg2 ;
-(void)_commonInitWithBytes:(void*)arg1 bitmapInfo:(const VGLBitmapInfo*)arg2 ;
-(id)initWithBytes:(void*)arg1 bitmapInfo:(const VGLBitmapInfo*)arg2 ;
-(id)initWithSurface:(IOSurfaceRef)arg1 bitmapInfo:(const VGLBitmapInfo*)arg2 ;
-(unsigned long long)dataLength;
-(VGLBitmapInfo*)bitmapInfo;
@end

