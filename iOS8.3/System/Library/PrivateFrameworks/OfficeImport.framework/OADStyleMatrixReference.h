/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 2:53:03 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/NSCopying.h>

@class OADColor;

@interface OADStyleMatrixReference : NSObject <NSCopying> {

	unsigned long mMatrixIndex;
	OADColor* mColor;

}
+(id)styleMatrixReferenceWithMatrixIndex:(unsigned long)arg1 color:(id)arg2 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)color;
-(void)setColor:(id)arg1 ;
-(void)setMatrixIndex:(unsigned long)arg1 ;
-(unsigned long)matrixIndex;
-(id)initWithMatrixIndex:(unsigned long)arg1 color:(id)arg2 ;
-(void)applyToStrokeInProperties:(id)arg1 styleMatrix:(id)arg2 ;
-(void)applyToFillInProperties:(id)arg1 styleMatrix:(id)arg2 ;
-(void)applyToEffectsInProperties:(id)arg1 styleMatrix:(id)arg2 ;
@end

