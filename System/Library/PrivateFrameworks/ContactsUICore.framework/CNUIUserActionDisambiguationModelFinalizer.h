/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNUIUserActionItem, NSMutableArray, NSArray;

@interface CNUIUserActionDisambiguationModelFinalizer : NSObject {

	CNUIUserActionItem* _defaultAction;
	NSMutableArray* _actions;
	NSArray* _recentActions;
	NSArray* _directoryServiceActions;
	NSArray* _foundOnDeviceActions;

}

@property (nonatomic,retain) CNUIUserActionItem * defaultAction;              //@synthesize defaultAction=_defaultAction - In the implementation block
@property (nonatomic,retain) NSMutableArray * actions;                        //@synthesize actions=_actions - In the implementation block
@property (nonatomic,retain) NSArray * recentActions;                         //@synthesize recentActions=_recentActions - In the implementation block
@property (nonatomic,retain) NSArray * directoryServiceActions;               //@synthesize directoryServiceActions=_directoryServiceActions - In the implementation block
@property (nonatomic,retain) NSArray * foundOnDeviceActions;                  //@synthesize foundOnDeviceActions=_foundOnDeviceActions - In the implementation block
+(id)modelWithDefaultAction:(id)arg1 actions:(id)arg2 recentActions:(id)arg3 directoryServiceActions:(id)arg4 foundOnDeviceActions:(id)arg5 ;
-(id)model;
-(NSMutableArray *)actions;
-(CNUIUserActionItem *)defaultAction;
-(void)setActions:(NSMutableArray *)arg1 ;
-(void)setDefaultAction:(CNUIUserActionItem *)arg1 ;
-(NSArray *)recentActions;
-(id)initWithDefaultAction:(id)arg1 actions:(id)arg2 recentActions:(id)arg3 directoryServiceActions:(id)arg4 foundOnDeviceActions:(id)arg5 ;
-(void)removeUninterestingItentActions;
-(void)removeDiscoveredActionsAlreadyCurated;
-(void)removeDuplicateIntentActionsFromSameProvider;
-(void)promoteLoneManagedCallProviderActionToBeDefault;
-(void)promoteLoneActionToBeDefault;
-(void)removeDefaultActionFromListOfActions;
-(NSArray *)directoryServiceActions;
-(NSArray *)foundOnDeviceActions;
-(void)setRecentActions:(NSArray *)arg1 ;
-(void)setDirectoryServiceActions:(NSArray *)arg1 ;
-(void)setFoundOnDeviceActions:(NSArray *)arg1 ;
@end

