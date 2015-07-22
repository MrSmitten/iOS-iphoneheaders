/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:27 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Diagnostics.app/Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface DAPossibility : NSObject {

	NSMutableDictionary* _workingInputComponents;
	NSMutableDictionary* _workingOutputComponents;
	double _probability;

}

@property (assign) double probability;                                         //@synthesize probability=_probability - In the implementation block
@property (retain) NSMutableDictionary * workingInputComponents;               //@synthesize workingInputComponents=_workingInputComponents - In the implementation block
@property (retain) NSMutableDictionary * workingOutputComponents;              //@synthesize workingOutputComponents=_workingOutputComponents - In the implementation block
-(id)initWithWorkingInputs:(id)arg1 andOutputs:(id)arg2 ;
-(id)getWorkingOfOutput:(id)arg1 ;
-(id)getWorkingOfInput:(id)arg1 ;
-(void)setWorkingInputComponents:(NSMutableDictionary *)arg1 ;
-(void)setWorkingOutputComponents:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)workingInputComponents;
-(NSMutableDictionary *)workingOutputComponents;
-(double)probability;
-(void)setProbability:(double)arg1 ;
@end
