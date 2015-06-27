/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:49 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetStatistics.framework/CoreDuetStatistics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CDSEngine : NSObject
+(id)valueStatistic:(int)arg1 fromBasisObjects:(id)arg2 error:(id*)arg3 ;
+(id)durationStatistic:(int)arg1 fromBasisObjects:(id)arg2 error:(id*)arg3 ;
+(id)interArrivalStatistic:(int)arg1 fromBasisObjects:(id)arg2 error:(id*)arg3 ;
+(id)canonicalizeBasisObjectSequence:(id)arg1 error:(id*)arg2 ;
-(char)injestBasisObjects:(id)arg1 error:(id*)arg2 ;
-(double)occurrenceCoevalityCorrelationOfAttributeId:(unsigned long long)arg1 toAttributeId:(unsigned long long)arg2 coevalityLeewaySeconds:(double)arg3 error:(id*)arg4 ;
-(double)occurrenceOrderingCorrelationOfAttributeId:(unsigned long long)arg1 toAttributeId:(unsigned long long)arg2 orderingGapLeewaySeconds:(double)arg3 error:(id*)arg4 ;
-(double*)copyRangeCoevalityCorrelationMatrixOfAttributeId:(unsigned long long)arg1 toAttributeId:(unsigned long long)arg2 coevalityLeewaySeconds:(double)arg3 error:(id*)arg4 ;
-(double*)copyRangeOrderingCorrelationMatrixOfAttributeId:(unsigned long long)arg1 toAttributeId:(unsigned long long)arg2 orderingGapLeewaySeconds:(double)arg3 error:(id*)arg4 ;
-(id)cachedAttributeIds;
-(double*)copyOccurrenceCoevalityCorrelationMatrixWithCoevalityLeewaySeconds:(double)arg1 writeAttributeCount:(unsigned long long*)arg2 error:(id*)arg3 ;
-(double*)copyOccurrenceOrderingCorrelationMatrixWithOrderingGapLeewaySeconds:(double)arg1 writeAttributeCount:(unsigned long long*)arg2 error:(id*)arg3 ;
-(double*)copyRangeCoevalityCorrelationMatrixWithCoevalityLeewaySeconds:(double)arg1 writeAttributeCount:(unsigned long long*)arg2 error:(id*)arg3 ;
-(double*)copyRangeOrderingCorrelationMatrixWithOrderingGapLeewaySeconds:(double)arg1 writeAttributeCount:(unsigned long long*)arg2 error:(id*)arg3 ;
-(double*)copyPrincipalOccurrenceCoevalityComponentsWithCoevalityLeewaySeconds:(double)arg1 writeAttributeCount:(unsigned long long*)arg2 writeAttributeIds:(unsigned long long*)arg3 error:(id*)arg4 ;
-(double*)copyPrincipalOccurrenceOrderingComponentsWithOrderingGapLeewaySeconds:(double)arg1 writeAttributeCount:(unsigned long long*)arg2 writeAttributeIds:(unsigned long long*)arg3 error:(id*)arg4 ;
-(double*)copyPrincipalRangeCoevalityComponentsWithCoevalityLeewaySeconds:(double)arg1 writeAttributeCount:(unsigned long long*)arg2 writeAttributeIds:(unsigned long long*)arg3 writeStatisticTypes:(int*)arg4 error:(id*)arg5 ;
-(double*)copyPrincipalRangeOrderingComponentsWithOrderingGapLeewaySeconds:(double)arg1 writeAttributeCount:(unsigned long long*)arg2 writeAttributeIds:(unsigned long long*)arg3 writeStatisticTypes:(int*)arg4 error:(id*)arg5 ;
-(id)valueStatistic:(int)arg1 forAttributeId:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)durationStatistic:(int)arg1 forAttributeId:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)interArrivalStatistic:(int)arg1 forAttributeId:(unsigned long long)arg2 error:(id*)arg3 ;
@end
