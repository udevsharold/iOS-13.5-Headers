/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:47:26 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FCManagedResourceConfiguration : NSObject <NSCopying> {

	NSString* _resourceID;
	long long _refreshRate;

}

@property (nonatomic,copy,readonly) NSString * resourceID;              //@synthesize resourceID=_resourceID - In the implementation block
@property (nonatomic,readonly) long long refreshRate;                   //@synthesize refreshRate=_refreshRate - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)refreshRate;
-(NSString *)resourceID;
-(id)initWithResourceID:(id)arg1 refreshRate:(long long)arg2 ;
@end

