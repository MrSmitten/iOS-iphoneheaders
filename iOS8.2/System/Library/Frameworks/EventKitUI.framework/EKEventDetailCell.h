/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:18:27 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class EKEvent;

@interface EKEventDetailCell : UITableViewCell {

	EKEvent* _event;
	char _editable;
	float _lastLaidOutWidth;
	int _lastLaidOutPosition;

}

@property (nonatomic,readonly) char isEditable; 
+(float)detailsTopVerticalInset;
+(float)detailsBottomVerticalInset;
+(float)detailsPostLabelSpace;
+(float)detailsCellDefaultHeight;
+(id)_bodyFontAtDefaultSize;
+(float)_scaledDistanceCalculatedFromTopFromBaseline:(float)arg1 ;
+(float)_scaledDistanceCalculatedFromBottomToBaseline:(float)arg1 ;
-(void)layoutForWidth:(float)arg1 position:(int)arg2 ;
-(id)initWithEvent:(id)arg1 editable:(char)arg2 ;
-(id)initWithEvent:(id)arg1 editable:(char)arg2 style:(int)arg3 ;
-(char)needsLayoutForWidth:(float)arg1 position:(int)arg2 ;
-(char)isEditable;
-(void)sizeToFit;
-(char)update;
-(void)setEvent:(id)arg1 ;
@end

