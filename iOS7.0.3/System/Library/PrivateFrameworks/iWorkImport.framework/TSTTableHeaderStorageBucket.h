/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPObject.h>
#import <iWorkImport/TSTTableHeaderStorage.h>

@interface TSTTableHeaderStorageBucket : TSPObject <TSTTableHeaderStorage> {

	map<unsigned long, SFUtility::ObjcSharedPtr<NSObject>, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, SFUtility::ObjcSharedPtr<NSObject> > > >* mMap;
	float mHorizontalScaleFactor;

}

@property (assign,nonatomic) float horizontalScaleFactor; 
-(id)packageLocator;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(unsigned long)flushableSize;
-(id)headerForKey:(unsigned long)arg1 willModify:(BOOL)arg2 createIfNotThere:(BOOL)arg3 ;
-(void)shiftKeysAtIndex:(unsigned long)arg1 amount:(long)arg2 ;
-(void)applyFunction:(/*function pointer*/ void*)arg1 withState:(void*)arg2 willModify:(BOOL)arg3 ;
-(id)headerForKey:(unsigned long)arg1 willModify:(BOOL)arg2 ;
-(void)removeAllHeaders;
-(void)makeHeadersPerformSelector:(SEL)arg1 willModify:(BOOL)arg2 ;
-(unsigned long)minKey;
-(unsigned long)maxKey;
-(unsigned long)upperBound:(unsigned long)arg1 ;
-(unsigned long)lowerBound:(unsigned long)arg1 ;
-(float)horizontalScaleFactor;
-(void)setHorizontalScaleFactor:(float)arg1 ;
-(void)dealloc;
-(int)count;
-(id)initWithContext:(id)arg1 ;
-(void)setHeader:(id)arg1 forKey:(unsigned long)arg2 ;
-(void)removeHeaderForKey:(unsigned long)arg1 ;
@end

