/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:05:32 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CKShareID, NSData, NSString;

@interface CKDModifyShareTokenInfo : NSObject {

	CKShareID* _shareID;
	NSData* _shortSharingTokenHashData;
	NSData* _encryptedFullTokenData;
	NSString* _baseToken;

}

@property (nonatomic,retain) CKShareID * shareID;                             //@synthesize shareID=_shareID - In the implementation block
@property (nonatomic,retain) NSData * shortSharingTokenHashData;              //@synthesize shortSharingTokenHashData=_shortSharingTokenHashData - In the implementation block
@property (nonatomic,retain) NSData * encryptedFullTokenData;                 //@synthesize encryptedFullTokenData=_encryptedFullTokenData - In the implementation block
@property (nonatomic,retain) NSString * baseToken;                            //@synthesize baseToken=_baseToken - In the implementation block
-(CKShareID *)shareID;
-(void)setShareID:(CKShareID *)arg1 ;
-(NSString *)baseToken;
-(void)setBaseToken:(NSString *)arg1 ;
-(NSData *)shortSharingTokenHashData;
-(void)setShortSharingTokenHashData:(NSData *)arg1 ;
-(NSData *)encryptedFullTokenData;
-(void)setEncryptedFullTokenData:(NSData *)arg1 ;
@end

