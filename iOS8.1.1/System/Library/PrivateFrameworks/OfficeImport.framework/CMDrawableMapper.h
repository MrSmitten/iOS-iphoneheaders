/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:32:51 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMMapper.h>

@class OADDrawable, CMDrawableStyle, NSData, NSString, OADOrientedBounds;

@interface CMDrawableMapper : CMMapper {

	OADDrawable* mDrawable;
	CMDrawableStyle* mStyle;
	NSData* mImageBinaryData;
	NSString* mName;
	NSString* mExtension;
	int mResourceType;
	NSString* mSourcePath;
	CGRect mBox;
	float mRotation;
	BOOL mIsSupported;
	BOOL mIsCropped;
	CGRect mUncroppedBox;
	OADOrientedBounds* mOrientedBounds;

}
+(id)orientedBoundsForDrawable:(id)arg1 ;
-(CGRect)box;
-(void)dealloc;
-(void)setRotation:(float)arg1 ;
-(float)rotation;
-(id)blipAtIndex:(unsigned)arg1 ;
-(id)initWithOadDrawable:(id)arg1 parent:(id)arg2 ;
-(void)setBoundingBox;
-(void)setWithOadImage:(id)arg1 ;
-(void)mapTextBoxAt:(id)arg1 withState:(id)arg2 ;
-(void)calculateUncroppedBox:(id)arg1 ;
-(BOOL)isCropped;
-(CGRect)uncroppedBox;
-(id)saveResourceAndReturnPath:(id)arg1 withType:(int)arg2 ;
-(void)mapShapeGraphicsAt:(id)arg1 withState:(id)arg2 ;
-(CGRect)shapeTextBoxRect;
-(void)mapDrawingContext:(id)arg1 at:(id)arg2 relative:(BOOL)arg3 withState:(id)arg4 ;
-(void)mapBounds;
-(id)convertMetafileToPdf;
-(void)mapImageBinaryData;
-(id)initWithParent:(id)arg1 ;
@end
