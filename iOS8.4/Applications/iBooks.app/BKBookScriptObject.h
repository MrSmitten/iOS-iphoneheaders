/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:21 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, NSNumber, NSDictionary;

@interface BKBookScriptObject : SUScriptObject {

	NSString* _adamID;
	NSString* _publicationVersion;
	NSString* _humanReadablePublicationVersion;
	NSNumber* _dsID;
	NSNumber* _isSample;
	NSString* _storeFrontID;
	NSString* _versionID;
	NSDictionary* _digest;

}
+(id)webScriptNameForKey:(const char*)arg1 ;
-(id)initWithDigest:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)_className;
-(id)isSample;
@end

