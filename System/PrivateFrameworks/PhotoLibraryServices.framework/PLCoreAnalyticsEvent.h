/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary, NSDictionary;

@interface PLCoreAnalyticsEvent : NSObject {

	NSString* _event;
	NSMutableDictionary* _mutablePayload;

}

@property (readonly) NSDictionary * payload; 
-(id)description;
-(void)publish;
-(NSDictionary *)payload;
-(void)removeKey:(id)arg1 ;
-(id)initWithEvent:(id)arg1 payload:(id)arg2 ;
-(void)addKey:(id)arg1 value:(id)arg2 ;
-(void)mergePayload:(id)arg1 ;
@end

