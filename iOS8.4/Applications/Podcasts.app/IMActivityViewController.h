/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:07 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Podcasts/IMViewController.h>
#import <Podcasts/IMActivityViewController.h>
@class NSArray;


@protocol IMActivityViewController <NSObject>
@property (nonatomic,copy) id completionHandler; 
@property (nonatomic,copy) NSArray * excludedActivityTypes; 
@required
-(id)completionHandler;
-(id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2;
-(void)setExcludedActivityTypes:(id)arg1;
-(void)setCompletionHandler:(/*^block*/id)arg1;
-(NSArray *)excludedActivityTypes;

@end

#import <Podcasts/AEAnnotationPopoverViewControllerDelegate.h>

@class NSArray, IMCalloutBarMenuViewController, IMMenuViewController, NSString;

@interface IMActivityViewController : IMViewController <IMActivityViewController, AEAnnotationPopoverViewControllerDelegate> {

	IMCalloutBarMenuViewController* _calloutBarMenuController;
	IMMenuViewController* _menuController;
	NSArray* _activityItems;
	NSArray* _applicationActivities;
	/*^block*/id _completionHandler;
	NSArray* _excludedActivityTypes;
	int _presentationStyle;

}

@property (nonatomic,retain) IMCalloutBarMenuViewController * calloutBarMenuController;              //@synthesize calloutBarMenuController=_calloutBarMenuController - In the implementation block
@property (nonatomic,retain) IMMenuViewController * menuController;                                  //@synthesize menuController=_menuController - In the implementation block
@property (nonatomic,retain) NSArray * activityItems;                                                //@synthesize activityItems=_activityItems - In the implementation block
@property (nonatomic,retain) NSArray * applicationActivities;                                        //@synthesize applicationActivities=_applicationActivities - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                     //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSArray * excludedActivityTypes;                                          //@synthesize excludedActivityTypes=_excludedActivityTypes - In the implementation block
@property (assign,nonatomic) int presentationStyle;                                                  //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)systemActivities;
-(void)presentFromRect:(CGRect)arg1 inView:(id)arg2 ;
-(id)supportedActivities;
-(void)performActivity:(id)arg1 ;
-(IMCalloutBarMenuViewController *)calloutBarMenuController;
-(id)populatedActivityItemsForActivityType:(id)arg1 ;
-(void)didHideAnnotationEditor:(id)arg1 ;
-(void)setCalloutBarMenuController:(IMCalloutBarMenuViewController *)arg1 ;
-(void)setMenuController:(IMMenuViewController *)arg1 ;
-(IMMenuViewController *)menuController;
-(void)setPresentationStyle:(int)arg1 ;
-(void)dealloc;
-(int)presentationStyle;
-(id)completionHandler;
-(void)viewWillAppear:(char)arg1 ;
-(CGSize)contentSizeForViewInPopover;
-(void)viewDidLoad;
-(id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2 ;
-(void)setExcludedActivityTypes:(NSArray *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setActivityItems:(NSArray *)arg1 ;
-(void)setApplicationActivities:(NSArray *)arg1 ;
-(NSArray *)excludedActivityTypes;
-(NSArray *)activityItems;
-(NSArray *)applicationActivities;
-(id)placeholders;
-(void)setTheme:(id)arg1 ;
@end

