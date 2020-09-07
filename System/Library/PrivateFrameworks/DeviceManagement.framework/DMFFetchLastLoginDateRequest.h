/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DeviceManagement/DMFTaskRequest.h>

@class NSSet;

@interface DMFFetchLastLoginDateRequest : DMFTaskRequest {

	NSSet* _appleIDs;

}

@property (nonatomic,copy) NSSet * appleIDs;              //@synthesize appleIDs=_appleIDs - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)appleIDs;
-(void)setAppleIDs:(NSSet *)arg1 ;
@end
