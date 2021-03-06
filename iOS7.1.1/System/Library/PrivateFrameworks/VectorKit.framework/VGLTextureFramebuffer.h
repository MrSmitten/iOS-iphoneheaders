/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:46 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VGLFramebuffer.h>

@class VGLTextureCanvas;

@interface VGLTextureFramebuffer : VGLFramebuffer {

	VGLTextureCanvas* _textureCanvas;

}
-(int)width;
-(int)height;
-(void)_detach;
-(id)canvas;
-(void)deleteUnusedFramebuffers;
-(void)preloadMultisampleFramebuffer;
-(void)deleteResolveFramebuffers;
-(bool)isPresentable;
-(void)makeTarget;
-(void)deleteFramebuffers;
-(unsigned)framebuffer;
-(id)initWithTextureCanvas:(id)arg1 ;
-(void)finalize;
@end

