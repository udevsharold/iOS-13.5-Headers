/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface CRKFetchCoursePermissionsResultObject : CATTaskResultObject {

	NSDictionary* _permissionsByFeature;

}

@property (nonatomic,copy) NSDictionary * permissionsByFeature;              //@synthesize permissionsByFeature=_permissionsByFeature - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)permissionsByFeature;
-(void)setPermissionsByFeature:(NSDictionary *)arg1 ;
@end

