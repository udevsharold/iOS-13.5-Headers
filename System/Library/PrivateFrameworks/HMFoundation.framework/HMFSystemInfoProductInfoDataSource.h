/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:31 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol HMFSystemInfoProductInfoDataSource <NSObject>
@property (nonatomic,readonly) long long productPlatform; 
@property (nonatomic,readonly) long long productClass; 
@property (nonatomic,readonly) long long productVariant; 
@property (nonatomic,copy,readonly) NSString * modelIdentifier; 
@required
-(NSString *)modelIdentifier;
-(long long)productClass;
-(long long)productVariant;
-(long long)productPlatform;

@end
