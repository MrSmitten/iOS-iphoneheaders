/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:25:57 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMEvent.h>

@interface DOMOverflowEvent : DOMEvent

@property (readonly) unsigned short orient; 
@property (readonly) bool horizontalOverflow; 
@property (readonly) bool verticalOverflow; 
-(unsigned short)orient;
-(bool)horizontalOverflow;
-(bool)verticalOverflow;
-(void)initOverflowEvent:(unsigned short)arg1 horizontalOverflow:(bool)arg2 verticalOverflow:(bool)arg3 ;
@end
