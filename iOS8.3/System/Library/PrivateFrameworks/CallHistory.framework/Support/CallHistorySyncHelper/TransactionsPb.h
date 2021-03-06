/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 12:52:23 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/Support/CallHistorySyncHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CallHistorySyncHelper/CallHistorySyncHelper-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CallHistorySyncHelper/NSCopying.h>

@class NSMutableArray;

@interface TransactionsPb : PBCodable <NSCopying> {

	NSMutableArray* _calls;

}

@property (nonatomic,retain) NSMutableArray * calls;              //@synthesize calls=_calls - In the implementation block
-(void)addCalls:(id)arg1 ;
-(unsigned)callsCount;
-(void)clearCalls;
-(id)callsAtIndex:(unsigned)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)calls;
-(void)setCalls:(NSMutableArray *)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

