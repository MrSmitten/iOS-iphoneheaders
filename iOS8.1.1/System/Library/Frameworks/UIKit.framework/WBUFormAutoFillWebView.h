/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:29:22 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class UIView;


@protocol WBUFormAutoFillWebView <NSObject>
@property (nonatomic,readonly) UIView * webui_viewForAutoFillPrompt; 
@property (nonatomic,readonly) BOOL webui_privateBrowsingEnabled; 
@required
-(id)webui_formMetadataAndFrame:(id*)arg1 forLastPasswordGenerationOrSubmitEventInFrame:(id)arg2;
-(UIView *)webui_viewForAutoFillPrompt;
-(BOOL)webui_privateBrowsingEnabled;
-(/*^block*/id)webui_preventNavigationDuringAutoFillPrompt;
-(id)webui_formMetadataForLastPasswordGenerationOrSubmitEventInFrame:(id)arg1;
-(void)webui_setFormMetadata:(id)arg1 forLastPasswordGenerationOrSubmitEventInFrame:(id)arg2;
-(void)webui_removeFormMetadataForLastPasswordGenerationOrSubmitEventInFrame:(id)arg1;

@end
