/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SPFinderStateManagement <NSObject>
@property (nonatomic,copy) id stateInfoChangedBlock; 
@required
-(void)start;
-(void)stateInfoWithCompletion:(/*^block*/id)arg1;
-(id)stateInfoChangedBlock;
-(void)setStateInfoChangedBlock:(/*^block*/id)arg1;

@end
