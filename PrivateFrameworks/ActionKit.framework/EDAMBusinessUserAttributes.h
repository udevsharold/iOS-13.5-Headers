/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:41 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSString, NSNumber;

@interface EDAMBusinessUserAttributes : FATObject {

	NSString* _title;
	NSString* _location;
	NSString* _department;
	NSString* _mobilePhone;
	NSString* _linkedInProfileUrl;
	NSString* _workPhone;
	NSNumber* _companyStartDate;

}

@property (nonatomic,retain) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * location;                        //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSString * department;                      //@synthesize department=_department - In the implementation block
@property (nonatomic,retain) NSString * mobilePhone;                     //@synthesize mobilePhone=_mobilePhone - In the implementation block
@property (nonatomic,retain) NSString * linkedInProfileUrl;              //@synthesize linkedInProfileUrl=_linkedInProfileUrl - In the implementation block
@property (nonatomic,retain) NSString * workPhone;                       //@synthesize workPhone=_workPhone - In the implementation block
@property (nonatomic,retain) NSNumber * companyStartDate;                //@synthesize companyStartDate=_companyStartDate - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)location;
-(void)setLocation:(NSString *)arg1 ;
-(NSString *)department;
-(NSString *)workPhone;
-(NSString *)mobilePhone;
-(void)setWorkPhone:(NSString *)arg1 ;
-(void)setMobilePhone:(NSString *)arg1 ;
-(void)setDepartment:(NSString *)arg1 ;
-(NSString *)linkedInProfileUrl;
-(void)setLinkedInProfileUrl:(NSString *)arg1 ;
-(NSNumber *)companyStartDate;
-(void)setCompanyStartDate:(NSNumber *)arg1 ;
@end

