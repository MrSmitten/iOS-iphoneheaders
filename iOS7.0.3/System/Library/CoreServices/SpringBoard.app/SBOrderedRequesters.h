/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface SBOrderedRequesters : NSObject {

	NSMutableArray* _bands[3];

}
-(id)requesters;
-(id)frontmostRequester;
-(BOOL)containsRequester:(id)arg1 inBand:(int)arg2 ;
-(void)addRequester:(id)arg1 toBand:(int)arg2 ;
-(void)prioritizeRequester:(id)arg1 ;
-(void)removeRequester:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
@end
