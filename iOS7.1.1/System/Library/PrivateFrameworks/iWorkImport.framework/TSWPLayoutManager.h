/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:48 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPStorageObserver.h>

@protocol TSWPLayoutOwner;
@class TSWPStorage, TSWPCTTypesetterCache;

@interface TSWPLayoutManager : NSObject <TSWPStorageObserver> {

	<TSWPLayoutOwner>* _owner;
	TSWPStorage* _storage;
	bool _isObservingStorage;
	bool _useLigatures;
	long long _delta;
	NSRange _dirtyRange;
	TSWPCTTypesetterCache* _typesetterCache;
	TSWPTopicNumberHints* _cachedTopicNumbers;

}

@property (nonatomic,readonly) <TSWPLayoutOwner> * owner;                            //@synthesize owner=_owner - In the implementation block
@property (nonatomic,readonly) TSWPStorage * storage;                                //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) NSRange dirtyRange;                                   //@synthesize dirtyRange=_dirtyRange - In the implementation block
@property (nonatomic,readonly) TSWPCTTypesetterCache * typesetterCache; 
+(void)fixColumnBoundsForTarget:(id)arg1 storage:(id)arg2 charIndex:(unsigned long long)arg3 firstColumnIndex:(unsigned long long)arg4 precedingHeight:(double)arg5 height:(double)arg6 alreadyHasMargins:(bool)arg7 styleProvider:(id)arg8 vertical:(bool)arg9 ;
-(id)storage;
-(void)storage:(id)arg1 didChangeRange:(NSRange)arg2 delta:(long long)arg3 broadcastKind:(int)arg4 ;
-(void)clearOwner;
-(int)p_layoutConfigFlagsForTarget:(id)arg1 ;
-(void)clearTypesetterCache;
-(id)initWithStorage:(id)arg1 owner:(id)arg2 ;
-(bool)needsLayoutInColumn:(id)arg1 ;
-(void*)layoutIntoTarget:(id)arg1 withLayoutState:(void*)arg2 outSync:(bool*)arg3 ;
-(void*)layoutStateForLayoutAfterHint:(const SCD_Struct_TS581*)arg1 childHint:(id)arg2 topicNumbers:(const TSWPTopicNumberHints*)arg3 textIsVertical:(bool)arg4 ;
-(void)deflateTarget:(id)arg1 intoHints:(vector<TSWPTargetHint, std::__1::allocator<TSWPTargetHint> >*)arg2 childHints:(id)arg3 anchoredAttachmentPositions:(id*)arg4 topicNumbers:(TSWPTopicNumberHints*)arg5 layoutState:(void*)arg6 ;
-(void)inflateTarget:(id)arg1 fromHints:(const vector<TSWPTargetHint, std::__1::allocator<TSWPTargetHint> >*)arg2 childHint:(id)arg3 anchoredAttachmentPositions:(id)arg4 topicNumbers:(const TSWPTopicNumberHints*)arg5 ;
-(void)destroyLayoutState:(void*)arg1 ;
-(id)typesetterCache;
-(NSRange)dirtyRange;
-(id)styleProvider;
-(void)dealloc;
-(id).cxx_construct;
-(void).cxx_destruct;
-(id)owner;
@end

