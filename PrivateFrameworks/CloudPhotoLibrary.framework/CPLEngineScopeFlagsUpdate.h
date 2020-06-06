/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface CPLEngineScopeFlagsUpdate : NSObject {

	long long _flags;
	long long _updatedFlagsMask;

}

@property (nonatomic,readonly) long long updatedFlagsMask;              //@synthesize updatedFlagsMask=_updatedFlagsMask - In the implementation block
@property (nonatomic,readonly) long long flags;                         //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) NSArray * arrayDescription; 
+(id)_arrayDescriptionForFlags:(long long)arg1 remainingFlags:(long long*)arg2 ;
+(id)flagsDescriptionMapping;
+(id)descriptionForFlags:(long long)arg1 ;
-(id)init;
-(id)description;
-(long long)flags;
-(id)initWithFlags:(long long)arg1 ;
-(BOOL)valueForFlag:(long long)arg1 ;
-(void)setValue:(BOOL)arg1 forFlag:(long long)arg2 ;
-(long long)updatedFlagsFromFlags:(long long)arg1 ;
-(NSArray *)arrayDescription;
-(long long)updatedFlagsMask;
@end

