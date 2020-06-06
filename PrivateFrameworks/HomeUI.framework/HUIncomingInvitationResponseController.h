/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HUIncomingInvitationResponseControllerDelegate;
@class HMIncomingHomeInvitation, NSError;

@interface HUIncomingInvitationResponseController : NSObject {

	id<HUIncomingInvitationResponseControllerDelegate> _delegate;
	HMIncomingHomeInvitation* _invitation;
	unsigned long long _state;
	unsigned long long _response;
	NSError* _error;

}

@property (assign,nonatomic) unsigned long long state;                                                          //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long response;                                                       //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSError * error;                                                                   //@synthesize error=_error - In the implementation block
@property (nonatomic,__weak,readonly) id<HUIncomingInvitationResponseControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) HMIncomingHomeInvitation * invitation;                                           //@synthesize invitation=_invitation - In the implementation block
-(id)init;
-(id<HUIncomingInvitationResponseControllerDelegate>)delegate;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(unsigned long long)response;
-(void)setResponse:(unsigned long long)arg1 ;
-(HMIncomingHomeInvitation *)invitation;
-(id)_acceptInvitation;
-(id)initWithDelegate:(id)arg1 invitation:(id)arg2 ;
-(id)_declineInvitation;
-(void)respondToInvitationWithResponse:(unsigned long long)arg1 ;
@end

