/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:23 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTActionableTemplateItem.h>

@class NSArray, SAUINanoImageResource, NSString, SAUIDecoratedText;

@interface SASTColumnDataListItem : AceObject <SASTActionableTemplateItem>

@property (nonatomic,retain) id<SASTTemplateAction> action; 
@property (nonatomic,copy) NSArray * decoratedRows; 
@property (nonatomic,retain) SAUINanoImageResource * imageResource; 
@property (nonatomic,copy) NSString * rowLayout; 
@property (nonatomic,retain) SAUIDecoratedText * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)columnDataListItem;
+(id)columnDataListItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAUIDecoratedText *)title;
-(void)setTitle:(SAUIDecoratedText *)arg1 ;
-(id<SASTTemplateAction>)action;
-(void)setAction:(id<SASTTemplateAction>)arg1 ;
-(id)encodedClassName;
-(SAUINanoImageResource *)imageResource;
-(void)setImageResource:(SAUINanoImageResource *)arg1 ;
-(NSArray *)decoratedRows;
-(void)setDecoratedRows:(NSArray *)arg1 ;
-(NSString *)rowLayout;
-(void)setRowLayout:(NSString *)arg1 ;
@end

