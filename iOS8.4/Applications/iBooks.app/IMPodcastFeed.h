/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:23 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface IMPodcastFeed : NSObject {

	NSString* _feedDescription;
	NSString* _author;
	NSString* _category;
	NSString* _imageURL;
	NSMutableArray* _items;
	NSString* _provider;
	NSString* _updatedFeedURL;
	NSString* _title;
	char _preferredCategoryFound;

}

@property (nonatomic,retain) NSString * feedDescription;               //@synthesize feedDescription=_feedDescription - In the implementation block
@property (nonatomic,retain) NSString * author;                        //@synthesize author=_author - In the implementation block
@property (nonatomic,retain) NSString * category;                      //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) NSString * imageURL;                      //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,retain) NSMutableArray * items;                   //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSString * provider;                      //@synthesize provider=_provider - In the implementation block
@property (nonatomic,retain) NSString * updatedFeedURL;                //@synthesize updatedFeedURL=_updatedFeedURL - In the implementation block
@property (nonatomic,retain) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) char preferredCategoryFound;              //@synthesize preferredCategoryFound=_preferredCategoryFound - In the implementation block
-(char)preferredCategoryFound;
-(void)setPreferredCategoryFound:(char)arg1 ;
-(NSString *)feedDescription;
-(void)setFeedDescription:(NSString *)arg1 ;
-(NSString *)updatedFeedURL;
-(void)setUpdatedFeedURL:(NSString *)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(NSString *)title;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(NSString *)provider;
-(void)setProvider:(NSString *)arg1 ;
-(void)setAuthor:(NSString *)arg1 ;
-(NSString *)author;
-(void)setImageURL:(NSString *)arg1 ;
-(NSString *)imageURL;
@end

