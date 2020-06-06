/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:58:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol REUIRelevanceEngineControllerDelegate <NSObject>
@optional
-(void)engineController:(id)arg1 performBatchUpdateBlock:(/*^block*/id)arg2 completion:(/*^block*/id)arg3;
-(BOOL)engineController:(id)arg1 isElementAtIndexPathVisible:(id)arg2;
-(void)engineControllerDidBeginUpdatingRelevance:(id)arg1;
-(void)engineControllerDidFinishUpdatingRelevance:(id)arg1;
-(void)engineController:(id)arg1 didReloadContent:(id)arg2 withIdentifier:(id)arg3;
-(void)engineController:(id)arg1 didReloadElement:(id)arg2;

@required
-(void)engineController:(id)arg1 didReloadContent:(id)arg2 atIndexPath:(id)arg3;
-(void)engineController:(id)arg1 didRemoveContent:(id)arg2 atIndexPath:(id)arg3;
-(void)engineController:(id)arg1 didInsertContent:(id)arg2 atIndexPath:(id)arg3;
-(void)engineController:(id)arg1 didMoveContent:(id)arg2 fromIndexPath:(id)arg3 toIndexPath:(id)arg4;

@end

