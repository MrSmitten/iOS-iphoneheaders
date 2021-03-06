/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:13 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _UIWebDoubleTapDelegate
@optional
-(void)willZoomToMinimumScale;
-(BOOL)shouldSelectionAssistantReceiveDoubleTapAtPoint:(CGPoint)arg1 forScale:(double)arg2;
-(void)willZoomToLocation:(CGPoint)arg1 atScale:(double)arg2 forDuration:(double)arg3;

@required
-(id)contentView;
-(double)minimumScaleForSize:(CGSize)arg1;
-(id)enclosingScrollView;
-(double)zoomedDocumentScale;
-(double)currentDocumentScale;
-(CGRect*)visibleContentRect;
-(CGRect*)rectOfInterestForPoint:(CGPoint)arg1;
-(SCD_Struct_UI39*)doubleTapScalesForSize:(CGSize)arg1;
-(BOOL)considerHeightForDoubleTap;

@end

