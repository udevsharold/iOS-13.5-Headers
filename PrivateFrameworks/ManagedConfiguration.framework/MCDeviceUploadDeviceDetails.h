/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:37:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MCDeviceUploadDeviceDetails : NSObject <NSSecureCoding> {

	NSString* _serialNumber;
	NSString* _deviceUploadStatus;
	NSString* _errorMessage;

}

@property (nonatomic,readonly) NSString * serialNumber;                    //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,readonly) NSString * deviceUploadStatus;              //@synthesize deviceUploadStatus=_deviceUploadStatus - In the implementation block
@property (nonatomic,readonly) NSString * errorMessage;                    //@synthesize errorMessage=_errorMessage - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDict:(id)arg1 ;
-(NSString *)serialNumber;
-(NSString *)deviceUploadStatus;
-(NSString *)errorMessage;
@end

