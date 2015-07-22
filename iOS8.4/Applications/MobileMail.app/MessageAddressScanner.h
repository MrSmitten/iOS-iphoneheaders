/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:49 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MobileMail/MobileMail-Structs.h>
@class NSObject, CRRecentContactsLibrary, _MessageAddressScannerQueue, MFMailMessageLibrary;

@interface MessageAddressScanner : NSObject {

	void* _ab;
	NSObject*<OS_dispatch_queue> _queue;
	CRRecentContactsLibrary* _recentsLibrary;
	DDScannerRef _scanner;
	_MessageAddressScannerQueue* _pendingRemovalQueue;
	unsigned _scheduledPendingRemovalQueueFlush : 1;
	MFMailMessageLibrary* _library;

}

@property (nonatomic,retain) MFMailMessageLibrary * library;              //@synthesize library=_library - In the implementation block
+(id)coreRecentsMetadataForMessage:(id)arg1 ;
+(id)weightForMessage:(id)arg1 addressBook:(void*)arg2 ;
+(id)sharedInstance;
-(void)_messagesWillBeCompacted:(id)arg1 ;
-(void)scanSummary:(id)arg1 forMessage:(id)arg2 ;
-(void)_messagesWereCompacted:(id)arg1 ;
-(id)recentsLibrary;
-(void)_messagesFlagsChanged:(id)arg1 ;
-(void)_scheduleRemovalOfDetectedAddressesInMessages:(id)arg1 ;
-(void)_addAddressDetectorResult:(DDResultRef)arg1 forMessage:(id)arg2 ;
-(void)handleAddressBookChange;
-(DDScannerRef)scanner;
-(void)dealloc;
-(id)init;
-(MFMailMessageLibrary *)library;
-(void)setLibrary:(MFMailMessageLibrary *)arg1 ;
-(void*)addressBook;
@end
