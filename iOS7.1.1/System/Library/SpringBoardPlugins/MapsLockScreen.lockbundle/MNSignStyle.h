/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:27:08 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MapsLockScreen/MapsLockScreen-Structs.h>
@class NSString, UIColor, UIImage;

@interface MNSignStyle : NSObject

@property (nonatomic,readonly) NSString * distanceFontName; 
@property (nonatomic,readonly) NSString * instructionsFontName; 
@property (nonatomic,readonly) bool capitalizeInstructions; 
@property (nonatomic,readonly) NSString * recalculatingFontName; 
@property (nonatomic,readonly) UIColor * backgroundColor; 
@property (nonatomic,readonly) UIColor * foregroundColor; 
@property (nonatomic,readonly) UIColor * bannerTextColor; 
@property (nonatomic,readonly) UIColor * accentColor; 
@property (nonatomic,readonly) UIColor * dividerColor; 
@property (nonatomic,readonly) int desiredFraming; 
@property (nonatomic,readonly) UIImage * squareSignImage; 
@property (nonatomic,readonly) double secondarySignWidthScale; 
@property (nonatomic,readonly) double secondarySignYOverlapAmount; 
@property (nonatomic,readonly) double secondarySignLeftContentInset; 
@property (nonatomic,readonly) double secondarySignRightContentInset; 
@property (nonatomic,readonly) double secondarySignManeuverAreaWidth; 
@property (nonatomic,readonly) double secondarySignManeuverAreaMargin; 
@property (nonatomic,readonly) double secondarySignShieldAreaMargin; 
@property (nonatomic,readonly) double secondarySignTopBorderHeight; 
@property (nonatomic,readonly) double secondarySignBottomBorderHeight; 
+(SCD_Struct_MN5)_defaultArrowMetricsForStyle:(int)arg1 ;
+(SCD_Struct_MN5)arrowMetricsForStyle:(int)arg1 ;
+(id)sharedSignStyle;
+(SCD_Struct_MN5)_arrowMetricsByApplyingScale:(double)arg1 toMetrics:(SCD_Struct_MN5)arg2 forView:(id)arg3 ;
+(SCD_Struct_MN5)arrowMetricsForStyle:(int)arg1 scaledToMatchReferenceSize:(CGSize)arg2 forView:(id)arg3 ;
-(double)outerBorderRadiusForSize:(CGSize)arg1 ;
-(UIEdgeInsets)borderInsetsForSize:(CGSize)arg1 ;
-(double)reroutingLabelHeightForVariant:(int)arg1 ;
-(double)distanceLabelHeightForVariant:(int)arg1 ;
-(double)maneuverAreaWidthForVariant:(int)arg1 ;
-(double)secondarySignManeuverAreaWidth;
-(double)secondarySignManeuverAreaMargin;
-(double)sideMarginForVariant:(int)arg1 ;
-(double)absentSideAreaWidth;
-(id)outerBackgroundImageForSize:(CGSize)arg1 ;
-(double)secondarySignShieldAreaMargin;
-(double)minimumWidthForVariant:(int)arg1 ;
-(double)secondarySignTopBorderHeight;
-(double)distanceLabelYOffsetForVariant:(int)arg1 ;
-(id)dimmedForegroundColor;
-(double)shieldAreaWidthForVariant:(int)arg1 ;
-(double)labelBottomMarginForVariant:(int)arg1 ;
-(double)shieldAreaMargin;
-(bool)capitalizeInstructions;
-(double)secondarySignHeightForVariant:(int)arg1 ;
-(id)recalculatingFontName;
-(double)secondarySignWidthScale;
-(double)innerBorderRadiusForSize:(CGSize)arg1 ;
-(id)innerBackgroundImageForSize:(CGSize)arg1 ;
-(id)borderImageForSize:(CGSize)arg1 ;
-(double)secondarySignRightContentInset;
-(id)distanceFontName;
-(double)instructionsFontSizeForVariant:(int)arg1 ;
-(double)secondarySignYOverlapAmount;
-(double)secondarySignLeftContentInset;
-(double)secondarySignBottomBorderHeight;
-(double)distanceFontSizeForVariant:(int)arg1 ;
-(id)instructionsFontName;
-(id)squareSignImage;
-(id)bannerTextColor;
-(bool)wantBlur;
-(int)desiredFraming;
-(double)internalMargin;
-(bool)wantCentering;
-(id)accentColor;
-(double)maximumWidthForVariant:(int)arg1 forScreenWidth:(double)arg2 ;
-(double)distanceNumericFontSizeForVariant:(int)arg1 ;
-(double)reroutingOnlyLabelYOffsetForVariant:(int)arg1 ;
-(double)instructionsLabelYOffsetForVariant:(int)arg1 ;
-(double)recalculatingFontSizeForVariant:(int)arg1 ;
-(double)topMarginForVariant:(int)arg1 isCombinedSign:(bool)arg2 ;
-(double)secondarySignManeuverAreaWidthForVariant:(int)arg1 ;
-(id)backgroundColor;
-(id)foregroundColor;
-(id)dividerColor;
-(bool)isDimmed;
@end

