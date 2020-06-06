/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString, NSDictionary, NSArray;

@interface WBSFormControlMetadata : NSObject <NSSecureCoding, NSCopying, NSMutableCopying> {

	NSString* _addressBookLabel;
	NSString* _associatedUsername;
	NSString* _fieldClass;
	NSString* _fieldID;
	NSString* _fieldName;
	NSString* _tagName;
	NSString* _uniqueID;
	NSString* _nextControlUniqueID;
	NSString* _placeholder;
	NSString* _value;
	NSString* _passwordRules;
	NSDictionary* _radioButtonInfo;
	NSDictionary* _annotations;
	NSArray* _selectElementInfo;
	NSArray* _autocompleteTokens;
	double _rectLeft;
	double _rectTop;
	double _rectWidth;
	double _rectHeight;
	SCD_Union_WB2 _flags;
	int _size;
	int _maxLength;
	int _minLength;
	int _selectionStart;
	int _selectionLength;
	int _autoFillButtonType;
	int _lastAutoFillButtonType;

}

@property (nonatomic,copy,readonly) NSString * addressBookLabel;                                     //@synthesize addressBookLabel=_addressBookLabel - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * annotations;                                      //@synthesize annotations=_annotations - In the implementation block
@property (nonatomic,copy,readonly) NSArray * autocompleteTokens;                                    //@synthesize autocompleteTokens=_autocompleteTokens - In the implementation block
@property (nonatomic,copy,readonly) NSString * associatedUsername;                                   //@synthesize associatedUsername=_associatedUsername - In the implementation block
@property (nonatomic,copy,readonly) NSString * passwordRules;                                        //@synthesize passwordRules=_passwordRules - In the implementation block
@property (nonatomic,copy,readonly) NSString * fieldClass;                                           //@synthesize fieldClass=_fieldClass - In the implementation block
@property (nonatomic,copy,readonly) NSString * fieldID;                                              //@synthesize fieldID=_fieldID - In the implementation block
@property (nonatomic,copy,readonly) NSString * fieldName;                                            //@synthesize fieldName=_fieldName - In the implementation block
@property (nonatomic,copy,readonly) NSString * tagName;                                              //@synthesize tagName=_tagName - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniqueID;                                             //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,copy,readonly) NSString * nextControlUniqueID;                                  //@synthesize nextControlUniqueID=_nextControlUniqueID - In the implementation block
@property (nonatomic,copy,readonly) NSString * placeholder;                                          //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,copy,readonly) NSString * value;                                                //@synthesize value=_value - In the implementation block
@property (getter=isVisible,nonatomic,readonly) BOOL visible; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (getter=isDisabled,nonatomic,readonly) BOOL disabled; 
@property (getter=isReadOnly,nonatomic,readonly) BOOL readOnly; 
@property (getter=isTextField,nonatomic,readonly) BOOL textField; 
@property (getter=isSecureTextField,nonatomic,readonly) BOOL secureTextField; 
@property (getter=isAutoFilledTextField,nonatomic,readonly) BOOL autoFilledTextField; 
@property (getter=isUserEditedTextField,nonatomic,readonly) BOOL userEditedTextField; 
@property (getter=isLabeledUsernameField,nonatomic,readonly) BOOL labeledUsernameField; 
@property (nonatomic,readonly) BOOL disallowsAutocomplete; 
@property (nonatomic,readonly) BOOL claimsToBeCurrentPasswordViaAutocompleteAttribute; 
@property (nonatomic,readonly) BOOL claimsToBeNewPasswordViaAutocompleteAttribute; 
@property (nonatomic,readonly) BOOL claimsToBeUsernameViaAutocompleteAttribute; 
@property (nonatomic,readonly) BOOL looksLikeCreditCardCardholderField; 
@property (nonatomic,readonly) BOOL looksLikeCreditCardCompositeExpirationDateField; 
@property (nonatomic,readonly) BOOL looksLikeCreditCardNumberField; 
@property (nonatomic,readonly) BOOL looksLikeCreditCardSecurityCodeField; 
@property (nonatomic,readonly) BOOL looksLikeCreditCardTypeField; 
@property (nonatomic,readonly) BOOL looksLikeDayField; 
@property (nonatomic,readonly) BOOL looksLikeMonthField; 
@property (nonatomic,readonly) BOOL looksLikeYearField; 
@property (nonatomic,readonly) BOOL looksLikeOneTimeCodeField; 
@property (nonatomic,readonly) BOOL looksLikeIgnoredDataTypeField; 
@property (nonatomic,readonly) BOOL looksLikePasswordCredentialField; 
@property (nonatomic,copy,readonly) NSDictionary * radioButtonInfo;                                  //@synthesize radioButtonInfo=_radioButtonInfo - In the implementation block
@property (nonatomic,copy,readonly) NSArray * selectElementInfo;                                     //@synthesize selectElementInfo=_selectElementInfo - In the implementation block
@property (nonatomic,readonly) double rectLeft;                                                      //@synthesize rectLeft=_rectLeft - In the implementation block
@property (nonatomic,readonly) double rectTop;                                                       //@synthesize rectTop=_rectTop - In the implementation block
@property (nonatomic,readonly) double rectWidth;                                                     //@synthesize rectWidth=_rectWidth - In the implementation block
@property (nonatomic,readonly) double rectHeight;                                                    //@synthesize rectHeight=_rectHeight - In the implementation block
@property (nonatomic,readonly) unsigned long long size; 
@property (nonatomic,readonly) unsigned long long maxLength; 
@property (nonatomic,readonly) unsigned long long minLength; 
@property (nonatomic,readonly) unsigned long long selectionStart; 
@property (nonatomic,readonly) unsigned long long selectionLength; 
@property (nonatomic,readonly) long long autoFillButtonType; 
@property (nonatomic,readonly) long long lastAutoFillButtonType; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryRepresentation; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)size;
-(BOOL)isActive;
-(NSString *)value;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)uniqueID;
-(unsigned long long)minLength;
-(BOOL)isDisabled;
-(BOOL)isVisible;
-(NSString *)tagName;
-(NSString *)placeholder;
-(NSString *)passwordRules;
-(unsigned long long)maxLength;
-(BOOL)isReadOnly;
-(NSString *)fieldName;
-(BOOL)isTextField;
-(NSDictionary *)annotations;
-(unsigned long long)selectionStart;
-(id)initWithMetadata:(id)arg1 ;
-(BOOL)isAutoFilledTextField;
-(BOOL)isSecureTextField;
-(NSString *)addressBookLabel;
-(BOOL)isLabeledUsernameField;
-(BOOL)looksLikeCreditCardNumberField;
-(BOOL)looksLikeCreditCardCardholderField;
-(BOOL)looksLikeCreditCardSecurityCodeField;
-(BOOL)disallowsAutocomplete;
-(BOOL)claimsToBeCurrentPasswordViaAutocompleteAttribute;
-(BOOL)claimsToBeNewPasswordViaAutocompleteAttribute;
-(BOOL)claimsToBeUsernameViaAutocompleteAttribute;
-(BOOL)looksLikeCreditCardCompositeExpirationDateField;
-(BOOL)looksLikeCreditCardTypeField;
-(BOOL)looksLikeDayField;
-(BOOL)looksLikeMonthField;
-(BOOL)looksLikeYearField;
-(BOOL)looksLikeIgnoredDataTypeField;
-(BOOL)looksLikePasswordCredentialField;
-(BOOL)looksLikeOneTimeCodeField;
-(BOOL)isUserEditedTextField;
-(unsigned long long)selectionLength;
-(long long)autoFillButtonType;
-(long long)lastAutoFillButtonType;
-(NSArray *)autocompleteTokens;
-(NSString *)associatedUsername;
-(NSString *)fieldClass;
-(NSString *)fieldID;
-(NSString *)nextControlUniqueID;
-(NSDictionary *)radioButtonInfo;
-(NSArray *)selectElementInfo;
-(double)rectLeft;
-(double)rectTop;
-(double)rectWidth;
-(double)rectHeight;
@end

