/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:36 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <UIKit/UIImage.h>

@class NSData;

@interface PLJPEGDataImage : UIImage {

	NSData* _plData;
	CVBufferRef _pixelBuffer;

}
+(id)pl_imageWithStoredJPEGData:(id)arg1 ;
-(void)dealloc;
-(id)pl_imageJPEGData;
@end

