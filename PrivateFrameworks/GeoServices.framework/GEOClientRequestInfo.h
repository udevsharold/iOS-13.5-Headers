/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary;

@interface GEOClientRequestInfo : NSObject {

	NSMutableDictionary* _requests;

}

@property (nonatomic,readonly) NSDictionary * requests;              //@synthesize requests=_requests - In the implementation block
-(id)init;
-(NSDictionary *)requests;
-(unsigned long long)countForRequestType:(unsigned char)arg1 ;
-(void)incrementCountForRequestType:(unsigned char)arg1 ;
@end

