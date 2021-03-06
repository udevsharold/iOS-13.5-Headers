/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFParameter.h>

@class NSArray;

@interface WFTagFieldParameter : WFParameter {

	BOOL _allowsTextEntry;
	long long _keyboardType;
	long long _autocapitalizationType;
	long long _autocorrectionType;
	long long _textAlignment;
	NSArray* _suggestedTags;

}

@property (nonatomic,readonly) BOOL allowsTextEntry;                          //@synthesize allowsTextEntry=_allowsTextEntry - In the implementation block
@property (nonatomic,readonly) long long keyboardType;                        //@synthesize keyboardType=_keyboardType - In the implementation block
@property (nonatomic,readonly) long long autocapitalizationType;              //@synthesize autocapitalizationType=_autocapitalizationType - In the implementation block
@property (nonatomic,readonly) long long autocorrectionType;                  //@synthesize autocorrectionType=_autocorrectionType - In the implementation block
@property (nonatomic,readonly) long long textAlignment;                       //@synthesize textAlignment=_textAlignment - In the implementation block
@property (nonatomic,readonly) NSArray * suggestedTags;                       //@synthesize suggestedTags=_suggestedTags - In the implementation block
-(long long)keyboardType;
-(id)initWithDefinition:(id)arg1 ;
-(long long)autocorrectionType;
-(long long)autocapitalizationType;
-(long long)textAlignment;
-(Class)singleStateClass;
-(BOOL)shouldAlignLabels;
-(NSArray *)suggestedTags;
-(BOOL)allowsTextEntry;
@end

