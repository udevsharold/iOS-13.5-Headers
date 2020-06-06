/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowUI/WFTableItem.h>

@class NSString, UIImage;

@interface WFBasicTableItem : WFTableItem {

	NSString* _primaryText;
	NSString* _secondaryText;
	UIImage* _image;
	unsigned long long _primaryTextStyle;

}

@property (nonatomic,copy) NSString * primaryText;                             //@synthesize primaryText=_primaryText - In the implementation block
@property (nonatomic,copy) NSString * secondaryText;                           //@synthesize secondaryText=_secondaryText - In the implementation block
@property (nonatomic,retain) UIImage * image;                                  //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) unsigned long long primaryTextStyle;              //@synthesize primaryTextStyle=_primaryTextStyle - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(NSString *)primaryText;
-(void)setPrimaryText:(NSString *)arg1 ;
-(NSString *)secondaryText;
-(void)setSecondaryText:(NSString *)arg1 ;
-(void)configureCell:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 primaryText:(id)arg2 secondaryText:(id)arg3 image:(id)arg4 ;
-(void)setPrimaryTextStyle:(unsigned long long)arg1 ;
-(unsigned long long)primaryTextStyle;
@end

