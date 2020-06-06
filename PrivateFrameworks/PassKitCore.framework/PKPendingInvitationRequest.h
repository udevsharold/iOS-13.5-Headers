/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PKAppletSubcredentialSharingInvitation;

@interface PKPendingInvitationRequest : NSObject {

	/*^block*/id _completion;
	PKAppletSubcredentialSharingInvitation* _invitation;

}

@property (nonatomic,readonly) PKAppletSubcredentialSharingInvitation * invitation;              //@synthesize invitation=_invitation - In the implementation block
-(PKAppletSubcredentialSharingInvitation *)invitation;
-(id)initWithInvitation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)invokeCompletionWithInvitation:(id)arg1 error:(id)arg2 ;
@end

