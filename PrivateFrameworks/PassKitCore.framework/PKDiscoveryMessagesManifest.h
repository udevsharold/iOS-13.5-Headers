/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface PKDiscoveryMessagesManifest : NSObject {

	long long _version;
	NSArray* _engagementMessages;
	NSArray* _notifications;

}

@property (nonatomic,readonly) long long version;                         //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSArray * engagementMessages;              //@synthesize engagementMessages=_engagementMessages - In the implementation block
@property (nonatomic,readonly) NSArray * notifications;                   //@synthesize notifications=_notifications - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(long long)version;
-(NSArray *)notifications;
-(NSArray *)engagementMessages;
@end

