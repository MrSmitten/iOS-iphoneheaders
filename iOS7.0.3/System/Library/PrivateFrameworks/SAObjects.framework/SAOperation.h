/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:14 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSDictionary, NSString;

@interface SAOperation : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSDictionary * constraints; 
@property (nonatomic,copy) NSString * domainId; 
@property (nonatomic,copy) NSString * operationId; 
+(id)operation;
+(id)operationWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setConstraints:(id)arg1 ;
-(id)constraints;
-(id)encodedClassName;
-(id)domainId;
-(void)setDomainId:(id)arg1 ;
-(id)operationId;
-(void)setOperationId:(id)arg1 ;
@end

