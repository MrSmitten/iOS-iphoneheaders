/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:28 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicLibrary/ML3PropertyPredicate.h>

@interface ML3BitMaskPredicate : ML3PropertyPredicate {

	long long _mask;
	long long _value;

}

@property (assign,nonatomic) long long mask;               //@synthesize mask=_mask - In the implementation block
@property (assign,nonatomic) long long value;              //@synthesize value=_value - In the implementation block
+(id)predicateWithProperty:(id)arg1 mask:(long long)arg2 value:(long long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)setValue:(long long)arg1 ;
-(long long)value;
-(long long)mask;
-(void)setMask:(long long)arg1 ;
-(void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2 ;
-(id)databaseStatementParameters;
-(id)initWithProperty:(id)arg1 mask:(long long)arg2 value:(long long)arg3 ;
@end
