/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:56 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PreferenceBundles/CoreRoutineSettings.bundle/CoreRoutineSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreRoutineSettings/RTMapAndTableViewController.h>

@class RTPrivacyLOI;

@interface RTPrivacyVisitsViewController : RTMapAndTableViewController {

	RTPrivacyLOI* _privacyLOI;

}

@property (nonatomic,retain) RTPrivacyLOI * privacyLOI;              //@synthesize privacyLOI=_privacyLOI - In the implementation block
-(void)setPrivacyLOI:(RTPrivacyLOI *)arg1 ;
-(RTPrivacyLOI *)privacyLOI;
-(void)_removePrivacyLOI:(id)arg1 ;
-(void)_displayPrivacyLOI:(id)arg1 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end
