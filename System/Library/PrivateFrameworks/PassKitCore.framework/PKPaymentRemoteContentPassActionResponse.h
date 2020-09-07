/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class PKPaymentPassAction;

@interface PKPaymentRemoteContentPassActionResponse : PKPaymentWebServiceResponse {

	PKPaymentPassAction* _updatedAction;

}

@property (nonatomic,retain) PKPaymentPassAction * updatedAction;              //@synthesize updatedAction=_updatedAction - In the implementation block
-(id)initWithExistingAction:(id)arg1 data:(id)arg2 ;
-(PKPaymentPassAction *)updatedAction;
-(void)setUpdatedAction:(PKPaymentPassAction *)arg1 ;
@end
