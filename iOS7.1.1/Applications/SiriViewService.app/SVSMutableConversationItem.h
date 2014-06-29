/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:15 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriViewService/SiriViewService-Structs.h>
#import <SiriViewService/AFUIConversationItem.h>
#import <CoreFoundation/NSCopying.h>

@class NSUUID, AceObject, AFUIDialogPhase, NSString, SVSDataStore;

@interface SVSMutableConversationItem : NSObject <AFUIConversationItem, NSCopying> {

	BOOL _virgin;
	NSUUID* _identifier;
	int _type;
	AceObject* _aceObject;
	AFUIDialogPhase* _dialogPhase;
	NSString* _aceCommandIdentifier;
	int _presentationState;
	SVSDataStore* _associatedDataStore;

}

@property (nonatomic,readonly) NSUUID * identifier;                             //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) int type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) AceObject * aceObject;                             //@synthesize aceObject=_aceObject - In the implementation block
@property (nonatomic,retain) AFUIDialogPhase * dialogPhase;                     //@synthesize dialogPhase=_dialogPhase - In the implementation block
@property (nonatomic,copy) NSString * aceCommandIdentifier;                     //@synthesize aceCommandIdentifier=_aceCommandIdentifier - In the implementation block
@property (assign,nonatomic) int presentationState;                             //@synthesize presentationState=_presentationState - In the implementation block
@property (assign,getter=isVirgin,nonatomic) BOOL virgin;                       //@synthesize virgin=_virgin - In the implementation block
@property (nonatomic,readonly) SVSDataStore * associatedDataStore;              //@synthesize associatedDataStore=_associatedDataStore - In the implementation block
-(id)aceCommandIdentifier;
-(void)setAceCommandIdentifier:(id)arg1 ;
-(id)initWithType:(int)arg1 aceObject:(id)arg2 dialogPhase:(id)arg3 presentationState:(int)arg4 aceCommandIdentifier:(id)arg5 virgin:(BOOL)arg6 associatedDataStore:(id)arg7 ;
-(id)initWithIdentifier:(id)arg1 type:(int)arg2 aceObject:(id)arg3 dialogPhase:(id)arg4 presentationState:(int)arg5 aceCommandIdentifier:(id)arg6 virgin:(BOOL)arg7 associatedDataStore:(id)arg8 ;
-(id)associatedDataStore;
-(id)_propertyListStringForType;
-(id)_propertyListStringForPresentationState;
-(int)_typeForPropertyListString:(id)arg1 ;
-(int)_presentationStateForPropertyListString:(id)arg1 ;
-(void)setVirgin:(BOOL)arg1 ;
-(id)description;
-(int)type;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)identifier;
-(void).cxx_destruct;
-(void)setPresentationState:(int)arg1 ;
-(int)presentationState;
-(id)dialogPhase;
-(void)setDialogPhase:(id)arg1 ;
-(id)aceObject;
-(void)setAceObject:(id)arg1 ;
-(BOOL)isVirgin;
-(id)propertyListRepresentation;
-(id)initWithPropertyListRepresentation:(id)arg1 ;
@end
