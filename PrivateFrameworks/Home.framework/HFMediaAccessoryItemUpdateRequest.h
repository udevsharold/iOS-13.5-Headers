/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:19 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HFMediaValueSource, HFCharacteristicValueSource, HFMediaProfileContainer;
@class HMHome;

@interface HFMediaAccessoryItemUpdateRequest : NSObject {

	id<HFMediaValueSource> _mediaValueSource;
	HMHome* _home;
	id<HFCharacteristicValueSource> _valueSource;
	id<HFMediaProfileContainer> _mediaProfile;

}

@property (nonatomic,readonly) HMHome * home;                                            //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) id<HFCharacteristicValueSource> valueSource;              //@synthesize valueSource=_valueSource - In the implementation block
@property (nonatomic,readonly) id<HFMediaValueSource> mediaValueSource;                  //@synthesize mediaValueSource=_mediaValueSource - In the implementation block
@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfile;                 //@synthesize mediaProfile=_mediaProfile - In the implementation block
-(id)init;
-(HMHome *)home;
-(id<HFMediaProfileContainer>)mediaProfile;
-(id)accessories;
-(id<HFCharacteristicValueSource>)valueSource;
-(id)updateWithOptions:(id)arg1 ;
-(id<HFMediaValueSource>)mediaValueSource;
-(id)initWithMediaProfileContainer:(id)arg1 valueSource:(id)arg2 ;
-(id)_parentMediaSystem;
-(void)_appendSplitMediaAccountErrorIfNeededForAccessory:(id)arg1 toResults:(id)arg2 ;
-(void)_appendRestartStatusMessageForAccessory:(id)arg1 toResults:(id)arg2 ;
-(id)_disambiguateMultipleAccessoryResponses:(id)arg1 forMediaSystem:(id)arg2 ;
-(void)_appendSplitMediaAccountErrorForAccessory:(id)arg1 toResults:(id)arg2 ;
@end

