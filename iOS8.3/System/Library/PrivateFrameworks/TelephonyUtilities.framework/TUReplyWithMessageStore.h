/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 3:47:55 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface TUReplyWithMessageStore : NSObject
-(void)dealloc;
-(int)count;
-(id)init;
-(id)_defaultRepliesForSending:(char)arg1 ;
-(id)customReplies;
-(id)_cannedRepliesForSending:(char)arg1 ;
-(id)cannedReplies;
-(id)defaultReplies;
-(id)cannedReplyActionSheetOptions;
-(id)cannedRepliesForSending;
-(void)setCustomReply:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)_handleMessagesStoreChanged;
@end
