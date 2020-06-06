/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFParameter.h>

@interface WFNumberFieldParameter : WFParameter {

	BOOL _allowsDecimalNumbers;
	BOOL _allowsNegativeNumbers;
	long long _textAlignment;

}

@property (nonatomic,readonly) long long textAlignment;                 //@synthesize textAlignment=_textAlignment - In the implementation block
@property (nonatomic,readonly) BOOL allowsDecimalNumbers;               //@synthesize allowsDecimalNumbers=_allowsDecimalNumbers - In the implementation block
@property (nonatomic,readonly) BOOL allowsNegativeNumbers;              //@synthesize allowsNegativeNumbers=_allowsNegativeNumbers - In the implementation block
+(BOOL)defaultAllowsNegativeNumbers;
+(BOOL)defaultAllowsDecimalNumbers;
-(id)initWithDefinition:(id)arg1 ;
-(long long)textAlignment;
-(Class)singleStateClass;
-(id)defaultSupportedVariableTypes;
-(BOOL)shouldAlignLabels;
-(BOOL)allowsDecimalNumbers;
-(BOOL)allowsNegativeNumbers;
@end
