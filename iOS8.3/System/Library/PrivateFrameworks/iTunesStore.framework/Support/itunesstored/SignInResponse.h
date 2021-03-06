/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:36:43 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, ACAccountCredential;

@interface SignInResponse : NSObject {

	NSString* _password;
	int _responseType;
	ACAccountCredential* _singleSignOnCredential;
	NSString* _userName;

}

@property (assign,nonatomic) int signInResponseType;                                    //@synthesize responseType=_responseType - In the implementation block
@property (nonatomic,copy) NSString * password;                                         //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) ACAccountCredential * singleSignOnCredential;              //@synthesize singleSignOnCredential=_singleSignOnCredential - In the implementation block
@property (nonatomic,copy) NSString * userName;                                         //@synthesize userName=_userName - In the implementation block
+(char)deviceSupportsSingleSignOn;
-(int)signInResponseType;
-(void)setSignInResponseType:(int)arg1 ;
-(void)setSingleSignOnCredential:(ACAccountCredential *)arg1 ;
-(id)initWithResponseType:(int)arg1 ;
-(ACAccountCredential *)singleSignOnCredential;
-(NSString *)userName;
-(void)setUserName:(NSString *)arg1 ;
-(void)dealloc;
-(NSString *)password;
-(void)setPassword:(NSString *)arg1 ;
@end

