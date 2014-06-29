/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:39 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableArray, TSDBezierPath, TSDBezierNode;

@interface TSDBezierSubpath : NSObject {

	NSMutableArray* mNodes;
	bool mClosed;

}

@property (nonatomic,retain) NSMutableArray * nodes; 
@property (assign,getter=isClosed,nonatomic) bool closed; 
@property (nonatomic,readonly) bool isRectangular; 
@property (nonatomic,readonly) TSDBezierPath * bezierPath; 
@property (nonatomic,readonly) TSDBezierNode * firstNode; 
@property (nonatomic,readonly) TSDBezierNode * lastNode; 
@property (nonatomic,readonly) bool allNodesSelected; 
@property (nonatomic,readonly) bool hasSelectedNode; 
@property (nonatomic,readonly) bool canDeleteSelectedNodes; 
@property (nonatomic,readonly) CGRect nodeBounds; 
@property (nonatomic,readonly) bool closeIfEndpointsAreEqual; 
-(void)smoothAllNodes;
-(void)updateSmoothNodes;
-(void)morphWithMorphInfo:(id)arg1 ;
-(CGPoint)calculateNewControlFromOriginalDelta:(CGPoint)arg1 currentDelta:(CGPoint)arg2 originalSmoothDelta:(CGPoint)arg3 node:(CGPoint)arg4 ;
-(long long)updateSmoothNodes:(id)arg1 from:(long long)arg2 to:(long long)arg3 closed:(bool)arg4 addTemporaryNodes:(bool)arg5 ;
-(void)updateSmoothNodes:(id)arg1 addTemporaryNodes:(bool)arg2 ;
-(void)removeTemporaryNodes;
-(void)addTemporarySmoothNodes;
-(double)distanceToPoint:(CGPoint)arg1 elementIndex:(unsigned long long*)arg2 tValue:(double*)arg3 threshold:(double)arg4 ;
-(void)updateReflectedState;
-(void)appendToBezierPath:(id)arg1 selectedNodesOnly:(bool)arg2 fromIndex:(unsigned long long)arg3 ;
-(id)nodePriorToNode:(id)arg1 ;
-(id)nodeAfterNode:(id)arg1 ;
-(void)removeLastNode;
-(id)splitEdgeAtIndex:(unsigned long long)arg1 ;
-(void)appendToBezierPath:(id)arg1 ;
-(void)reverseDirection;
-(void)offsetSelectedNodesByDelta:(CGPoint)arg1 ;
-(void)offsetSelectedEdgesByDelta:(CGPoint)arg1 ;
-(bool)allNodesSelected;
-(bool)hasSelectedNode;
-(bool)canDeleteSelectedNodes;
-(void)deleteSelectedNodes;
-(void)selectAllNodes;
-(void)deselectAllNodes;
-(id)bezierNodeUnderPoint:(CGPoint)arg1 withTransform:(CGAffineTransform)arg2 andTolerance:(double)arg3 returningType:(long long*)arg4 ;
-(id)insertNodeAtPoint:(CGPoint)arg1 tolerance:(double)arg2 ;
-(CGRect)nodeBounds;
-(void)sharpenAllNodes;
-(void)smoothNode:(id)arg1 ;
-(bool)closeIfEndpointsAreEqual;
-(void)addNodesToArray:(id)arg1 ;
-(void)convertToHobby;
-(void)setNodes:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)bezierPath;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)firstNode;
-(void)setClosed:(bool)arg1 ;
-(bool)isClosed;
-(id)lastNode;
-(void)transformUsingAffineTransform:(CGAffineTransform)arg1 ;
-(bool)isRectangular;
-(bool)isCircular;
-(id)nodes;
-(void)addNode:(id)arg1 ;
-(void)removeNode:(id)arg1 ;
@end
