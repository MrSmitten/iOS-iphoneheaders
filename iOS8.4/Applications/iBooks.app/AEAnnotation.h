/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 7:10:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /Applications/iBooks.app/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBooks/iBooks-Structs.h>
#import <CoreData/NSManagedObject.h>
#import <iBooks/BKBookmark.h>
#import <iBooks/AEAnnotation.h>
@class NSString, NSDate, NSData;


@protocol AEAnnotation <NSObject>
@property (nonatomic,readonly) int annotationType; 
@property (nonatomic,retain,readonly) NSString * annotationLocation; 
@property (nonatomic,retain,readonly) NSString * annotationNote; 
@property (nonatomic,retain,readonly) NSString * annotationRepresentativeText; 
@property (nonatomic,retain,readonly) NSString * annotationSelectedText; 
@property (nonatomic,retain,readonly) NSString * annotationUuid; 
@property (nonatomic,retain,readonly) NSDate * annotationCreationDate; 
@property (nonatomic,retain,readonly) NSDate * annotationModificationDate; 
@property (nonatomic,readonly) int annotationStyle; 
@property (nonatomic,readonly) char annotationIsUnderline; 
@property (nonatomic,retain,readonly) NSData * annotationUserData; 
@property (getter=isAnnotationDeleted,nonatomic,readonly) char annotationDeleted; 
@property (nonatomic,retain,readonly) NSString * chapterTitle; 
@property (nonatomic,retain,readonly) NSString * physicalPageNumber; 
@property (nonatomic,readonly) NSRange annotationSelectedTextRange; 
@property (nonatomic,readonly) char annotationHasNote; 
@property (nonatomic,readonly) float readingProgressHighWaterMark; 
@optional
-(float)readingProgressHighWaterMark;
-(char)annotationIsUnderline;
-(NSString *)chapterTitle;
-(NSString *)physicalPageNumber;
-(char)isAnnotationDeleted;
-(NSRange)annotationSelectedTextRange;
-(char)annotationHasNote;
-(NSData *)annotationUserData;

@required
-(NSString *)annotationLocation;
-(NSDate *)annotationModificationDate;
-(NSDate *)annotationCreationDate;
-(int)annotationStyle;
-(NSString *)annotationNote;
-(NSString *)annotationUuid;
-(NSString *)annotationSelectedText;
-(NSString *)annotationRepresentativeText;
-(int)annotationType;

@end


@class BKLocation, NSString, NSDate, NSData, NSDictionary, NSNumber, AEAnnotationManagedObjectContext;

@interface AEAnnotation : NSManagedObject <BKBookmark, AEAnnotation>

