/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:19:05 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIScreenBasedObject.h>

@class UIScreen, NSMutableDictionary, NSString, NSDictionary;

@interface UIKBGraphCache : NSObject <_UIScreenBasedObject> {

	UIScreen* _screen;
	NSMutableDictionary* _graphCache;

}

@property (nonatomic,readonly) NSMutableDictionary * graphCache;              //@synthesize graphCache=_graphCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) UIScreen * _intendedScreen; 
@property (readonly) NSDictionary * _options; 
+(id)graphCacheForScreen:(id)arg1 ;
-(void)dealloc;
-(NSDictionary *)_options;
-(id)_initWithScreen:(id)arg1 options:(id)arg2 ;
-(BOOL)_matchingOptions:(id)arg1 ;
-(UIScreen *)_intendedScreen;
-(NSMutableDictionary *)graphCache;
@end
