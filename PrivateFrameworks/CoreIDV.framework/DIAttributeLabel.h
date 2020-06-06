/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreIDV/DIAttribute.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface DIAttributeLabel : DIAttribute <NSSecureCoding> {

	NSString* defaultValue;
	NSString* _buttonTitle;
	NSString* _detailTitle;
	NSString* _detailSubtitle;
	NSString* _detailBody;
	NSString* _businessChatButtonTitle;
	NSString* _businessChatIdentifier;
	NSString* _businessChatIntentName;

}

@property (nonatomic,copy) NSString * defaultValue; 
@property (nonatomic,copy) NSString * buttonTitle;                          //@synthesize buttonTitle=_buttonTitle - In the implementation block
@property (nonatomic,copy) NSString * detailTitle;                          //@synthesize detailTitle=_detailTitle - In the implementation block
@property (nonatomic,copy) NSString * detailSubtitle;                       //@synthesize detailSubtitle=_detailSubtitle - In the implementation block
@property (nonatomic,copy) NSString * detailBody;                           //@synthesize detailBody=_detailBody - In the implementation block
@property (nonatomic,copy) NSString * businessChatButtonTitle;              //@synthesize businessChatButtonTitle=_businessChatButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * businessChatIdentifier;               //@synthesize businessChatIdentifier=_businessChatIdentifier - In the implementation block
@property (nonatomic,copy) NSString * businessChatIntentName;               //@synthesize businessChatIntentName=_businessChatIntentName - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)defaultValue;
-(void)setDefaultValue:(NSString *)arg1 ;
-(NSString *)buttonTitle;
-(void)setButtonTitle:(NSString *)arg1 ;
-(void)setDetailTitle:(NSString *)arg1 ;
-(void)setDetailSubtitle:(NSString *)arg1 ;
-(void)setDetailBody:(NSString *)arg1 ;
-(void)setBusinessChatIdentifier:(NSString *)arg1 ;
-(void)setBusinessChatButtonTitle:(NSString *)arg1 ;
-(void)setBusinessChatIntentName:(NSString *)arg1 ;
-(NSString *)detailTitle;
-(NSString *)detailSubtitle;
-(NSString *)detailBody;
-(NSString *)businessChatButtonTitle;
-(NSString *)businessChatIdentifier;
-(NSString *)businessChatIntentName;
@end

