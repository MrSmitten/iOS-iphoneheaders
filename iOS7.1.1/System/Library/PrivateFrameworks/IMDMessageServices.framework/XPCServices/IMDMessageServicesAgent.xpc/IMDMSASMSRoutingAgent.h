/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 4:09:36 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/IMDMessageServices.framework/XPCServices/IMDMessageServicesAgent.xpc/IMDMessageServicesAgent
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMDMessageServicesAgent/IMDMSARoutingAgent.h>

@interface IMDMSASMSRoutingAgent : IMDMSARoutingAgent
+(id)smsRoutingAgent;
-(BOOL)shouldSendMessage:(id)arg1 ;
-(void)getRoutableMessages:(/*^block*/ id)arg1 ;
-(BOOL)__isSendableType:(id)arg1 ;
-(BOOL)__attachmentPassesMMSRestrictions:(id)arg1 ;
-(BOOL)__attachmentPassesDurationRestrictions:(id)arg1 ;
-(int)_bagValueForKey:(id)arg1 defaultValue:(int)arg2 minimumValue:(int)arg3 ;
-(void)_updateUndeliveredMessageWaterMark:(int)arg1 ;
-(int)_undeliveredMessageWaterMark;
-(BOOL)_messageHasDowngradeMarkers:(id)arg1 ;
-(BOOL)_attachmentCanBeSentViaMMS:(id)arg1 ;
-(double)_upperDowngradeInterval;
-(double)_lowerDowngradeIntervalForMessage:(id)arg1 ;
-(void)_getCandidateMessages:(/*^block*/ id)arg1 ;
-(id)init;
-(BOOL)canSendMessage:(id)arg1 ;
@end
