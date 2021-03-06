/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:36:15 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TextInput_zh/TextInput_zh-Structs.h>
#import <TextInput_zh/TIKeyboardInputManagerShapeBased.h>

@interface TIKeyboardInputManagerCangjie : TIKeyboardInputManagerShapeBased {

	BOOL _suchengEnabled;
	BOOL _supportsEnglish;

}

@property (assign,nonatomic) BOOL suchengEnabled;               //@synthesize suchengEnabled=_suchengEnabled - In the implementation block
@property (assign,nonatomic) BOOL supportsEnglish;              //@synthesize supportsEnglish=_supportsEnglish - In the implementation block
+(id)ASCIIToCangjieMap;
+(id)cangjieToASCIIMap;
+(id)cangjieFromASCII:(id)arg1 ;
+(id)ASCIIFromCangjie:(id)arg1 ;
+(Class)wordSearchClass;
+(void)removeDynamicDictionaryForInputMode:(id)arg1 ;
-(id)keyboardBehaviors;
-(unsigned long long)initialSelectedIndex;
-(BOOL)supportsNumberKeySelection;
-(unsigned)inputCount;
-(unsigned)inputIndex;
-(id)defaultCandidate;
-(void)setSuchengEnabled:(BOOL)arg1 ;
-(BOOL)suchengEnabled;
-(void)setSupportsEnglish:(BOOL)arg1 ;
-(BOOL)supportsEnglish;
-(unsigned long long)cangjieInputType:(id)arg1 fromPopupVariant:(BOOL)arg2 ;
-(void)updateMarkedText;
-(BOOL)firstCandidateIsEnglish;
-(BOOL)selectedCandidateIsEnglish;
-(BOOL)updateCandidatesWithTIWordSearch:(id)arg1 predictionEnabled:(BOOL)arg2 ;
-(id)cangjieSet;
-(id)cangjieAlphabetSet;
-(BOOL)isPunctuationInput;
-(id)formattedSearchString;
-(void)notifyUpdateCandidates:(id)arg1 forOperation:(id)arg2 ;
-(id)cangjieInputSet;
-(TIInputManagerZephyr*)initImplementation;
-(void)syncToKeyboardState:(id)arg1 afterContextChange:(BOOL)arg2 ;
-(void)setInputIndex:(unsigned)arg1 ;
-(id)nonstopPunctuationCharacters;
-(id)deleteFromInput:(unsigned long long*)arg1 ;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
-(void)syncToLayoutState:(id)arg1 ;
-(id)sortingMethods;
@end

