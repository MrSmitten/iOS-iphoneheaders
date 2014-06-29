/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:23:20 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class DOMNode;

@interface DDRange : NSObject {

	DOMNode* _node;
	long long _startOffset;
	long long _endOffset;

}

@property (nonatomic,retain) DOMNode * node;                     //@synthesize node=_node - In the implementation block
@property (assign,nonatomic) long long startOffset;              //@synthesize startOffset=_startOffset - In the implementation block
@property (assign,nonatomic) long long endOffset;                //@synthesize endOffset=_endOffset - In the implementation block
+(id)rangeWithDOMRange:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(long long)endOffset;
-(long long)startOffset;
-(id)initWithDOMRange:(id)arg1 ;
-(id)node;
-(void)setStartOffset:(long long)arg1 ;
-(void)setNode:(id)arg1 ;
-(void)setEndOffset:(long long)arg1 ;
@end
