/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 8:59:10 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileSafari/BrowserPanel.h>

@class SheetController;

@interface SheetControllerPanel : NSObject <BrowserPanel> {

	SheetController* _sheetController;

}

@property (nonatomic,readonly) SheetController * sheetController;              //@synthesize sheetController=_sheetController - In the implementation block
-(int)panelType;
-(int)pausesPages;
-(BOOL)ignoresPrivateBrowsingStyle;
-(id)sheetController;
-(id)initWithSheetController:(id)arg1 ;
-(void)dealloc;
@end

