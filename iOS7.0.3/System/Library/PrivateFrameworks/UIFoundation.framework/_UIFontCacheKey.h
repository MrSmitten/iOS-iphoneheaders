/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:57 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, UIFontDescriptor;

@interface _UIFontCacheKey : NSObject <NSCopying> {

	NSString* _fontName;
	int _traits;
	float _pointSize;
	NSString* _textStyle;
	NSString* _contentSizeCategory;
	UIFontDescriptor* _fontDescriptor;

}

@property (nonatomic,copy) NSString * fontName;                            //@synthesize fontName=_fontName - In the implementation block
@property (assign,nonatomic) int traits;                                   //@synthesize traits=_traits - In the implementation block
@property (assign,nonatomic) float pointSize;                              //@synthesize pointSize=_pointSize - In the implementation block
@property (nonatomic,copy) NSString * textStyle;                           //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,copy) NSString * contentSizeCategory;                 //@synthesize contentSizeCategory=_contentSizeCategory - In the implementation block
@property (nonatomic,copy) UIFontDescriptor * fontDescriptor;              //@synthesize fontDescriptor=_fontDescriptor - In the implementation block
+(id)fontCacheKeyWithFontName:(id)arg1 traits:(int)arg2 pointSize:(float)arg3 ;
+(id)systemFontCacheKeyWithTraits:(int)arg1 pointSize:(float)arg2 ;
+(id)fontCacheKeyWithTextStyle:(id)arg1 contentSizeCategory:(id)arg2 ;
+(id)fontCacheKeyWithFontDescriptor:(id)arg1 pointSize:(float)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(float)pointSize;
-(id)fontName;
-(int)traits;
-(void)setFontName:(id)arg1 ;
-(id)textStyle;
-(id)fontDescriptor;
-(void)setTextStyle:(id)arg1 ;
-(void)setTraits:(int)arg1 ;
-(void)setPointSize:(float)arg1 ;
-(void)setContentSizeCategory:(id)arg1 ;
-(void)setFontDescriptor:(id)arg1 ;
-(id)contentSizeCategory;
@end

