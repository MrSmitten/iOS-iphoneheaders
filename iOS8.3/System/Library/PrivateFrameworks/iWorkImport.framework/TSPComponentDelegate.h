/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 4:42:04 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TSPComponentDelegate <NSObject>
@required
-(id)objectForIdentifier:(long long)arg1;
-(void)cacheComponent:(id)arg1 isDiscardingContent:(char)arg2;
-(char)shouldKeepAllCachedObjectsInMemory;
-(void)flushComponent:(id)arg1 isDiscardingContent:(char)arg2;
-(void)didModifyFlushedComponent:(id)arg1 forObject:(id)arg2;
-(char)isActive;

@end

