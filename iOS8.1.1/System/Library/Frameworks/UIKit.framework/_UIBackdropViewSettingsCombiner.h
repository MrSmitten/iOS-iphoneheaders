/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:20 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIBackdropViewSettings.h>

@class _UIBackdropViewSettings;

@interface _UIBackdropViewSettingsCombiner : _UIBackdropViewSettings {

	_UIBackdropViewSettings* _inputSettingsA;
	_UIBackdropViewSettings* _inputSettingsB;
	double _weighting;
	_UIBackdropViewSettings* _outputSettingsA;
	_UIBackdropViewSettings* _outputSettingsB;

}

@property (nonatomic,retain) _UIBackdropViewSettings * inputSettingsA;               //@synthesize inputSettingsA=_inputSettingsA - In the implementation block
@property (nonatomic,retain) _UIBackdropViewSettings * inputSettingsB;               //@synthesize inputSettingsB=_inputSettingsB - In the implementation block
@property (assign,nonatomic) double weighting;                                       //@synthesize weighting=_weighting - In the implementation block
@property (nonatomic,retain) _UIBackdropViewSettings * outputSettingsA;              //@synthesize outputSettingsA=_outputSettingsA - In the implementation block
@property (nonatomic,retain) _UIBackdropViewSettings * outputSettingsB;              //@synthesize outputSettingsB=_outputSettingsB - In the implementation block
-(void)dealloc;
-(void)computeOutputSettingsUsingModel:(id)arg1 ;
-(void)setInputSettingsA:(_UIBackdropViewSettings *)arg1 ;
-(void)setInputSettingsB:(_UIBackdropViewSettings *)arg1 ;
-(void)setOutputSettingsA:(_UIBackdropViewSettings *)arg1 ;
-(void)setOutputSettingsB:(_UIBackdropViewSettings *)arg1 ;
-(_UIBackdropViewSettings *)outputSettingsA;
-(_UIBackdropViewSettings *)inputSettingsA;
-(_UIBackdropViewSettings *)outputSettingsB;
-(_UIBackdropViewSettings *)inputSettingsB;
-(double)weighting;
-(void)setWeighting:(double)arg1 ;
@end