@property (nonatomic,retain) BKLocation * location; 
@property (assign,nonatomic) int ordinal; 
@property (assign,nonatomic) NSRange annotationStorageRange; 
@property (assign,nonatomic) unsigned absolutePhysicalPageIndex; 
@property (assign,nonatomic) unsigned contentNodeRelativePageIndex; 
@property (nonatomic,retain) NSString * annotationBookVersion; 
@property (nonatomic,retain) NSString * selectionPreContextText; 
@property (nonatomic,retain) NSString * selectionPostContextText; 
@property (nonatomic,retain) NSDictionary * placeholderHistory; 
@property (nonatomic,readonly) char isPlaceholder; 
@property (nonatomic,readonly) char isBookmark; 
@property (nonatomic,readonly) char isOrphan; 
@property (nonatomic,readonly) NSString * annotationContentNodeID; 
@property (nonatomic,readonly) NSString * annotationStorageIDWithoutContentNodeID; 
@property (nonatomic,retain) NSString * annotationAssetID; 
@property (nonatomic,retain) NSString * annotationCreatorIdentifier; 
@property (nonatomic,retain) NSString * annotationUuid; 
@property (assign,nonatomic) int annotationStyle; 
@property (assign,nonatomic) int annotationType; 
@property (nonatomic,retain) NSString * annotationLocation; 
@property (nonatomic,retain) NSString * annotationNote; 
@property (nonatomic,readonly) char annotationHasNote; 
@property (nonatomic,retain) NSString * annotationRepresentativeText; 
@property (nonatomic,retain) NSString * annotationSelectedText; 
@property (nonatomic,retain) NSDate * annotationCreationDate; 
@property (nonatomic,retain) NSDate * annotationModificationDate; 
@property (assign,getter=isAnnotationDeleted,nonatomic) char annotationDeleted; 
@property (assign,nonatomic) char annotationIsUnderline; 
@property (nonatomic,retain) NSNumber * plLocationRangeStart; 
@property (nonatomic,retain) NSNumber * plLocationRangeEnd; 
@property (nonatomic,retain) NSNumber * plAbsolutePhysicalLocation; 
@property (nonatomic,retain) NSString * plStorageUUID; 
@property (nonatomic,retain) NSData * plUserData; 
@property (nonatomic,retain) NSString * physicalPageNumber; 
@property (nonatomic,retain) NSString * annotationVersion; 
@property (nonatomic,retain) NSString * assetVersion; 
@property (nonatomic,retain) NSString * attachments; 
@property (nonatomic,retain) NSString * chapterTitle; 
@property (nonatomic,retain) NSDate * userModificationDate; 
@property (assign,nonatomic) NSRange annotationSelectedTextRange; 
@property (assign,nonatomic) float readingProgressHighWaterMark; 
@property (assign,nonatomic) char spineIndexUpdated; 
@property (nonatomic,retain) NSString * futureProofing1; 
@property (nonatomic,retain) NSString * futureProofing2; 
@property (nonatomic,retain) NSString * futureProofing3; 
@property (nonatomic,retain) NSString * futureProofing4; 
@property (nonatomic,retain) NSString * futureProofing5; 
@property (nonatomic,retain) NSString * futureProofing6; 
@property (nonatomic,retain) NSString * futureProofing7; 
@property (nonatomic,retain) NSString * futureProofing8; 
@property (nonatomic,retain) NSString * futureProofing9; 
@property (nonatomic,retain) NSString * futureProofing10; 
@property (nonatomic,retain) NSString * futureProofing11; 
@property (nonatomic,retain) NSString * futureProofing12; 
@property (nonatomic,readonly) AEAnnotationManagedObjectContext * managedObjectContext; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) NSData * annotationUserData; 
+(id)annotationWithUUID:(id)arg1 assetID:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)predicateForGlobalAnnotationsMissingReadingProgressHighWaterMark;
+(id)globalAnnotationForAssetID:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)predicateForAllAnnotationsIncludingDeleted:(char)arg1 ;
+(id)predicateForAnnotationsWithAssetIDInList:(id)arg1 includingDeleted:(char)arg2 ;
+(id)globalAnnotationTypeValues;
+(id)userAnnotationTypeValues;
+(char)isValidForDeserialization:(id)arg1 ;
+(id)modernDictionaryRepresentationForAnnotationsMatchingPredicate:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)annotationAssetIDFromDictionaryRepresentation:(id)arg1 ;
+(id)annotatedAttributedStringForAnnotation:(id)arg1 withPossibleLength:(unsigned)arg2 ;
+(id)annotationUuidFromDictionaryRepresentation:(id)arg1 ;
+(id)lastModificationFromDictionaryRepresentation:(id)arg1 ;
+(id)dictionaryResultsForAssetsWithPredicate:(id)arg1 properties:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)annotationsForPredicate:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)maxModificationDateExpressionDescription;
+(id)maxModificationDateColumnName;
+(id)maxAnnotationVersionForAssetsWithPredicate:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)annotationsForAssetID:(id)arg1 includingDeleted:(char)arg2 inManagedObjectContext:(id)arg3 ;
+(id)predicateForAnnotationsWithAssetID:(id)arg1 includingDeleted:(char)arg2 ;
+(id)dictionaryRepresentationsForAnnotations:(id)arg1 ;
+(char)mergeServerAnnotations:(id)arg1 forAssetID:(id)arg2 intoMoc:(id)arg3 ;
+(id)maxModificationDateForAssetsWithPredicate:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)contextAwareSelectedTextFromAnnotation:(id)arg1 ;
+(id)predicateForAnnotationWithUUID:(id)arg1 assetID:(id)arg2 ;
+(id)predicateForAnnotationsWithUUIDInList:(id)arg1 assetID:(id)arg2 ;
+(id)predicateForGlobalAnnotationWithAssetID:(id)arg1 ;
+(id)maxExpressionDescriptionForProperty:(id)arg1 expressionName:(id)arg2 ;
+(id)predicateForUserAnnotationsWithAssetID:(id)arg1 includingDeleted:(char)arg2 ;
+(id)predicateForUserAnnotationsWithAssetIDInList:(id)arg1 includingDeleted:(char)arg2 ;
+(id)predicateForPageBookmarksWithAssetID:(id)arg1 ;
+(id)predicateForRangeAnnotationsWithAssetID:(id)arg1 ;
+(id)predicateForAnnotationsWithLocation:(id)arg1 includingDeleted:(char)arg2 ;
+(id)predicateForAnnotationsWithUserModificationDate;
+(id)annotationsWithAssetIDInList:(id)arg1 includingDeleted:(char)arg2 inManagedObjectContext:(id)arg3 ;
+(id)annotationsWithUUIDInList:(id)arg1 assetID:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)maxUserModificationDateExpressionDescription;
+(id)maxModificationDateForAllAnnotationsInManagedObjectContext:(id)arg1 ;
+(id)insertAnnotationWithAssetID:(id)arg1 creatorIdentifier:(id)arg2 annotationUuid:(id)arg3 intoManagedObjectContext:(id)arg4 ;
+(id)optimizedSelectedTextForSerialization:(id)arg1 ;
+(id)optimizedRepresentativeTextForSerialization:(id)arg1 selectedText:(id)arg2 ;
+(char)isSelectedTextRepeatedInRepresentativeTextForAnnotation:(id)arg1 ;
+(id)clauseForSelectedTextForAnnotation:(id)arg1 inSentence:(id)arg2 possibleLength:(unsigned)arg3 highlightedRange:(NSRange*)arg4 ;
+(id)wordsForSelectedTextForAnnotation:(id)arg1 inSentence:(id)arg2 possibleLength:(unsigned)arg3 highlightedRange:(NSRange*)arg4 ;
+(id)lettersForSelectedTextForAnnotation:(id)arg1 inSentence:(id)arg2 possibleLength:(unsigned)arg3 highlightedRange:(NSRange*)arg4 ;
+(id)annotatedAttributedStringWithString:(id)arg1 annotationStyle:(int)arg2 range:(NSRange)arg3 ;
+(id)annotationCreatorIdentifierFromDictionaryRepresentation:(id)arg1 ;
+(int)annotationTypeFromDictionaryRepresentation:(id)arg1 ;
+(char)mergeAnnotation:(id)arg1 withServerAnnotation:(id)arg2 moc:(id)arg3 ;
+(id)requiredKeysForDictionaryRepresentation;
+(id)dateKeysForDictionaryRepresentation;
+(id)optionalKeysForDictionaryRepresentation;
+(id)dictionaryResultsForAnnotationsWithPredicate:(id)arg1 properties:(id)arg2 propertyNamesMap:(id)arg3 inManagedObjectContext:(id)arg4 ;
+(id)_dictionaryRepresentationForAnnotationsMatchingPredicate:(id)arg1 map:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(char)isBKBookmarkCreatorIdentifier:(id)arg1 ;
+(id)deletedFlagFromDictionaryRepresentation:(id)arg1 ;
+(id)bookmarkTypeFromAnnotationType:(int)arg1 ;
+(id)bookmarkColorFromAnnotationStyle:(int)arg1 ;
+(int)annotationStyleFromBookmarkColor:(id)arg1 ;
+(int)annotationTypeFromBookmarkType:(id)arg1 ;
+(id)compatibleDictionaryRepresentationForAnnotationsMatchingPredicate:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)aeAnnotationDictionaryRepresentationsForAnnotations:(id)arg1 ;
+(id)predicateForAnnotationsWithAssetID:(id)arg1 ordinal:(int)arg2 ;
+(id)pageBookmarksPredicate:(id)arg1 ;
+(id)highlightsPredicate:(id)arg1 ;
+(id)annotationsPredicate:(id)arg1 ;
+(id)fetchRequest;
-(char)bumpReadingProgressHighWaterMarkToProgress:(float)arg1 ;
-(float)readingProgressHighWaterMark;
-(char)isValidForSerialization;
-(void)deserializeFromDictionary:(id)arg1 trustedSource:(char)arg2 ;
-(int)annotationStyle;
-(char)annotationIsUnderline;
-(char)usesLegacySerializationMethod;
-(NSString *)annotationVersion;
-(NSString *)chapterTitle;
-(NSString *)physicalPageNumber;
-(id)annotatedAttributedString;
-(void)setUserModificationDate:(NSDate *)arg1 ;
-(void)updateAllModificationDates;
-(char)annotationDeleted;
-(void)updateSystemModificationDate;
-(void)setAnnotationVersion:(NSString *)arg1 ;
-(char)hasReadingProgressHighWaterMark;
-(void)setReadingProgressHighWaterMark:(float)arg1 ;
-(char)isAnnotationDeleted;
-(NSRange)annotationSelectedTextRange;
-(char)annotationHasNote;
-(void)updateUserModificationDate;
-(void)setAnnotationStyle:(int)arg1 ;
-(void)setAnnotationType:(int)arg1 ;
-(void)setAnnotationCreationDate:(NSDate *)arg1 ;
-(void)setAnnotationDeleted:(char)arg1 ;
-(void)setAnnotationIsUnderline:(char)arg1 ;
-(void)setAnnotationLocation:(NSString *)arg1 ;
-(void)setAnnotationNote:(NSString *)arg1 ;
-(void)setAnnotationRepresentativeText:(NSString *)arg1 ;
-(void)setAnnotationSelectedText:(NSString *)arg1 ;
-(void)setPlLocationRangeStart:(NSNumber *)arg1 ;
-(void)setPlLocationRangeEnd:(NSNumber *)arg1 ;
-(void)setPlAbsolutePhysicalLocation:(NSNumber *)arg1 ;
-(void)setPlStorageUUID:(NSString *)arg1 ;
-(void)setPlUserData:(NSData *)arg1 ;
-(void)setPhysicalPageNumber:(NSString *)arg1 ;
-(void)setAssetVersion:(NSString *)arg1 ;
-(void)setChapterTitle:(NSString *)arg1 ;
-(NSDate *)userModificationDate;
-(void)setAnnotationSelectedTextRange:(NSRange)arg1 ;
-(char)spineIndexUpdated;
-(void)setSpineIndexUpdated:(char)arg1 ;
-(void)setFutureProofing1:(NSString *)arg1 ;
-(void)setFutureProofing2:(NSString *)arg1 ;
-(void)setFutureProofing3:(NSString *)arg1 ;
-(void)setFutureProofing4:(NSString *)arg1 ;
-(void)setFutureProofing5:(NSString *)arg1 ;
-(void)setFutureProofing6:(NSString *)arg1 ;
-(void)setFutureProofing7:(NSString *)arg1 ;
-(void)setFutureProofing8:(NSString *)arg1 ;
-(void)setFutureProofing9:(NSString *)arg1 ;
-(void)setFutureProofing10:(NSString *)arg1 ;
-(void)setFutureProofing11:(NSString *)arg1 ;
-(void)setFutureProofing12:(NSString *)arg1 ;
-(char)bumpAnnotationVersionToMinimumVersion:(id)arg1 ;
-(id)doesSerializeAs_iBooks;
-(id)aeAnnotationDictionaryRepresentation;
-(void)iBooks_deserializeFromDictionary:(id)arg1 trustedSource:(char)arg2 ;
-(void)aeAnnotationDeserializeFromDictionary:(id)arg1 trustedSource:(char)arg2 ;
-(id)validateAnnotationUuid;
-(id)bkBookmarkDeserializeLocationDataFromDictionary:(id)arg1 trustedSource:(char)arg2 ;
-(id)iBooks_dictionaryRepresentation;
-(void)setOrdinal:(int)arg1 ;
-(char)isLocationSame:(id)arg1 ;
-(id)pageOffsetsInBookManagedObjectContext:(id)arg1 ;
-(NSRange)annotationStorageRange;
-(unsigned)absolutePhysicalPageIndex;
-(NSString *)annotationContentNodeID;
-(NSString *)annotationBookVersion;
-(void)setAnnotationStorageRange:(NSRange)arg1 ;
-(NSString *)selectionPreContextText;
-(NSString *)selectionPostContextText;
-(NSString *)annotationStorageIDWithoutContentNodeID;
-(NSDictionary *)placeholderHistory;
-(void)setAbsolutePhysicalPageIndex:(unsigned)arg1 ;
-(void)setPlaceholderHistory:(NSDictionary *)arg1 ;
-(char)isOrphan;
-(char)isBookmark;
-(unsigned)contentNodeRelativePageIndex;
-(void)setAnnotationBookVersion:(NSString *)arg1 ;
-(id)p_userDataDictionary;
-(void)p_setUserDataDictionary:(id)arg1 ;
-(id)p_userDataObjectForKey:(id)arg1 ;
-(void)p_setUserDataObject:(id)arg1 forKey:(id)arg2 ;
-(void)setSelectionPreContextText:(NSString *)arg1 ;
-(void)setSelectionPostContextText:(NSString *)arg1 ;
-(void)setContentNodeRelativePageIndex:(unsigned)arg1 ;
-(BKLocation *)location;
-(id)dictionaryRepresentation;
-(NSString *)attachments;
-(void)setAttachments:(NSString *)arg1 ;
-(AEAnnotationManagedObjectContext *)managedObjectContext;
-(NSString *)assetVersion;
-(int)ordinal;
-(int)annotationType;
-(void)setLocation:(BKLocation *)arg1 ;
-(void)awakeFromInsert;
-(char)isPlaceholder;
@end
