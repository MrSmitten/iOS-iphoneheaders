/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:24:14 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/ESDObject.h>

@class NSData, NSMutableArray, CHDChart;

@interface EBEscherShape : ESDObject {

	NSData* mChartData;
	NSMutableArray* mChartColorLocators;
	BOOL mShowLegend;
	CHDChart* mChart;

}
-(void)dealloc;
-(void)setChart:(id)arg1 ;
-(id)chart;
-(id)chartData;
-(void)setChartData:(id)arg1 ;
-(id)chartColorLocators;
-(void)setChartColorLocators:(id)arg1 ;
-(BOOL)showLegend;
-(void)setShowLegend:(BOOL)arg1 ;
@end
