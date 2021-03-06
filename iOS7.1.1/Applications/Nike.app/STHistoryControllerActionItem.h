/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:13 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/Nike.app/Nike
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface STHistoryControllerActionItem : NSObject {

	NSString* _title;
	id _target;
	SEL _action;

}

@property (nonatomic,retain) NSString * title;              //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) id target;                     //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                    //@synthesize action=_action - In the implementation block
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(void)setTarget:(id)arg1 ;
-(SEL)action;
-(id)target;
-(id)title;
-(void)setAction:(SEL)arg1 ;
-(id)initWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
@end

