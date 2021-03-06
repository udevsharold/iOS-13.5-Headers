/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemProvider.h>

@protocol HFCharacteristicValueSource;
@class HMAccessory, HFAccessoryItem, NSSet;

@interface HFAccessoryControlItemProvider : HFItemProvider {

	HMAccessory* _accessory;
	HFAccessoryItem* _accessoryItem;
	id<HFCharacteristicValueSource> _valueSource;
	NSSet* _previousControlItems;

}

@property (nonatomic,retain) HMAccessory * accessory;                                  //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,retain) HFAccessoryItem * accessoryItem;                          //@synthesize accessoryItem=_accessoryItem - In the implementation block
@property (nonatomic,retain) id<HFCharacteristicValueSource> valueSource;              //@synthesize valueSource=_valueSource - In the implementation block
@property (nonatomic,retain) NSSet * previousControlItems;                             //@synthesize previousControlItems=_previousControlItems - In the implementation block
-(id)items;
-(HMAccessory *)accessory;
-(void)setAccessory:(HMAccessory *)arg1 ;
-(id)reloadItems;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)invalidationReasons;
-(void)setValueSource:(id<HFCharacteristicValueSource>)arg1 ;
-(void)setAccessoryItem:(HFAccessoryItem *)arg1 ;
-(HFAccessoryItem *)accessoryItem;
-(NSSet *)previousControlItems;
-(void)setPreviousControlItems:(NSSet *)arg1 ;
-(id)initWithAccessoryItem:(id)arg1 ;
@end

