/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:37 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSXMLParser.h>
#import <CoreDAV/CoreDAVResponseBodyParser.h>

@class CoreDAVXMLElementGenerator, NSSet, NSURL, CoreDAVItem, CoreDAVErrorItem, NSError;

@interface CoreDAVXMLParser : NSXMLParser <CoreDAVResponseBodyParser> {

	CoreDAVXMLElementGenerator* _rootElementGenerator;
	CoreDAVXMLElementGenerator* _rootErrorGenerator;
	NSSet* _parseHints;
	NSURL* _baseURL;

}

@property (retain) NSSet * parseHints;                                             //@synthesize parseHints=_parseHints - In the implementation block
@property (retain) NSURL * baseURL;                                                //@synthesize baseURL=_baseURL - In the implementation block
@property (readonly) CoreDAVItem * rootElement; 
@property (readonly) CoreDAVErrorItem * rootError; 
@property (@dynamic,readonly) NSError * parserError; 
@property (retain) CoreDAVXMLElementGenerator * rootElementGenerator;              //@synthesize rootElementGenerator=_rootElementGenerator - In the implementation block
@property (retain) CoreDAVXMLElementGenerator * rootErrorGenerator;                //@synthesize rootErrorGenerator=_rootErrorGenerator - In the implementation block
+(BOOL)canHandleContentType:(id)arg1 ;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)baseURL;
-(id)initWithRootElementNameSpace:(id)arg1 name:(id)arg2 parseClass:(Class)arg3 baseURL:(id)arg4 ;
-(void)setParseHints:(id)arg1 ;
-(BOOL)processData:(id)arg1 forTask:(id)arg2 ;
-(id)rootError;
-(id)parseHints;
-(id)rootErrorGenerator;
-(void)setRootErrorGenerator:(id)arg1 ;
-(void)setRootElementGenerator:(id)arg1 ;
-(id)rootElementGenerator;
-(void)setBaseURL:(id)arg1 ;
-(id)rootElement;
@end

