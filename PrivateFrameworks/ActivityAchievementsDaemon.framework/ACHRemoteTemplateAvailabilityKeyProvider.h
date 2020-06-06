/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:46 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HDProfile;

@interface ACHRemoteTemplateAvailabilityKeyProvider : NSObject {

	HDProfile* _profile;

}

@property (nonatomic,__weak,readonly) HDProfile * profile;              //@synthesize profile=_profile - In the implementation block
-(HDProfile *)profile;
-(id)initWithProfile:(id)arg1 ;
-(BOOL)markTemplateAvailable:(id)arg1 error:(id*)arg2 ;
-(id)availabilityStateKeyFromUniqueName:(id)arg1 creatorDevice:(unsigned char)arg2 ;
-(BOOL)templateAvailableOnPairedDevice:(id)arg1 error:(id*)arg2 ;
@end

