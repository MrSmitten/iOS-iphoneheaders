/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:34:50 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/sbin/BTServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface AppInfo : NSObject {

	BOOL _isApp;
	int _pid;

}

@property (assign,nonatomic) int pid;                 //@synthesize pid=_pid - In the implementation block
@property (assign,nonatomic) BOOL isApp;              //@synthesize isApp=_isApp - In the implementation block
+(id)appInfoWithPID:(int)arg1 isApp:(BOOL)arg2 ;
-(void)setIsApp:(BOOL)arg1 ;
-(id)initWithPID:(int)arg1 isApp:(BOOL)arg2 ;
-(int)pid;
-(void)setPid:(int)arg1 ;
-(BOOL)isApp;
@end
