/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Navigation/Navigation-Structs.h>
#import <Navigation/MNListInstructionContents.h>
#import <libobjc.A.dylib/MNInstructionContents.h>

@protocol GEOServerFormattedString;
@class NSArray, NSString;

@interface MNSpokenInstructionContents : MNListInstructionContents <MNInstructionContents> {

	SCD_Struct_MN16 _options;
	BOOL _isSecondary;
	id<GEOServerFormattedString> _proceedInstructionFormat;
	id<GEOServerFormattedString> _continueInstructionFormat;
	id<GEOServerFormattedString> _initialInstructionFormat;
	id<GEOServerFormattedString> _prepareInstructionFormat;
	NSArray* _executionInstructionFormats;

}

@property (nonatomic,retain) id<GEOServerFormattedString> proceedInstructionFormat;               //@synthesize proceedInstructionFormat=_proceedInstructionFormat - In the implementation block
@property (nonatomic,retain) id<GEOServerFormattedString> continueInstructionFormat;              //@synthesize continueInstructionFormat=_continueInstructionFormat - In the implementation block
@property (nonatomic,retain) id<GEOServerFormattedString> initialInstructionFormat;               //@synthesize initialInstructionFormat=_initialInstructionFormat - In the implementation block
@property (nonatomic,retain) id<GEOServerFormattedString> prepareInstructionFormat;               //@synthesize prepareInstructionFormat=_prepareInstructionFormat - In the implementation block
@property (nonatomic,retain) NSArray * executionInstructionFormats;                               //@synthesize executionInstructionFormats=_executionInstructionFormats - In the implementation block
@property (assign,nonatomic) long long context; 
@property (nonatomic,readonly) int numSignsWanted; 
@property (assign,nonatomic) BOOL suppressNames; 
@property (nonatomic,retain) NSString * roadName; 
@property (nonatomic,readonly) BOOL hasServerContent; 
@property (assign,nonatomic) BOOL suppressFallback; 
+(id)contentsWithStep:(id)arg1 transportType:(int)arg2 destination:(id)arg3 options:(SCD_Struct_MN16*)arg4 isSecondary:(BOOL)arg5 ;
-(id)init;
-(id)description;
-(long long)context;
-(void)setContext:(long long)arg1 ;
-(void)_populateFromStep:(id)arg1 ;
-(id)instructionForStage:(unsigned long long)arg1 distance:(double)arg2 ;
-(BOOL)hasServerContent;
-(void)setProceedInstructionFormat:(id<GEOServerFormattedString>)arg1 ;
-(void)setContinueInstructionFormat:(id<GEOServerFormattedString>)arg1 ;
-(void)setInitialInstructionFormat:(id<GEOServerFormattedString>)arg1 ;
-(void)setPrepareInstructionFormat:(id<GEOServerFormattedString>)arg1 ;
-(void)setExecutionInstructionFormats:(NSArray *)arg1 ;
-(NSArray *)executionInstructionFormats;
-(id<GEOServerFormattedString>)proceedInstructionFormat;
-(id<GEOServerFormattedString>)continueInstructionFormat;
-(id<GEOServerFormattedString>)prepareInstructionFormat;
-(id<GEOServerFormattedString>)initialInstructionFormat;
-(id)_instructionsForFormats:(id)arg1 distance:(double)arg2 ;
-(int)numSignsWanted;
-(id)instructionWithShorterAlternatives:(id*)arg1 ;
@end

