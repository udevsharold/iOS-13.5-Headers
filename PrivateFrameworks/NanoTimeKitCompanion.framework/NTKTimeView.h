/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:58:38 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NTKTimeView <NSObject>
@property (assign,getter=isFrozen,nonatomic) BOOL frozen; 
@required
-(BOOL)isFrozen;
-(void)setTimeOffset:(double)arg1;
-(void)setFrozen:(BOOL)arg1;
-(void)setOverrideDate:(id)arg1 duration:(double)arg2;

@end

