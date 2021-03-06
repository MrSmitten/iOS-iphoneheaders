/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:50 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PowerlogCore/PLOperator.h>

@interface PLStorageOperator : PLOperator
+(id)entryEventPointDefinitionOTA;
+(id)entryEventPointDefinitionArchive;
+(id)entryEventPointDefinitionMerge;
+(id)entryEventForwardDefinitionSchemaChange;
+(id)entryEventForwardDefinitionConfiguration;
+(id)entryEventForwardDefinitionTimeOffset;
+(id)entryEventPointDefinitions;
+(id)entryEventForwardDefinitions;
-(void)log;
-(void)logEventForwardTimeOffset:(id)arg1 ;
-(void)logEventPointMerge:(id)arg1 ;
-(void)logEventNoneConfiguration:(id)arg1 ;
-(void)logEventForwardSchemaChange:(id)arg1 ;
-(void)logEventPointOTA:(id)arg1 ;
-(void)logEventPointArchive:(id)arg1 ;
-(void)initOperatorDependancies;
-(id)trimmingConditionsForRolloverAtDate:(id)arg1 ;
@end

