/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:39 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIView.h>
#import <ChatKit/CKGradientReferenceView.h>

@protocol CKGradientReferenceView <NSObject>
@required
-(CGRect*)gradientFrame;

@end


@class NSString;

@interface CKGradientReferenceView : UIView <CKGradientReferenceView> {

	CGRect _gradientFrame;

}

@property (assign,nonatomic) CGRect gradientFrame;                  //@synthesize gradientFrame=_gradientFrame - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(CGRect)gradientFrame;
-(void)setGradientFrame:(CGRect)arg1 ;
@end
