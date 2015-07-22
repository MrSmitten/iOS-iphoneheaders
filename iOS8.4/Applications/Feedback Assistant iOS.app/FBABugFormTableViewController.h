/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:09:28 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Feedback Assistant iOS.app/Feedback Assistant iOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Feedback Assistant iOS/Feedback Assistant iOS-Structs.h>
#import <UIKit/UITableViewController.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIDocumentInteractionControllerDelegate.h>
#import <Feedback Assistant iOS/FBAAttachmentCollectorDelegate.h>
#import <Feedback Assistant iOS/FBABugFormChildViewControllerDelegate.h>

@class FBABugForm, FBAFormResponse, FBAAttachmentCollector, UIBarButtonItem, NSMutableDictionary, NSMutableSet, UIView, UIDocumentInteractionController, NSString;

@interface FBABugFormTableViewController : UITableViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIDocumentInteractionControllerDelegate, FBAAttachmentCollectorDelegate, FBABugFormChildViewControllerDelegate> {

	char _isDirty;
	char _attemptedSubmission;
	FBABugForm* _seedBugForm;
	FBAFormResponse* _seedFormResponse;
	FBAFormResponse* _formResponse;
	FBABugForm* _bugForm;
	FBAAttachmentCollector* _attachmentCollector;
	UIBarButtonItem* _submitButton;
	NSMutableDictionary* _cachedVisibleQuestions;
	NSMutableSet* _questionIDsInErrorState;
	UIView* _loadingView;
	unsigned long _whooshSoundID;
	UIDocumentInteractionController* _docController;

}

@property (nonatomic,retain) FBABugForm * seedBugForm;                                     //@synthesize seedBugForm=_seedBugForm - In the implementation block
@property (nonatomic,retain) FBAFormResponse * seedFormResponse;                           //@synthesize seedFormResponse=_seedFormResponse - In the implementation block
@property (nonatomic,retain) FBAFormResponse * formResponse;                               //@synthesize formResponse=_formResponse - In the implementation block
@property (nonatomic,retain) FBABugForm * bugForm;                                         //@synthesize bugForm=_bugForm - In the implementation block
@property (nonatomic,retain) FBAAttachmentCollector * attachmentCollector;                 //@synthesize attachmentCollector=_attachmentCollector - In the implementation block
@property (assign,nonatomic,__weak) UIBarButtonItem * submitButton;                        //@synthesize submitButton=_submitButton - In the implementation block
@property (assign,nonatomic) char isDirty;                                                 //@synthesize isDirty=_isDirty - In the implementation block
@property (assign,nonatomic) char attemptedSubmission;                                     //@synthesize attemptedSubmission=_attemptedSubmission - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * cachedVisibleQuestions;                 //@synthesize cachedVisibleQuestions=_cachedVisibleQuestions - In the implementation block
@property (nonatomic,retain) NSMutableSet * questionIDsInErrorState;                       //@synthesize questionIDsInErrorState=_questionIDsInErrorState - In the implementation block
@property (assign,nonatomic,__weak) UIView * loadingView;                                  //@synthesize loadingView=_loadingView - In the implementation block
@property (assign,nonatomic) unsigned long whooshSoundID;                                  //@synthesize whooshSoundID=_whooshSoundID - In the implementation block
@property (nonatomic,retain) UIDocumentInteractionController * docController;              //@synthesize docController=_docController - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBugForm:(FBABugForm *)arg1 ;
-(FBABugForm *)bugForm;
-(FBAFormResponse *)formResponse;
-(void)setSeedBugForm:(FBABugForm *)arg1 ;
-(void)setSeedFormResponse:(FBAFormResponse *)arg1 ;
-(void)registerForKeyboardNotifications;
-(void)answerDidChangeForQuestion:(id)arg1 ;
-(void)reloadParent;
-(void)setAttemptedSubmission:(char)arg1 ;
-(UIBarButtonItem *)submitButton;
-(void)setQuestionIDsInErrorState:(NSMutableSet *)arg1 ;
-(void)setCachedVisibleQuestions:(NSMutableDictionary *)arg1 ;
-(void)fillInAnswers;
-(FBABugForm *)seedBugForm;
-(void)newResponseForBugForm:(id)arg1 ;
-(FBAFormResponse *)seedFormResponse;
-(void)startWithFormResponse:(id)arg1 ;
-(id)questionGroupForSection:(int)arg1 ;
-(NSMutableDictionary *)cachedVisibleQuestions;
-(FBAAttachmentCollector *)attachmentCollector;
-(void)gatherAttachmentsForIndexPath:(id)arg1 ;
-(id)createQuestionCellWith:(id)arg1 withIndexPath:(id)arg2 ;
-(void)setDocController:(UIDocumentInteractionController *)arg1 ;
-(UIDocumentInteractionController *)docController;
-(NSMutableSet *)questionIDsInErrorState;
-(char)answerIsValidForQuestion:(id)arg1 ;
-(void)updateQuestionVisibility;
-(void)updateSubmitButtonState;
-(void)setFormResponse:(FBAFormResponse *)arg1 ;
-(id)filePredicatesForProject;
-(void)setAttachmentCollector:(FBAAttachmentCollector *)arg1 ;
-(void)stopSpinner;
-(void)reloadQuestions;
-(void)initializeFormResponse:(id)arg1 ;
-(void)refreshProjectDetailsForProject:(id)arg1 ;
-(void)validateAllQuestions;
-(char)hasFileArea;
-(void)checkLegalAndSubmit;
-(id)textForAnswer:(id)arg1 forQuestion:(id)arg2 ;
-(void)attachedFilesDidChange;
-(void)updateLocalModelWithValue:(id)arg1 forQuestion:(id)arg2 ;
-(void)beginPresubmissionCheck:(id)arg1 ;
-(void)didAcceptPrivacyNotice:(id)arg1 ;
-(void)didDeclinePrivacyNotice:(id)arg1 ;
-(id)choiceForAnswer:(id)arg1 forQuestion:(id)arg2 ;
-(id)attachLargeTestFileAndGetFileName;
-(void)setSubmitButton:(UIBarButtonItem *)arg1 ;
-(char)attemptedSubmission;
-(unsigned long)whooshSoundID;
-(void)setWhooshSoundID:(unsigned long)arg1 ;
-(void)showSpinner;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(int)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(int)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)awakeFromNib;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)prepareForSegue:(id)arg1 sender:(id)arg2 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)documentInteractionControllerDidEndPreview:(id)arg1 ;
-(id)documentInteractionControllerViewControllerForPreview:(id)arg1 ;
-(CGRect)documentInteractionControllerRectForPreview:(id)arg1 ;
-(id)documentInteractionControllerViewForPreview:(id)arg1 ;
-(void)dismiss:(id)arg1 ;
-(void)setIsDirty:(char)arg1 ;
-(void)keyboardWasShown:(id)arg1 ;
-(void)keyboardWillBeHidden:(id)arg1 ;
-(void)setLoadingView:(UIView *)arg1 ;
-(char)isDirty;
-(void)submit;
-(UIView *)loadingView;
@end
