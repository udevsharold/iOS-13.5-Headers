/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol REElementDataSourceControllerDelegate <NSObject>
@required
-(void)elementDataSourceController:(id)arg1 performBatchUpdates:(/*^block*/id)arg2;
-(void)elementDataSourceController:(id)arg1 didRemoveElement:(id)arg2;
-(void)elementDataSourceController:(id)arg1 didAddElement:(id)arg2 toSection:(id)arg3;
-(void)elementDataSourceController:(id)arg1 didReloadElement:(id)arg2;
-(void)elementDataSourceController:(id)arg1 didRefreshElement:(id)arg2;
-(BOOL)elementDataSourceController:(id)arg1 isElementVisible:(id)arg2;

@end

