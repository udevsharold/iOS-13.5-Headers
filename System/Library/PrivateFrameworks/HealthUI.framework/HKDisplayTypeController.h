/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_HKWheelchairUseCharacteristicCacheObserver.h>

@class _HKWheelchairUseCharacteristicCache, NSArray, NSDictionary;

@interface HKDisplayTypeController : NSObject <_HKWheelchairUseCharacteristicCacheObserver> {

	_HKWheelchairUseCharacteristicCache* _wheelchairUseCharacteristicCache;
	NSArray* _displayTypes;
	NSDictionary* _displayTypesByIdentifier;
	NSDictionary* _displayTypesByCategoryIdentifier;
	NSDictionary* _displayTypesByObjectType;

}
+(id)sharedInstance;
-(id)init;
-(void)wheelchairUseCharacteristicCache:(id)arg1 wheelchairUsageDidChange:(BOOL)arg2 ;
-(id)displayTypeForObjectType:(id)arg1 ;
-(id)displayTypeWithIdentifier:(id)arg1 ;
-(void)setWheelchairUseCharacteristicCache:(id)arg1 ;
-(id)displayTypeForObjectTypeUnifyingBloodPressureTypes:(id)arg1 ;
-(id)allDisplayTypes;
-(id)displayTypesForCategoryIdentifier:(long long)arg1 ;
@end
