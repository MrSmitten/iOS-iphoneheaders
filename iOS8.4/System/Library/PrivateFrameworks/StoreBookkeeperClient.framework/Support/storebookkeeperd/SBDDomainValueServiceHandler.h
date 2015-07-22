/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:42 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/Support/storebookkeeperd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <storebookkeeperd/SBDDomainServiceHandler.h>
#import <storebookkeeperd/SBCDomainValueServiceProtocol.h>

@class SBKUniversalPlaybackPositionStore, NSString;

@interface SBDDomainValueServiceHandler : SBDDomainServiceHandler <SBCDomainValueServiceProtocol> {

	SBKUniversalPlaybackPositionStore* _cloudStore;

}

@property (nonatomic,readonly) SBKUniversalPlaybackPositionStore * cloudStore;              //@synthesize cloudStore=_cloudStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SBKUniversalPlaybackPositionStore *)cloudStore;
-(id)initWithDomain:(id)arg1 ;
-(oneway void)pullPlaybackPositionEntity:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(oneway void)pushPlaybackPositionEntity:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end
