/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:54 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/PopoverSizingTableViewController.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <MobileSafari/HistoryTableViewDataSourceDelegate.h>
#import <MobileSafari/BookmarksPanelStateRestoring.h>
#import <MobileSafari/BookmarksToolbarItemProvider.h>

@protocol HistoryTableViewControllerDelegate;
@class UIBarButtonItem, NSTimer, UIActionSheet, SafariClearBrowsingDataController, HistoryTableViewDataSource, NSString;

@interface HistoryTableViewController : PopoverSizingTableViewController <UIActionSheetDelegate, HistoryTableViewDataSourceDelegate, BookmarksPanelStateRestoring, BookmarksToolbarItemProvider> {

	UIBarButtonItem* _clearHistoryButton;
	UIBarButtonItem* _doneBarButtonItem;
	NSTimer* _saveChangesToCloudHistoryTimer;
	UIActionSheet* _clearHistoryAlertSheet;
	SafariClearBrowsingDataController* _clearDataController;
	HistoryTableViewDataSource* _historyDataSource;
	id<HistoryTableViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<HistoryTableViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * collectionType; 
-(id)currentStateDictionary;
-(char)restoreStateWithDictionary:(id)arg1 ;
-(float)currentScrollPosition;
-(void)restoreScrollPosition:(float)arg1 ;
-(NSString *)collectionType;
-(void)updateClearHistoryButtonEnable;
-(id)bookmarksRightBarButtonItem;
-(id)bookmarksNavigationController;
-(id)_clearHistoryBarButtonItem;
-(void)_endEditing;
-(void)_clearHistory;
-(id)_clearHistoryAlertMessage;
-(void)_saveChangesToCloudHistory;
-(void)_saveChangesToCloudHistorySoon;
-(void)historyTableViewDataSourceDidLoadContent:(id)arg1 ;
-(void)historyTableViewDataSourceWillChangeContent:(id)arg1 ;
-(void)historyTableViewDataSourceDidChangeContent:(id)arg1 ;
-(void)historyTableViewDataSource:(id)arg1 didChangeSectionAtIndex:(int)arg2 forChangeType:(int)arg3 ;
-(void)historyTableViewDataSource:(id)arg1 didChangeRowAtIndexPath:(id)arg2 forChangeType:(int)arg3 ;
-(id)safari_tableViewScrollPositionSaveIdentifier;
-(id)_doneBarButtonItem;
-(void)dealloc;
-(void)setDelegate:(id<HistoryTableViewControllerDelegate>)arg1 ;
-(id)init;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<HistoryTableViewControllerDelegate>)delegate;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)setEditing:(char)arg1 animated:(char)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
@end
