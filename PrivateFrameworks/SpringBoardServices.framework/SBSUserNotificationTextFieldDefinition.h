/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardServices/SpringBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString;

@interface SBSUserNotificationTextFieldDefinition : NSObject <NSCopying, NSMutableCopying> {

	NSString* _title;
	NSString* _value;
	BOOL _isSecure;
	BOOL _hasSetMaxLength;
	unsigned long long _maxLength;
	long long _keyboardType;
	long long _autocorrectionType;
	long long _autocapitalizationType;

}

@property (nonatomic,readonly) BOOL _hasSetMaxLength;                         //@synthesize hasSetMaxLength=_hasSetMaxLength - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * value;                         //@synthesize value=_value - In the implementation block
@property (getter=isSecure,nonatomic,readonly) BOOL secure;                   //@synthesize isSecure=_isSecure - In the implementation block
@property (nonatomic,readonly) unsigned long long maxLength;                  //@synthesize maxLength=_maxLength - In the implementation block
@property (nonatomic,readonly) long long keyboardType;                        //@synthesize keyboardType=_keyboardType - In the implementation block
@property (nonatomic,readonly) long long autocapitalizationType;              //@synthesize autocapitalizationType=_autocapitalizationType - In the implementation block
@property (nonatomic,readonly) long long autocorrectionType;                  //@synthesize autocorrectionType=_autocorrectionType - In the implementation block
+(id)_definitionsFromSerializedDefinitions:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)value;
-(NSString *)title;
-(long long)keyboardType;
-(id)build;
-(BOOL)isSecure;
-(long long)autocorrectionType;
-(long long)autocapitalizationType;
-(unsigned long long)maxLength;
-(id)_initWithDictionary:(id)arg1 ;
-(void)_copyPropertiesToDefinition:(id)arg1 ;
-(BOOL)_hasSetMaxLength;
@end

