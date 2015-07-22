/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:25:23 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SoftwareUpdateServices/SoftwareUpdateServices-Structs.h>
#import <SoftwareUpdateServices/NSSecureCoding.h>
#import <SoftwareUpdateServices/NSCopying.h>

@class NSString;

@interface SUOperationProgress : NSObject <NSSecureCoding, NSCopying> {

	NSString* _phase;
	float _percentComplete;
	float _normalizedPercentComplete;
	double _timeRemaining;

}

@property (nonatomic,retain) NSString * phase;                             //@synthesize phase=_phase - In the implementation block
@property (assign,nonatomic) float percentComplete;                        //@synthesize percentComplete=_percentComplete - In the implementation block
@property (assign,nonatomic) float normalizedPercentComplete;              //@synthesize normalizedPercentComplete=_normalizedPercentComplete - In the implementation block
@property (assign,nonatomic) double timeRemaining;                         //@synthesize timeRemaining=_timeRemaining - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(float)percentComplete;
-(NSString *)phase;
-(void)setPhase:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPercentComplete:(float)arg1 ;
-(BOOL)isDone;
-(double)timeRemaining;
-(void)setTimeRemaining:(double)arg1 ;
-(void)setNormalizedPercentComplete:(float)arg1 ;
-(float)normalizedPercentComplete;
@end
