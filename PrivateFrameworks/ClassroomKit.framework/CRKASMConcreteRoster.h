/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRKASMRoster.h>

@protocol CRKASMOrganization, CRKASMUser;
@class NSArray, NSSet, CRKASMCertificateVendor, NSString;

@interface CRKASMConcreteRoster : NSObject <CRKASMRoster> {

	id<CRKASMOrganization> _organization;
	id<CRKASMUser> _user;
	NSArray* _courses;
	CRKASMCertificateVendor* _certificateVendor;

}

@property (nonatomic,readonly) CRKASMCertificateVendor * certificateVendor;              //@synthesize certificateVendor=_certificateVendor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<CRKASMOrganization> organization;                      //@synthesize organization=_organization - In the implementation block
@property (nonatomic,readonly) id<CRKASMUser> user;                                      //@synthesize user=_user - In the implementation block
@property (nonatomic,copy,readonly) NSArray * courses;                                   //@synthesize courses=_courses - In the implementation block
@property (nonatomic,copy,readonly) NSSet * allTrustedUserCertificates; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id<CRKASMUser>)user;
-(id<CRKASMOrganization>)organization;
-(CRKASMCertificateVendor *)certificateVendor;
-(id)allTrustedUserIdentifiers;
-(NSArray *)courses;
-(NSSet *)allTrustedUserCertificates;
-(id)initWithOrganization:(id)arg1 user:(id)arg2 courses:(id)arg3 certificateVendor:(id)arg4 ;
@end

