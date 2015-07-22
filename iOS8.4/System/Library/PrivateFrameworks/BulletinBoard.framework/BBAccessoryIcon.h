/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:20:56 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <BulletinBoard/NSCopying.h>
#import <BulletinBoard/NSSecureCoding.h>

@class NSMutableDictionary, NSDictionary;

@interface BBAccessoryIcon : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _imagesForContentSize;

}

@property (nonatomic,copy) NSDictionary * imagesForContentSize;              //@synthesize imagesForContentSize=_imagesForContentSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)imagesForContentSize;
-(void)setImagesForContentSize:(NSDictionary *)arg1 ;
-(void)addImage:(id)arg1 forContentSizeCategory:(id)arg2 ;
-(id)imageForContentSizeCategory:(id)arg1 ;
@end
