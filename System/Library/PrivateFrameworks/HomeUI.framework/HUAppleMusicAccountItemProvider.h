/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemProvider.h>

@protocol HFMediaProfileContainer;
@class NSMutableSet;

@interface HUAppleMusicAccountItemProvider : HFItemProvider {

	NSMutableSet* _items;
	id<HFMediaProfileContainer> _mediaProfileContainer;
	/*^block*/id _filter;

}

@property (nonatomic,retain) NSMutableSet * items;                                             //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfileContainer;              //@synthesize mediaProfileContainer=_mediaProfileContainer - In the implementation block
@property (nonatomic,copy) id filter;                                                          //@synthesize filter=_filter - In the implementation block
-(NSMutableSet *)items;
-(void)setItems:(NSMutableSet *)arg1 ;
-(void)setFilter:(id)arg1 ;
-(id)filter;
-(id)reloadItems;
-(id)invalidationReasons;
-(id)initWithMediaProfileContainer:(id)arg1 ;
-(id<HFMediaProfileContainer>)mediaProfileContainer;
@end
