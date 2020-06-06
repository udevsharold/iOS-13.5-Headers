/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFItem.h>
#import <libobjc.A.dylib/HFItemBuilderItem.h>
#import <libobjc.A.dylib/HFServiceLikeItem.h>

@protocol HFServiceLikeItem;
@class HFAccessoryBuilder, HFItem, NSString, HMHome, NSSet;

@interface HFAccessoryBuilderItem : HFItem <HFItemBuilderItem, HFServiceLikeItem> {

	HFAccessoryBuilder* _accessoryBuilder;
	HFItem*<HFServiceLikeItem> _accessoryItem;

}

@property (nonatomic,retain) HFAccessoryBuilder * accessoryBuilder;                      //@synthesize accessoryBuilder=_accessoryBuilder - In the implementation block
@property (nonatomic,retain) HFItem*<HFServiceLikeItem> accessoryItem;                   //@synthesize accessoryItem=_accessoryItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<HFHomeKitObject> homeKitObject; 
@property (nonatomic,readonly) HMHome * home; 
@property (nonatomic,readonly) NSSet * services; 
@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)services;
-(id)accessories;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)copyWithValueSource:(id)arg1 ;
-(id<HFHomeKitObject>)homeKitObject;
-(id)namingComponentForHomeKitObject;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithAccessoryBuilder:(id)arg1 valueSource:(id)arg2 ;
-(void)setAccessoryBuilder:(HFAccessoryBuilder *)arg1 ;
-(void)setAccessoryItem:(HFItem*<HFServiceLikeItem>)arg1 ;
-(HFAccessoryBuilder *)accessoryBuilder;
-(HFItem*<HFServiceLikeItem>)accessoryItem;
@end

