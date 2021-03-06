/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSString;

@interface CATextLayer : CALayer {

	CATextLayerPrivateRef _state;

}

@property (copy) id truncationString; 
@property (assign) BOOL allowsFontSubpixelQuantization; 
@property (copy) id string; 
@property (assign) void* font; 
@property (assign) float fontSize; 
@property (assign) CGColorRef foregroundColor; 
@property (getter=isWrapped) BOOL wrapped; 
@property (copy) NSString * truncationMode; 
@property (copy) NSString * alignmentMode; 
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(BOOL)needsDisplayForKey:(id)arg1 ;
-(void)_prepareContext:(CGContextRef)arg1 ;
-(CGSize)_preferredSize;
-(BOOL)allowsFontSubpixelQuantization;
-(void)_drawLine:(CTLineRef)arg1 inContext:(CGContextRef)arg2 atPoint:(CGPoint)arg3 ;
-(BOOL)isWrapped;
-(id)_createStringDict;
-(id)truncationString;
-(CTTypesetterRef)_retainTypesetter;
-(id)alignmentMode;
-(id)truncationMode;
-(CTLineRef)_createTruncationToken;
-(void)_applyLinesToFunction:(/*function pointer*/ void*)arg1 info:(void*)arg2 ;
-(void)setWrapped:(BOOL)arg1 ;
-(void)setTruncationMode:(id)arg1 ;
-(BOOL)wrapped;
-(void)setTruncationString:(id)arg1 ;
-(void)setAllowsFontSubpixelQuantization:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(void)didChangeValueForKey:(id)arg1 ;
-(id)string;
-(id)implicitAnimationForKeyPath:(id)arg1 ;
-(void)setFont:(void*)arg1 ;
-(void*)font;
-(void)setFontSize:(float)arg1 ;
-(void)setString:(id)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(CGColorRef)foregroundColor;
-(void)setForegroundColor:(CGColorRef)arg1 ;
-(void)setAlignmentMode:(id)arg1 ;
-(float)fontSize;
-(void)drawInContext:(CGContextRef)arg1 ;
@end

