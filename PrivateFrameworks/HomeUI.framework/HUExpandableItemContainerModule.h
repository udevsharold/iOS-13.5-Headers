/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemModule.h>

@class NSArray;

@interface HUExpandableItemContainerModule : HFItemModule

@property (nonatomic,readonly) NSArray * expandableModules; 
-(NSArray *)expandableModules;
-(BOOL)isOptionItem:(id)arg1 ;
-(BOOL)isShowOptionsItem:(id)arg1 ;
-(BOOL)shouldExpandModuleForShowOptionsItem:(id)arg1 ;
-(void)setModuleExpanded:(BOOL)arg1 forItem:(id)arg2 ;
-(id)expandableModuleForItem:(id)arg1 ;
@end

