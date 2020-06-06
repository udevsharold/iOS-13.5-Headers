/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSArray, NSIndexSet;

@interface OITSUCustomFormatData : NSObject <NSCopying, NSMutableCopying> {

	unsigned char _minimumIntegerWidth;
	unsigned char _decimalWidth;
	unsigned char _numberOfNonSpaceIntegerPlaceholderDigits;
	unsigned char _numberOfNonSpaceDecimalPlaceholderDigits;
	unsigned char _indexFromRightOfLastDigitPlaceholder;
	unsigned char _numberOfHashDecimalPlaceholders;
	unsigned char _totalNumberOfDecimalPlaceholdersInFormat;
	BOOL _showThousandsSeparator;
	BOOL _useAccountingStyle;
	BOOL _requiresFractionReplacement;
	BOOL _isConditional;
	BOOL _formatContainsIntegerToken;
	BOOL _isComplexFormat;
	unsigned short _currencyCodeIndex;
	int _fractionAccuracy;
	NSString* _formatString;
	NSArray* _interstitialStrings;
	NSIndexSet* _interstitialStringInsertionIndexes;
	double _scaleFactor;

}

@property (nonatomic,copy) NSString * formatString;                                               //@synthesize formatString=_formatString - In the implementation block
@property (nonatomic,copy) NSArray * interstitialStrings;                                         //@synthesize interstitialStrings=_interstitialStrings - In the implementation block
@property (nonatomic,copy) NSIndexSet * interstitialStringInsertionIndexes;                       //@synthesize interstitialStringInsertionIndexes=_interstitialStringInsertionIndexes - In the implementation block
@property (assign,nonatomic) double scaleFactor;                                                  //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (assign,nonatomic) int fractionAccuracy;                                                //@synthesize fractionAccuracy=_fractionAccuracy - In the implementation block
@property (assign,nonatomic) unsigned char minimumIntegerWidth;                                   //@synthesize minimumIntegerWidth=_minimumIntegerWidth - In the implementation block
@property (assign,nonatomic) unsigned char decimalWidth;                                          //@synthesize decimalWidth=_decimalWidth - In the implementation block
@property (assign,nonatomic) unsigned char numberOfNonSpaceIntegerPlaceholderDigits;              //@synthesize numberOfNonSpaceIntegerPlaceholderDigits=_numberOfNonSpaceIntegerPlaceholderDigits - In the implementation block
@property (assign,nonatomic) unsigned char numberOfNonSpaceDecimalPlaceholderDigits;              //@synthesize numberOfNonSpaceDecimalPlaceholderDigits=_numberOfNonSpaceDecimalPlaceholderDigits - In the implementation block
@property (assign,nonatomic) unsigned char indexFromRightOfLastDigitPlaceholder;                  //@synthesize indexFromRightOfLastDigitPlaceholder=_indexFromRightOfLastDigitPlaceholder - In the implementation block
@property (assign,nonatomic) unsigned char numberOfHashDecimalPlaceholders;                       //@synthesize numberOfHashDecimalPlaceholders=_numberOfHashDecimalPlaceholders - In the implementation block
@property (assign,nonatomic) unsigned char totalNumberOfDecimalPlaceholdersInFormat;              //@synthesize totalNumberOfDecimalPlaceholdersInFormat=_totalNumberOfDecimalPlaceholdersInFormat - In the implementation block
@property (assign,nonatomic) unsigned short currencyCodeIndex;                                    //@synthesize currencyCodeIndex=_currencyCodeIndex - In the implementation block
@property (assign,nonatomic) BOOL showThousandsSeparator;                                         //@synthesize showThousandsSeparator=_showThousandsSeparator - In the implementation block
@property (assign,nonatomic) BOOL useAccountingStyle;                                             //@synthesize useAccountingStyle=_useAccountingStyle - In the implementation block
@property (assign,nonatomic) BOOL requiresFractionReplacement;                                    //@synthesize requiresFractionReplacement=_requiresFractionReplacement - In the implementation block
@property (assign,nonatomic) BOOL isConditional;                                                  //@synthesize isConditional=_isConditional - In the implementation block
@property (assign,nonatomic) BOOL formatContainsIntegerToken;                                     //@synthesize formatContainsIntegerToken=_formatContainsIntegerToken - In the implementation block
@property (assign,nonatomic) BOOL isComplexFormat;                                                //@synthesize isComplexFormat=_isComplexFormat - In the implementation block
+(id)customFormatData;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(double)scaleFactor;
-(void)setScaleFactor:(double)arg1 ;
-(NSString *)formatString;
-(void)setFormatString:(NSString *)arg1 ;
-(BOOL)showThousandsSeparator;
-(int)fractionAccuracy;
-(void)setShowThousandsSeparator:(BOOL)arg1 ;
-(void)setFractionAccuracy:(int)arg1 ;
-(void)setUseAccountingStyle:(BOOL)arg1 ;
-(void)p_copySelfTo:(id)arg1 ;
-(NSArray *)interstitialStrings;
-(void)setInterstitialStrings:(NSArray *)arg1 ;
-(NSIndexSet *)interstitialStringInsertionIndexes;
-(void)setInterstitialStringInsertionIndexes:(NSIndexSet *)arg1 ;
-(unsigned char)minimumIntegerWidth;
-(void)setMinimumIntegerWidth:(unsigned char)arg1 ;
-(unsigned char)decimalWidth;
-(void)setDecimalWidth:(unsigned char)arg1 ;
-(unsigned char)numberOfNonSpaceIntegerPlaceholderDigits;
-(void)setNumberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg1 ;
-(unsigned char)numberOfNonSpaceDecimalPlaceholderDigits;
-(void)setNumberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg1 ;
-(unsigned char)indexFromRightOfLastDigitPlaceholder;
-(void)setIndexFromRightOfLastDigitPlaceholder:(unsigned char)arg1 ;
-(unsigned char)numberOfHashDecimalPlaceholders;
-(void)setNumberOfHashDecimalPlaceholders:(unsigned char)arg1 ;
-(unsigned char)totalNumberOfDecimalPlaceholdersInFormat;
-(void)setTotalNumberOfDecimalPlaceholdersInFormat:(unsigned char)arg1 ;
-(unsigned short)currencyCodeIndex;
-(void)setCurrencyCodeIndex:(unsigned short)arg1 ;
-(BOOL)useAccountingStyle;
-(BOOL)requiresFractionReplacement;
-(void)setRequiresFractionReplacement:(BOOL)arg1 ;
-(BOOL)isConditional;
-(void)setIsConditional:(BOOL)arg1 ;
-(BOOL)formatContainsIntegerToken;
-(void)setFormatContainsIntegerToken:(BOOL)arg1 ;
-(BOOL)isComplexFormat;
-(void)setIsComplexFormat:(BOOL)arg1 ;
-(id)initWithCustomFormatData:(id)arg1 ;
@end

