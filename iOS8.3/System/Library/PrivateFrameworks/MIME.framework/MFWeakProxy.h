/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:18:35 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MIME/MIME-Structs.h>
#import <Foundation/NSProxy.h>

@class MFWeakReferenceHolder;

@interface MFWeakProxy : NSProxy {

	Class _objectClass;
	MFWeakReferenceHolder* _weakRef;
	unsigned _hash;

}
+(id)weakProxyForObject:(id)arg1 ;
-(objc_method_description*)methodDescriptionForSelector:(SEL)arg1 ;
-(Class)class;
-(void)dealloc;
-(char)respondsToSelector:(SEL)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)self;
-(char)isProxy;
-(unsigned)hash;
-(Class)superclass;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(void)doesNotRecognizeSelector:(SEL)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(id)descriptionWithLocale:(id)arg1 ;
@end
