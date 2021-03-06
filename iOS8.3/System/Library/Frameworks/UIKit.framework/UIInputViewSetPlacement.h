/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, June 24, 2015 at 11:17:45 PM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface UIInputViewSetPlacement : NSObject {

	float _extendedHeight;

}

@property (nonatomic,readonly) char showsInputViews; 
@property (nonatomic,readonly) char showsKeyboard; 
@property (nonatomic,readonly) char isUndocked; 
@property (nonatomic,readonly) char isInteractive; 
@property (assign,nonatomic) float extendedHeight;                //@synthesize extendedHeight=_extendedHeight - In the implementation block
+(id)placement;
-(char)isEqual:(id)arg1 ;
-(char)isInteractive;
-(char)showsInputViews;
-(char)inputViewWillAppear;
-(char)isUndocked;
-(char)showsKeyboard;
-(id)horizontalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(unsigned)notificationsForTransitionToPlacement:(id)arg1 ;
-(char)accessoryViewWillAppear;
-(float)extendedHeight;
-(void)setExtendedHeight:(float)arg1 ;
@end

