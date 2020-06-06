/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AMSMediaTaskTypeConfig : NSObject {

	BOOL _includePlatform;
	NSString* _hostBagKey;
	long long _type;
	NSString* _typeString;

}

@property (nonatomic,readonly) NSString * hostBagKey;              //@synthesize hostBagKey=_hostBagKey - In the implementation block
@property (nonatomic,readonly) BOOL includePlatform;               //@synthesize includePlatform=_includePlatform - In the implementation block
@property (nonatomic,readonly) long long type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * typeString;              //@synthesize typeString=_typeString - In the implementation block
+(id)configForType:(long long)arg1 ;
-(long long)type;
-(NSString *)typeString;
-(id)initWithType:(long long)arg1 typeString:(id)arg2 hostBagKey:(id)arg3 includePlatform:(BOOL)arg4 ;
-(NSString *)hostBagKey;
-(BOOL)includePlatform;
@end

