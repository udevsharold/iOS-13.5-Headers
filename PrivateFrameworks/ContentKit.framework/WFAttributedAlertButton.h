/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFSelectableAlertButton.h>

@class NSAttributedString, NSString;

@interface WFAttributedAlertButton : WFSelectableAlertButton {

	NSAttributedString* _attributedTitle;
	NSString* _label;

}

@property (nonatomic,copy,readonly) NSAttributedString * attributedTitle;              //@synthesize attributedTitle=_attributedTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * label;                                  //@synthesize label=_label - In the implementation block
+(id)buttonWithAttributedTitle:(id)arg1 label:(id)arg2 selected:(BOOL)arg3 style:(long long)arg4 handler:(/*^block*/id)arg5 ;
-(NSAttributedString *)attributedTitle;
-(NSString *)label;
@end

