/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:39:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CKFetchShareParticipantsOperationInfo : CKOperationInfo <NSSecureCoding> {

	NSArray* _userIdentityLookupInfos;

}

@property (nonatomic,copy) NSArray * userIdentityLookupInfos;              //@synthesize userIdentityLookupInfos=_userIdentityLookupInfos - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setUserIdentityLookupInfos:(NSArray *)arg1 ;
-(NSArray *)userIdentityLookupInfos;
@end

