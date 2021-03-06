/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:19:08 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSUserDefaults;

@interface _UIActivityUserDefaults : NSObject {

	NSString* _identifier;
	NSUserDefaults* _userDefaults;

}

@property (nonatomic,copy) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSUserDefaults * userDefaults;              //@synthesize userDefaults=_userDefaults - In the implementation block
-(void)dealloc;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 userDefaults:(id)arg2 ;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(NSUserDefaults *)userDefaults;
-(id)userOrderedActivitesFromActivitiesInArray:(id)arg1 ;
-(char)activityIsHidden:(id)arg1 ;
-(char)canHideActivity:(id)arg1 ;
-(void)updateUserOrderForActivitiesInArray:(id)arg1 ;
-(void)setActivity:(id)arg1 asHidden:(char)arg2 ;
-(id)applicationExtensionForActivity:(id)arg1 ;
-(void)postActivityUserDefaultsNotification;
-(id)identifierForActivity:(id)arg1 ;
-(id)mergeArray:(id)arg1 withObjectsFromArray:(id)arg2 ;
-(id)defaultsValueForKey:(id)arg1 activity:(id)arg2 ;
-(void)setDefaultsValue:(id)arg1 forKey:(id)arg2 activity:(id)arg3 ;
@end

