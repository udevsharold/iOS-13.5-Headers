/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NAIdentifiable.h>

@class NSString;

@interface HFMediaAccessControlDescriptor : NSObject <NAIdentifiable> {

	BOOL _accessRequiresPassword;
	unsigned long long _access;
	NSString* _accessPassword;

}

@property (nonatomic,readonly) unsigned long long access;                   //@synthesize access=_access - In the implementation block
@property (nonatomic,readonly) BOOL accessSupportsPassword; 
@property (nonatomic,readonly) BOOL accessRequiresPassword;                 //@synthesize accessRequiresPassword=_accessRequiresPassword - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessPassword;              //@synthesize accessPassword=_accessPassword - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)na_identity;
+(id)descriptorWithAccess:(unsigned long long)arg1 requiresPassword:(BOOL)arg2 password:(id)arg3 ;
+(BOOL)accessClassificationSupportsPassword:(unsigned long long)arg1 ;
+(id)defaultAccessControl;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(unsigned long long)access;
-(BOOL)accessSupportsPassword;
-(BOOL)accessRequiresPassword;
-(NSString *)accessPassword;
-(id)initWithAccess:(unsigned long long)arg1 requiresPassword:(BOOL)arg2 password:(id)arg3 ;
@end

