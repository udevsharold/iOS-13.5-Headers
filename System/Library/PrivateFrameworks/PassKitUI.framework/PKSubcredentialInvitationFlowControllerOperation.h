/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class PKSubcredentialInvitationFlowControllerContext;


@protocol PKSubcredentialInvitationFlowControllerOperation <PKSubcredentialProvisioningFlowControllerOperation>
@property (nonatomic,readonly) unsigned long long operation; 
@property (nonatomic,readonly) id<PKSubcredentialInvitationFlowControllerProtocol> flowController; 
@property (nonatomic,retain) PKSubcredentialInvitationFlowControllerContext * provisioningContext; 
@required
-(unsigned long long)operation;
-(id)initWithFlowController:(id)arg1 context:(id)arg2;
-(id<PKSubcredentialInvitationFlowControllerProtocol>)flowController;
-(PKSubcredentialInvitationFlowControllerContext *)provisioningContext;
-(void)setProvisioningContext:(id)arg1;

@end

