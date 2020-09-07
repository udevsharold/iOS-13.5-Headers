/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WGWidgetListEditViewControllerDataSource <NSObject>
@optional
-(long long)layoutModeForWidgetListEditViewController:(id)arg1;
-(id)widgetListEditViewController:(id)arg1 displayNameForGroup:(id)arg2;

@required
-(id)groupsForWidgetListEditViewController:(id)arg1;
-(BOOL)widgetListEditViewControllerShouldShowFavorites:(id)arg1;
-(BOOL)shouldShowWidgetsPinButtonForWidgetListEditViewController:(id)arg1;
-(BOOL)areWidgetsPinnedForWidgetListEditViewController:(id)arg1;
-(id)widgetListEditViewController:(id)arg1 displayNameForItemWithIdentifier:(id)arg2;
-(void)widgetListEditViewController:(id)arg1 requestsIconForItemWithIdentifier:(id)arg2 withHandler:(/*^block*/id)arg3;
-(id)widgetListEditViewController:(id)arg1 itemIdentifiersForGroup:(id)arg2;
-(id)disabledInterfaceItemIdentifiersForWidgetListEditViewController:(id)arg1;
-(BOOL)widgetListEditViewControllerShouldIncludeInternalWidgets:(id)arg1;
-(BOOL)widgetListEditViewController:(id)arg1 isItemWithIdentifierFavorited:(id)arg2;
-(BOOL)widgetListEditViewController:(id)arg1 isItemWithIdentifierEnabled:(id)arg2;
-(void)widgetListEditViewController:(id)arg1 didReorderItemsWithIdentifiersInGroups:(id)arg2;
-(void)widgetListEditViewController:(id)arg1 acknowledgeInterfaceItemsWithIdentifiers:(id)arg2;
-(void)widgetListEditViewController:(id)arg1 setEnabled:(BOOL)arg2 forItemsWithIdentifiers:(id)arg3;
-(void)widgetListEditViewController:(id)arg1 updateFavoritesToIdentifiers:(id)arg2;
-(void)widgetListEditViewController:(id)arg1 didChangeWidgetsPinning:(BOOL)arg2;
-(id)widgetListEditViewController:(id)arg1 defaultGroupForItemWithIdentifier:(id)arg2;
-(BOOL)widgetListEditViewController:(id)arg1 isItemWithIdentifierNew:(id)arg2;

@end
