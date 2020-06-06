/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:51 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HFTriggerBuilder;

@interface HUTriggerBuilderItem : HFItem <NSCopying> {

	HFTriggerBuilder* _triggerBuilder;
	unsigned long long _nameType;

}

@property (nonatomic,readonly) HFTriggerBuilder * triggerBuilder;              //@synthesize triggerBuilder=_triggerBuilder - In the implementation block
@property (nonatomic,readonly) unsigned long long nameType;                    //@synthesize nameType=_nameType - In the implementation block
+(id)_detailedErrorDescriptionForForceDisableReasons:(unsigned long long)arg1 inHome:(id)arg2 ;
+(id)settingsURLForForceDisableReasons:(unsigned long long)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)nameType;
-(unsigned long long)_triggerType;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(HFTriggerBuilder *)triggerBuilder;
-(id)initWithTriggerBuilder:(id)arg1 nameType:(unsigned long long)arg2 ;
-(id)_resultsForTriggerConditions;
-(id)_forceDisableReasons;
@end

