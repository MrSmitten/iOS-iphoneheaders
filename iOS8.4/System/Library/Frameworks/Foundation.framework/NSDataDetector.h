/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:17:56 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSRegularExpression.h>

@interface NSDataDetector : NSRegularExpression {

	unsigned long long _types;

}

@property (readonly) unsigned long long checkingTypes; 
+(id)dataDetectorWithTypes:(unsigned long long)arg1 error:(id*)arg2 ;
+(void)initialize;
-(unsigned long long)numberOfCaptureGroups;
-(id)initWithTypes:(unsigned long long)arg1 error:(id*)arg2 ;
-(unsigned long long)checkingTypes;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)options;
-(id)initWithPattern:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)enumerateMatchesInString:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)finalize;
-(id)pattern;
@end
