/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:48 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSAttributedString, NSString;

@interface _UITitleContent : NSObject {

	NSAttributedString* _attributedText;
	double _width;

}

@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,readonly) double width;                       //@synthesize width=_width - In the implementation block
+(id)contentWithTitle:(id)arg1 attributes:(id)arg2 button:(id)arg3 ;
-(id)description;
-(NSString *)title;
-(double)width;
-(void)updateWithButton:(id)arg1 ;
-(void)updateWithTitleAttributes:(id)arg1 button:(id)arg2 ;
@end

