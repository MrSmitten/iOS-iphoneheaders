/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:01 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewPrintFormatter.h>

@class UIWebPaginationInfo;

@interface UIWebDocumentViewPrintFormatter : UIViewPrintFormatter {

	UIWebPaginationInfo* _paginationInfo;

}
-(void)dealloc;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)_webDocumentView;
-(long long)_recalcPageCount;
-(void)removeFromPrintPageRenderer;
-(CGRect)rectForPageAtIndex:(long long)arg1 ;
-(void)drawInRect:(CGRect)arg1 forPageAtIndex:(long long)arg2 ;
@end

