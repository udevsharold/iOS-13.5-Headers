/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:56 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVViewElement.h>

@class NSAttributedString;

@interface TVTextElement : TVViewElement

@property (nonatomic,readonly) NSAttributedString * attributedText; 
@property (nonatomic,readonly) long long textStyle; 
-(long long)textStyle;
-(NSAttributedString *)attributedText;
-(id)attributedStringWithFont:(id)arg1 ;
-(id)attributedStringWithFont:(id)arg1 foregroundColor:(id)arg2 textAlignment:(long long)arg3 ;
@end

