/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:10:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSPObject.h>

@class KNUIState;

@interface KNArchivedUIState : TSPObject {

	KNUIState* mUIState;

}

@property (nonatomic,readonly) KNUIState * uiState; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)uiState;
-(id)initWithUIState:(id)arg1 context:(id)arg2 ;
-(void)dealloc;
@end

