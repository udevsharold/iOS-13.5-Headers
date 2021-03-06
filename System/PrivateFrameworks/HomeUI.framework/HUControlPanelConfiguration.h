/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HUControlPanelConfiguration <NSObject>
@property (nonatomic,readonly) id<HUControlPanelRule> rule; 
@property (nonatomic,readonly) Class cellClass; 
@optional
-(BOOL)shouldShowSectionTitleForItem:(id)arg1;
-(id)sectionTitleForItem:(id)arg1 forSourceItem:(id)arg2;
-(id)sectionFooterForItem:(id)arg1 forSourceItem:(id)arg2;
-(id)valueTransformerForControlItem:(id)arg1;
-(BOOL)shouldShowSectionFooterForItem:(id)arg1;

@required
-(id<HUControlPanelRule>)rule;
-(Class)cellClass;
-(void)setupControlsForCell:(id)arg1 item:(id)arg2;

@end

