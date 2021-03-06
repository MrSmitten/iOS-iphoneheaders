/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:45 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CloudKitDaemon/NSCopying.h>

@class NSString, CKDPDate, CKDPIdentifier, NSData, CKDPInvitationRecipient, CKDPShareIdentifier;

@interface CKDPInvitation : PBCodable <NSCopying> {

	NSString* _applicationContainer;
	int _applicationContainerEnvironment;
	CKDPDate* _createdAt;
	CKDPIdentifier* _invitationId;
	NSString* _invitationImageUrl;
	NSString* _invitationMessage;
	NSData* _payload;
	CKDPInvitationRecipient* _recipient;
	CKDPIdentifier* _senderId;
	CKDPShareIdentifier* _shareId;
	NSData* _signature;
	int _state;
	SCD_Struct_CK5 _has;

}

@property (nonatomic,readonly) char hasInvitationId; 
@property (nonatomic,retain) CKDPIdentifier * invitationId;                        //@synthesize invitationId=_invitationId - In the implementation block
@property (nonatomic,readonly) char hasSenderId; 
@property (nonatomic,retain) CKDPIdentifier * senderId;                            //@synthesize senderId=_senderId - In the implementation block
@property (nonatomic,readonly) char hasCreatedAt; 
@property (nonatomic,retain) CKDPDate * createdAt;                                 //@synthesize createdAt=_createdAt - In the implementation block
@property (assign,nonatomic) char hasState; 
@property (assign,nonatomic) int state;                                            //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) char hasInvitationMessage; 
@property (nonatomic,retain) NSString * invitationMessage;                         //@synthesize invitationMessage=_invitationMessage - In the implementation block
@property (nonatomic,readonly) char hasInvitationImageUrl; 
@property (nonatomic,retain) NSString * invitationImageUrl;                        //@synthesize invitationImageUrl=_invitationImageUrl - In the implementation block
@property (nonatomic,readonly) char hasRecipient; 
@property (nonatomic,retain) CKDPInvitationRecipient * recipient;                  //@synthesize recipient=_recipient - In the implementation block
@property (nonatomic,readonly) char hasShareId; 
@property (nonatomic,retain) CKDPShareIdentifier * shareId;                        //@synthesize shareId=_shareId - In the implementation block
@property (nonatomic,readonly) char hasApplicationContainer; 
@property (nonatomic,retain) NSString * applicationContainer;                      //@synthesize applicationContainer=_applicationContainer - In the implementation block
@property (assign,nonatomic) char hasApplicationContainerEnvironment; 
@property (assign,nonatomic) int applicationContainerEnvironment;                  //@synthesize applicationContainerEnvironment=_applicationContainerEnvironment - In the implementation block
@property (nonatomic,readonly) char hasPayload; 
@property (nonatomic,retain) NSData * payload;                                     //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) char hasSignature; 
@property (nonatomic,retain) NSData * signature;                                   //@synthesize signature=_signature - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)state;
-(NSData *)payload;
-(void)setState:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setPayload:(NSData *)arg1 ;
-(void)setSignature:(NSData *)arg1 ;
-(char)hasSignature;
-(NSData *)signature;
-(void)setShareId:(CKDPShareIdentifier *)arg1 ;
-(void)setInvitationMessage:(NSString *)arg1 ;
-(void)setInvitationImageUrl:(NSString *)arg1 ;
-(char)hasShareId;
-(char)hasInvitationMessage;
-(char)hasInvitationImageUrl;
-(CKDPShareIdentifier *)shareId;
-(NSString *)invitationMessage;
-(NSString *)invitationImageUrl;
-(void)setApplicationContainer:(NSString *)arg1 ;
-(char)hasApplicationContainer;
-(int)applicationContainerEnvironment;
-(void)setApplicationContainerEnvironment:(int)arg1 ;
-(void)setHasApplicationContainerEnvironment:(char)arg1 ;
-(char)hasApplicationContainerEnvironment;
-(NSString *)applicationContainer;
-(void)setInvitationId:(CKDPIdentifier *)arg1 ;
-(char)hasInvitationId;
-(CKDPIdentifier *)invitationId;
-(void)setHasState:(char)arg1 ;
-(char)hasState;
-(void)setSenderId:(CKDPIdentifier *)arg1 ;
-(void)setCreatedAt:(CKDPDate *)arg1 ;
-(void)setRecipient:(CKDPInvitationRecipient *)arg1 ;
-(char)hasSenderId;
-(char)hasCreatedAt;
-(char)hasRecipient;
-(char)hasPayload;
-(CKDPIdentifier *)senderId;
-(CKDPInvitationRecipient *)recipient;
-(CKDPDate *)createdAt;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
@end

