/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:27 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASPolicyManager.h>

@class NSString;

@interface ASClientPolicyManager : ASPolicyManager {

	NSString* _powerAssertionGroupIdentifier;

}

@property (nonatomic,retain) NSString * powerAssertionGroupIdentifier;              //@synthesize powerAssertionGroupIdentifier=_powerAssertionGroupIdentifier - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)requestPolicyUpdate;
-(void)policyKeyChanged:(id)arg1 ;
-(void)policyFailedToUpdate;
-(void)setPowerAssertionGroupIdentifier:(NSString *)arg1 ;
-(NSString *)powerAssertionGroupIdentifier;
@end
