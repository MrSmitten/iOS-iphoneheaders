/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:18 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIInputSetHostView.h>

@class UIKBRenderConfig;

@interface UIInputSetContainerView : UIInputSetHostView {

	UIKBRenderConfig* _renderConfig;
	BOOL _disableGeometryObserverNotifications;

}
+(BOOL)_shouldHitTestInputViewFirst;
+(BOOL)_notifyOnExplicitLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)_disableGeometryObserverNotification;
-(void)_setRenderConfig:(id)arg1 ;
-(int)textEffectsVisibilityLevel;
-(id)_inheritedRenderConfig;
-(CGRect)_accessoryViewFrame;
-(void)_setAccessoryViewFrame:(CGRect)arg1 ;
-(id)_inputWindowController;
-(void)performWithoutGeometryObserverNotifications:(/*^block*/id)arg1 ;
@end

