/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:01:04 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Videos.app/Videos
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <StoreKitUI/SKUIItemOfferButtonDelegate.h>

@class MPMediaItemImageRequest, MPMediaDownloadObserver, MPStoreOffer, UIImageView, UILabel, MPUItemOfferButton, NSString, UIColor;

@interface VideosTableCell : UITableViewCell <SKUIItemOfferButtonDelegate> {

	MPMediaItemImageRequest* _imageRequest;
	MPMediaDownloadObserver* _downloadObserver;
	BOOL _usesUnplayedIndicator;
	BOOL _downloadable;
	BOOL _purchasable;
	BOOL _downloadingCollectionOffer;
	unsigned _mediaType;
	int _playedState;
	MPStoreOffer* _storeOffer;
	/*^block*/ id _downloadButtonActionBlock;
	float _artworkWidth;
	UIImageView* _artworkView;
	UIImageView* _unplayedIndicator;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIImageView* _glyph;
	MPUItemOfferButton* _itemOfferButton;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (assign,nonatomic) unsigned mediaType;                                                                 //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) BOOL usesUnplayedIndicator;                                                         //@synthesize usesUnplayedIndicator=_usesUnplayedIndicator - In the implementation block
@property (assign,nonatomic) int playedState;                                                                    //@synthesize playedState=_playedState - In the implementation block
@property (getter=isDownloadable,nonatomic,readonly) BOOL downloadable;                                          //@synthesize downloadable=_downloadable - In the implementation block
@property (getter=isPurchasable,nonatomic,readonly) BOOL purchasable;                                            //@synthesize purchasable=_purchasable - In the implementation block
@property (getter=isDownloadingCollectionOffer,nonatomic,readonly) BOOL downloadingCollectionOffer;              //@synthesize downloadingCollectionOffer=_downloadingCollectionOffer - In the implementation block
@property (nonatomic,readonly) MPMediaDownloadObserver * downloadObserver;                                       //@synthesize downloadObserver=_downloadObserver - In the implementation block
@property (nonatomic,retain) MPStoreOffer * storeOffer;                                                          //@synthesize storeOffer=_storeOffer - In the implementation block
@property (nonatomic,copy) id downloadButtonActionBlock;                                                         //@synthesize downloadButtonActionBlock=_downloadButtonActionBlock - In the implementation block
@property (assign,nonatomic) float artworkWidth;                                                                 //@synthesize artworkWidth=_artworkWidth - In the implementation block
@property (nonatomic,readonly) UIImageView * artworkView;                                                        //@synthesize artworkView=_artworkView - In the implementation block
@property (nonatomic,readonly) UIImageView * unplayedIndicator;                                                  //@synthesize unplayedIndicator=_unplayedIndicator - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                                                          //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * glyph;                                                              //@synthesize glyph=_glyph - In the implementation block
@property (nonatomic,readonly) MPUItemOfferButton * itemOfferButton;                                             //@synthesize itemOfferButton=_itemOfferButton - In the implementation block
@property (nonatomic,readonly) UIColor * imageBackgroundColor; 
-(id)glyph;
-(BOOL)usesUnplayedIndicator;
-(id)unplayedIndicator;
-(void)setUsesUnplayedIndicator:(BOOL)arg1 ;
-(int)playedState;
-(void)setPlayedState:(int)arg1 ;
-(void)loadImageWithRequest:(id)arg1 inCache:(id)arg2 ;
-(id)imageBackgroundColor;
-(BOOL)isDownloadable;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(id)titleLabel;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)prepareForReuse;
-(id)subtitleLabel;
-(void)setSubtitle:(id)arg1 ;
-(id)subtitle;
-(id)artworkView;
-(void)setMediaType:(unsigned)arg1 ;
-(void)setArtworkImage:(id)arg1 ;
-(void)setDownloadable:(BOOL)arg1 purchasable:(BOOL)arg2 downloadObserver:(id)arg3 storeOffer:(id)arg4 downloadingCollectionOffer:(BOOL)arg5 animated:(BOOL)arg6 ;
-(void)setDownloadButtonActionBlock:(/*^block*/ id)arg1 ;
-(BOOL)isPurchasable;
-(void)_itemOfferButtonShowConfirmationAction:(id)arg1 ;
-(void)_itemOfferButtonCancelConfirmationAction:(id)arg1 ;
-(void)_updateItemOfferButtonAnimated:(BOOL)arg1 ;
-(BOOL)isDownloadingCollectionOffer;
-(id)downloadObserver;
-(id)storeOffer;
-(void)setStoreOffer:(id)arg1 ;
-(/*^block*/ id)downloadButtonActionBlock;
-(unsigned)mediaType;
-(void)itemOfferButtonWillAnimateTransition:(id)arg1 ;
-(void)_itemOfferButtonAction:(id)arg1 ;
-(void).cxx_destruct;
-(float)artworkWidth;
-(id)itemOfferButton;
-(void)setArtworkWidth:(float)arg1 ;
@end

