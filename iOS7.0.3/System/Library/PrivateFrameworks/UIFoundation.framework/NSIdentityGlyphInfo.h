/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIFoundation/NSGlyphInfo.h>

@class UIFont;

@interface NSIdentityGlyphInfo : NSGlyphInfo {

	UIFont* _font;
	unsigned _glyph;

}
+(void)initialize;
+(id)glyphInfoWithGlyph:(unsigned)arg1 forFont:(id)arg2 baseString:(id)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)_font;
-(unsigned)_glyphForFont:(id)arg1 baseString:(id)arg2 ;
-(id)initWithGlyph:(unsigned)arg1 forFont:(id)arg2 baseString:(id)arg3 ;
-(unsigned)_glyph;
@end

