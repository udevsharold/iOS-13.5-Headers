/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IXCoordinatorWithAppAssetPromise <NSObject>
@property (nonatomic,readonly) BOOL hasAppAssetPromise; 
@required
-(BOOL)setAppAssetPromise:(id)arg1 error:(id*)arg2;
-(id)appAssetPromiseWithError:(id*)arg1;
-(BOOL)setAppAssetPromiseResponsibleClient:(unsigned long long)arg1 error:(id*)arg2;
-(unsigned long long)appAssetPromiseResponsibleClientWithError:(id*)arg1;
-(BOOL)appAssetPromiseHasBegunFulfillment:(BOOL*)arg1 error:(id*)arg2;
-(BOOL)hasAppAssetPromise;

@end

