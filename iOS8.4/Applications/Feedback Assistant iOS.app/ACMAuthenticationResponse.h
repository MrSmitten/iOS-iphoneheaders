/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSString, NSError;


@protocol ACMAuthenticationResponse <NSObject>
@property (retain) NSString * token; 
@property (retain) NSError * error; 
@property (retain) NSString * userName; 
@required
-(NSString *)userName;
-(void)setUserName:(id)arg1;
-(NSString *)token;
-(void)setToken:(id)arg1;
-(NSError *)error;
-(void)setError:(id)arg1;

@end
