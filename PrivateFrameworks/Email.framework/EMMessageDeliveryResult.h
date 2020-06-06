/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError;

@interface EMMessageDeliveryResult : NSObject <NSSecureCoding> {

	long long _status;
	NSError* _error;

}

@property (nonatomic,readonly) long long status;              //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) NSError * error;               //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(long long)status;
-(id)initWithStatus:(long long)arg1 error:(id)arg2 ;
@end

