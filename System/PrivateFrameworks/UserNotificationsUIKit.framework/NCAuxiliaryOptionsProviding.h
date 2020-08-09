/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol NCAuxiliaryOptionsProviding <NSObject>
@property (nonatomic,copy,readonly) NSString * optionsSummaryTitle; 
@property (nonatomic,copy,readonly) NSString * optionsSummaryText; 
@property (nonatomic,readonly) unsigned long long numberOfOptionButtons; 
@property (assign,nonatomic) BOOL auxiliaryOptionsVisible; 
@optional
-(NSString *)optionsSummaryText;
-(unsigned long long)numberOfOptionButtons;
-(BOOL)auxiliaryOptionsVisible;
-(void)setAuxiliaryOptionsVisible:(BOOL)arg1;
-(NSString *)optionsSummaryTitle;

@required
-(void)configureOptionButtons:(id)arg1;

@end
