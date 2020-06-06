/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskRequest.h>

@class CRKCourseInvitation;

@interface CRKJoinControlGroupRequest : CATTaskRequest {

	CRKCourseInvitation* _invitation;

}

@property (nonatomic,retain) CRKCourseInvitation * invitation;              //@synthesize invitation=_invitation - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CRKCourseInvitation *)invitation;
-(void)setInvitation:(CRKCourseInvitation *)arg1 ;
@end

