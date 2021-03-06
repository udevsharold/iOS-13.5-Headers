/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:44 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CarKit/CarKit-Structs.h>
@class NSString;

@interface CARInputDevice : NSObject {

	NSString* _UUID;
	unsigned long long _senderID;

}

@property (nonatomic,readonly) NSString * UUID;                          //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,readonly) unsigned long long senderID;              //@synthesize senderID=_senderID - In the implementation block
-(NSString *)UUID;
-(void)_setUUID:(id)arg1 ;
-(unsigned long long)senderID;
-(void)_setSenderID:(unsigned long long)arg1 ;
-(id)initWithServiceClient:(IOHIDServiceClientRef)arg1 UUID:(id)arg2 ;
@end

