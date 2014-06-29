/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:21:23 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CalloutViewControllerProtocol <NSObject>
@property (nonatomic,copy) NSString * calloutTitle; 
@property (nonatomic,copy) NSString * calloutSubtitle; 
@property (nonatomic,retain) UIView * leftView; 
@property (nonatomic,retain) UIView * rightView; 
@property (nonatomic,retain) UIView * detailView; 
@required
-(id)calloutSubtitle;
-(void)setCalloutSubtitle:(id)arg1 animated:(bool)arg2;
-(void)setDetailView:(id)arg1 animated:(bool)arg2;
-(void)beginMapsTransitionMovingSideways;
-(id)detailView;
-(bool)canDisplayCompleteTitleWhenExpanded;
-(void)setCalloutSubtitle:(id)arg1;
-(void)setDetailView:(id)arg1;
-(void)setLeftView:(id)arg1 animated:(bool)arg2;
-(void)setRightView:(id)arg1 animated:(bool)arg2;
-(void)setLeftView:(id)arg1;
-(void)setRightView:(id)arg1;
-(id)leftView;
-(id)rightView;
-(void)setCalloutTitle:(id)arg1;
-(id)calloutTitle;
@end
