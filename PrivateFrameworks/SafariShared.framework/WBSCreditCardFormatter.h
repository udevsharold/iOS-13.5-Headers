/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <Foundation/NSFormatter.h>

@interface WBSCreditCardFormatter : NSFormatter {

	BOOL _showLastFourDigits;
	BOOL _showCreditCardNumber;
	BOOL _allowsUnknownCardTypes;
	BOOL _isVirtualCard;

}

@property (assign,nonatomic) BOOL showLastFourDigits;                  //@synthesize showLastFourDigits=_showLastFourDigits - In the implementation block
@property (assign,nonatomic) BOOL showCreditCardNumber;                //@synthesize showCreditCardNumber=_showCreditCardNumber - In the implementation block
@property (assign,nonatomic) BOOL allowsUnknownCardTypes;              //@synthesize allowsUnknownCardTypes=_allowsUnknownCardTypes - In the implementation block
@property (assign,nonatomic) BOOL isVirtualCard;                       //@synthesize isVirtualCard=_isVirtualCard - In the implementation block
-(id)stringForObjectValue:(id)arg1 ;
-(BOOL)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3 ;
-(BOOL)isPartialStringValid:(id)arg1 newEditingString:(id*)arg2 errorDescription:(id*)arg3 ;
-(BOOL)isPartialStringValid:(id*)arg1 proposedSelectedRange:(NSRange*)arg2 originalString:(id)arg3 originalSelectedRange:(NSRange)arg4 errorDescription:(id*)arg5 ;
-(BOOL)showCreditCardNumber;
-(id)_formattedStringForNormalizedNumber:(id)arg1 showCreditCardNumber:(BOOL)arg2 ;
-(BOOL)allowsUnknownCardTypes;
-(NSRange)_normalizedSelectionRangeForFormattedCreditCardNumber:(id)arg1 withOriginalSelectionRange:(NSRange)arg2 ;
-(NSRange)_selectionRangeInFormattedCreditCardNumber:(id)arg1 forNormalizedSelectionRange:(NSRange)arg2 inNormalizedCreditCardNumber:(id)arg3 ;
-(BOOL)isVirtualCard;
-(BOOL)showLastFourDigits;
-(void)setShowLastFourDigits:(BOOL)arg1 ;
-(void)setShowCreditCardNumber:(BOOL)arg1 ;
-(void)setAllowsUnknownCardTypes:(BOOL)arg1 ;
-(void)setIsVirtualCard:(BOOL)arg1 ;
@end

