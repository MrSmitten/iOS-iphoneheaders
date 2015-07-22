/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:03 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <itunesstored/NSCopying.h>

@class NSArray, NSData;

@interface DaemonBiometricMatch : NSObject <NSCopying> {

	NSArray* _biometricIdentities;
	long long _matchType;
	NSData* _tokenData;

}

@property (assign,nonatomic) long long matchType;                      //@synthesize matchType=_matchType - In the implementation block
@property (nonatomic,copy) NSArray * biometricIdentities;              //@synthesize biometricIdentities=_biometricIdentities - In the implementation block
@property (nonatomic,copy) NSData * tokenData;                         //@synthesize tokenData=_tokenData - In the implementation block
-(NSArray *)biometricIdentities;
-(void)setBiometricIdentities:(NSArray *)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMatchType:(long long)arg1 ;
-(void)setTokenData:(NSData *)arg1 ;
-(NSData *)tokenData;
-(long long)matchType;
@end
