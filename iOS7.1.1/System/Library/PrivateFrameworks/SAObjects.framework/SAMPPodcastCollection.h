/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:24:55 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAMPCollection.h>

@class NSString, NSArray, NSNumber;

@interface SAMPPodcastCollection : SAMPCollection

@property (nonatomic,copy) NSString * artist; 
@property (nonatomic,copy) NSArray * preferredPlayOrder; 
@property (nonatomic,copy) NSString * sortArtist; 
@property (nonatomic,copy) NSNumber * subscribed; 
+(id)podcastCollection;
+(id)podcastCollectionWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setSubscribed:(id)arg1 ;
-(id)groupIdentifier;
-(id)artist;
-(void)setArtist:(id)arg1 ;
-(id)sortArtist;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(void)setSortArtist:(id)arg1 ;
-(id)preferredPlayOrder;
-(void)setPreferredPlayOrder:(id)arg1 ;
-(id)subscribed;
@end

