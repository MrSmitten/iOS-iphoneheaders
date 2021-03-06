/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UIPDFSelectionWidgetNSObject;
#import <CorePDF/CorePDF-Structs.h>
@class UIPDFPageView;

@interface UIPDFSelectionController : NSObject {

	UIPDFPageView* _pageView;
	bool _rangeMode;
	<UIPDFSelectionWidget><NSObject>* _selectionWidget;
	bool _resizingWidget;
	CGPoint _selectionFixedPoint;
	CGRect _selectionBounds;
	bool _preceeds;
	bool _isTracking;
	CGPoint _adjustedPoint;
	bool _hiding;
	long long _firstIndex;
	long long _lastIndex;
	CGPoint _startPoint;
	bool _needsLayout;
	bool _cancelled;
	bool _instantModeIsSuspended;
	bool _instantHighlightMode;

}

@property (assign,nonatomic) UIPDFPageView * pageView;                                //@synthesize pageView=_pageView - In the implementation block
@property (nonatomic,readonly) bool rangeMode;                                        //@synthesize rangeMode=_rangeMode - In the implementation block
@property (nonatomic,readonly) <UIPDFSelectionWidget> * selectionWidget;              //@synthesize selectionWidget=_selectionWidget - In the implementation block
@property (nonatomic,readonly) bool isTracking;                                       //@synthesize isTracking=_isTracking - In the implementation block
@property (nonatomic,readonly) CGPoint adjustedPoint;                                 //@synthesize adjustedPoint=_adjustedPoint - In the implementation block
@property (nonatomic,readonly) CGPoint initialSelectionPoint; 
@property (nonatomic,readonly) CGPoint currentSelectionPoint; 
@property (assign,nonatomic) bool instantHighlightMode;                               //@synthesize instantHighlightMode=_instantHighlightMode - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(bool)isTracking;
-(void)clearSelection;
-(id)pageView;
-(void)layoutSelections;
-(void)hideWidget;
-(void)addSelectionWidget:(id)arg1 ;
-(void)setInstantHighlightMode:(bool)arg1 ;
-(void)suspendInstantHighlightMode;
-(void)setPageView:(id)arg1 ;
-(void)selectionHideFromAncestor:(id)arg1 ;
-(void)selectionShowToAncestor:(id)arg1 ;
-(void)selectionHide:(id)arg1 ;
-(void)selectionShowDelayed:(id)arg1 ;
-(void)selectionShow:(id)arg1 ;
-(void)setSelectionFor:(CGPoint)arg1 ;
-(bool)useParagraphMode;
-(void)startSelectingAt:(CGPoint)arg1 ;
-(void)adjustSelection:(CGPoint)arg1 ;
-(void)extendSelectionToParagraph;
-(bool)shouldTrackAt:(CGPoint)arg1 ;
-(void)startTracking:(CGPoint)arg1 showMagnifier:(bool*)arg2 ;
-(void)tracking:(CGPoint)arg1 showMagnifier:(bool*)arg2 ;
-(void)endTracking:(CGPoint)arg1 ;
-(void)startTracking:(CGPoint)arg1 andPoint:(CGPoint)arg2 ;
-(void)tracking:(CGPoint)arg1 andPoint:(CGPoint)arg2 ;
-(CGPoint)selectedPointOffset;
-(CGPoint)initialSelectionPoint;
-(CGPoint)currentSelectionPoint;
-(bool)rangeMode;
-(id)selectionWidget;
-(CGPoint)adjustedPoint;
-(bool)instantHighlightMode;
@end

