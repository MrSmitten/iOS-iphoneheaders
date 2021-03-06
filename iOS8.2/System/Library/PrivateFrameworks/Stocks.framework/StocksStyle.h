/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:21:07 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UIColor, UIFont;

@interface StocksStyle : NSObject {

	UIColor* _chartHighlightColor;
	UIFont* _mainFont;
	UIFont* _chartLabelFont;

}
+(id)sharedStyle;
-(void)dealloc;
-(id)init;
-(void)resetLocale;
-(id)gainColor;
-(id)lossColor;
-(id)chartHighlightColor;
-(id)lightFontOfSize:(float)arg1 ;
-(id)fontOfSize:(float)arg1 ;
-(id)mediumFontOfSize:(float)arg1 ;
-(id)boldFontOfSize:(float)arg1 ;
@end

