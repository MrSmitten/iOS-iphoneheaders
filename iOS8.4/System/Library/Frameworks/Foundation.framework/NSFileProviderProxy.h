/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:56 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSFileReactorProxy.h>

@interface NSFileProviderProxy : NSFileReactorProxy {

	BOOL _wantsWriteNotifications;

}

@property (assign) BOOL wantsWriteNotifications;              //@synthesize wantsWriteNotifications=_wantsWriteNotifications - In the implementation block
-(void)setItemLocation:(id)arg1 ;
-(void)observePresentationChangeOfKind:(id)arg1 withPresenter:(id)arg2 url:(id)arg3 newURL:(id)arg4 ;
-(void)setWantsWriteNotifications:(BOOL)arg1 ;
-(/*^block*/id)provideItemAtURL:(id)arg1 forAccessClaim:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)providePhysicalURLForURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)observeEndOfWriteAtLocation:(id)arg1 forAccessClaim:(id)arg2 ;
-(void)forwardUsingMessageSender:(/*^block*/id)arg1 ;
-(void)provideLogicalURLForURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)wantsWriteNotifications;
@end
