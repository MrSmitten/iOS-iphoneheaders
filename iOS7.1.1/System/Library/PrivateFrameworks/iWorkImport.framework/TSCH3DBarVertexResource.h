/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:29 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DAbstractBarVertexResource.h>

@class TSCH3DBarExtrusionGeometry;

@interface TSCH3DBarVertexResource : TSCH3DAbstractBarVertexResource {

	TSCH3DBarExtrusionGeometry* mGeometry;

}
-(long long)verticesOffset;
-(long long)capOffset;
-(long long)numCapVertices;
-(id)initWithGeometry:(id)arg1 ;
-(long long)numVertices;
-(void)dealloc;
-(id)geometry;
-(id)get;
@end

