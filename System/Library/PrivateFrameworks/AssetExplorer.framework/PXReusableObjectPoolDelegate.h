/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PXReusableObjectPoolDelegate <NSObject>
@optional
-(void)reusableObjectPool:(id)arg1 didCreateReusableObject:(id)arg2;
-(void)reusableObjectPool:(id)arg1 objectBecameReusable:(id)arg2;
-(void)reusableObjectPool:(id)arg1 objectPreparedForReuse:(id)arg2;
-(void)reusableObjectPool:(id)arg1 didEvictReusableObject:(id)arg2;

@end

