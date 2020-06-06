/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUITemplateBaseItem.h>

@class NSArray, NSString, NSNumber;

@interface SAUITemplateTabularData : SAUITemplateBaseItem

@property (assign,nonatomic) BOOL allowContentScrolling; 
@property (nonatomic,copy) NSArray * columns; 
@property (nonatomic,retain) id<SAUITemplateItem> footerItem; 
@property (nonatomic,retain) id<SAUITemplateItem> headerItem; 
@property (nonatomic,copy) NSString * layoutStyle; 
@property (nonatomic,copy) NSNumber * minimumRowHeight; 
@property (nonatomic,copy) NSArray * rowStyleRules; 
@property (assign,nonatomic) BOOL showHeaderDivider; 
+(id)tabularData;
+(id)tabularDataWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)columns;
-(void)setColumns:(NSArray *)arg1 ;
-(void)setLayoutStyle:(NSString *)arg1 ;
-(NSString *)layoutStyle;
-(NSNumber *)minimumRowHeight;
-(void)setMinimumRowHeight:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(BOOL)allowContentScrolling;
-(void)setAllowContentScrolling:(BOOL)arg1 ;
-(id<SAUITemplateItem>)footerItem;
-(void)setFooterItem:(id<SAUITemplateItem>)arg1 ;
-(id<SAUITemplateItem>)headerItem;
-(void)setHeaderItem:(id<SAUITemplateItem>)arg1 ;
-(NSArray *)rowStyleRules;
-(void)setRowStyleRules:(NSArray *)arg1 ;
-(BOOL)showHeaderDivider;
-(void)setShowHeaderDivider:(BOOL)arg1 ;
@end

