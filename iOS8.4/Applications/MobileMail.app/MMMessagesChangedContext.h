/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:47 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSDictionary.h>

@class NSSet;

@interface MMMessagesChangedContext : NSDictionary {

	NSSet* _messages;
	NSSet* _indexPaths;

}

@property (nonatomic,retain) NSSet * messages;                //@synthesize messages=_messages - In the implementation block
@property (nonatomic,retain) NSSet * indexPaths;              //@synthesize indexPaths=_indexPaths - In the implementation block
-(void)setMessages:(NSSet *)arg1 ;
-(void)dealloc;
-(NSSet *)messages;
-(void)setIndexPaths:(NSSet *)arg1 ;
-(NSSet *)indexPaths;
@end

