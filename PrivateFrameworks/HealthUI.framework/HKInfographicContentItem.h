/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HKInfographicItem.h>

@class NSAttributedString, NSString;

@interface HKInfographicContentItem : NSObject <HKInfographicItem> {

	NSAttributedString* _titleString;
	NSAttributedString* _descriptionString;

}

@property (nonatomic,retain) NSAttributedString * titleString;                    //@synthesize titleString=_titleString - In the implementation block
@property (nonatomic,retain) NSAttributedString * descriptionString;              //@synthesize descriptionString=_descriptionString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSAttributedString *)descriptionString;
-(void)setDescriptionString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)titleString;
-(void)setTitleString:(NSAttributedString *)arg1 ;
-(id)initWithTitle:(id)arg1 description:(id)arg2 ;
@end
