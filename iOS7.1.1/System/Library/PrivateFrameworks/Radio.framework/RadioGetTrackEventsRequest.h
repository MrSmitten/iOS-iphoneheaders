/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:47 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest, NSArray;

@interface RadioGetTrackEventsRequest : RadioRequest {

	SSURLConnectionRequest* _request;
	NSArray* _stationTrackIDs;

}
-(void)startWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)cancel;
-(void).cxx_destruct;
-(id)initWithStationTrackIDs:(id)arg1 ;
@end
