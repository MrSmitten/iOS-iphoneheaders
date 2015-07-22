/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:27:02 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSAuthenticationContext, NSString, NSSet;

@interface SetAutomaticDownloadKindsOperation : ISOperation {

	SSAuthenticationContext* _authenticationContext;
	NSString* _clientIdentifierHeader;
	NSSet* _downloadKinds;
	NSSet* _previousDownloadKinds;
	BOOL _runsOnlyIfKindsAreDirty;
	BOOL _shouldSuppressServerDialogs;

}

@property (readonly) NSSet * downloadKinds; 
@property (copy) SSAuthenticationContext * authenticationContext; 
@property (copy) NSString * clientIdentifierHeader; 
@property (copy) NSSet * previousDownloadKinds; 
@property (assign) BOOL runsOnlyIfKindsAreDirty; 
@property (assign) BOOL shouldSuppressServerDialogs; 
-(BOOL)runsOnlyIfKindsAreDirty;
-(BOOL)_isFatalError:(id)arg1 ;
-(BOOL)shouldSuppressServerDialogs;
-(id)_copyFilteredDownloadKinds;
-(BOOL)_postDownloadKinds:(id)arg1 error:(id*)arg2 ;
-(NSSet *)previousDownloadKinds;
-(void)setPreviousDownloadKinds:(NSSet *)arg1 ;
-(void)setRunsOnlyIfKindsAreDirty:(BOOL)arg1 ;
-(void)setShouldSuppressServerDialogs:(BOOL)arg1 ;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(void)dealloc;
-(void)_run;
-(void)run;
-(id)initWithDownloadKinds:(id)arg1 ;
-(NSSet *)downloadKinds;
-(SSAuthenticationContext *)authenticationContext;
-(NSString *)clientIdentifierHeader;
-(void)setClientIdentifierHeader:(NSString *)arg1 ;
-(id)uniqueKey;
-(BOOL)shouldFailAfterUniquePredecessorError:(id)arg1 ;
@end
