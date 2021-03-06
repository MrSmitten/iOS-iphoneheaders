/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:52 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MCD_OLD_TableViewController.h>

@interface MCDSectionedTableViewController : MCD_OLD_TableViewController {

	unsigned long long* _offsetOfSection;

}

@property (nonatomic,readonly) bool isSectioning; 
@property (nonatomic,readonly) unsigned long long countOfActions; 
-(void)dealloc;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(id)initWithQuery:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3 ;
-(bool)isSectioning;
-(unsigned long long)countOfActions;
-(unsigned long long)rowAtIndexPath:(id)arg1 ;
@end

