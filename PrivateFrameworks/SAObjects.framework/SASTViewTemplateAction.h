/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SASTTemplateAction.h>

@class NSArray, SASTItemGroup, NSString;

@interface SASTViewTemplateAction : AceObject <SASTTemplateAction>

@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,retain) SASTItemGroup * itemGroupView; 
@property (nonatomic,copy) NSString * viewTitle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)viewTemplateAction;
+(id)viewTemplateActionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSString *)viewTitle;
-(SASTItemGroup *)itemGroupView;
-(void)setItemGroupView:(SASTItemGroup *)arg1 ;
-(void)setViewTitle:(NSString *)arg1 ;
@end

