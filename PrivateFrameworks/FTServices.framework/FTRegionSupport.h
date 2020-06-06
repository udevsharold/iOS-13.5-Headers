/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, FTMessageDelivery;

@interface FTRegionSupport : NSObject {

	NSArray* _regions;
	FTMessageDelivery* _delivery;

}

@property (retain) FTMessageDelivery * delivery;              //@synthesize delivery=_delivery - In the implementation block
@property (retain) NSArray * regions;                         //@synthesize regions=_regions - In the implementation block
@property (readonly) BOOL isLoaded; 
@property (readonly) BOOL isLoading; 
+(id)sharedInstance;
-(void)dealloc;
-(BOOL)isLoaded;
-(void)startLoading;
-(NSArray *)regions;
-(BOOL)isLoading;
-(void)setRegions:(NSArray *)arg1 ;
-(id)regionForID:(id)arg1 ;
-(FTMessageDelivery *)delivery;
-(void)_buildMessageDeliveryIfNeeded;
-(void)flushRegions;
-(void)setDelivery:(FTMessageDelivery *)arg1 ;
@end

