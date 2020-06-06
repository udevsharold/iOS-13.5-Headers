/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:15 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSNumber;

@interface FARemoveFamilyMemberRequest : FAFamilyCircleRequest {

	NSNumber* _memberDSID;

}

@property (copy,readonly) NSNumber * memberDSID;              //@synthesize memberDSID=_memberDSID - In the implementation block
-(void)startRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSNumber *)memberDSID;
-(id)initWithFamilyMemberDSID:(id)arg1 ;
@end

