/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNGeminiManager;

@interface IMSenderIdentityManager : NSObject {

	CNGeminiManager* _geminiManager;

}

@property (nonatomic,retain) CNGeminiManager * geminiManager;              //@synthesize geminiManager=_geminiManager - In the implementation block
+(id)sharedInstance;
+(BOOL)isTUSenderIdentity:(id)arg1 equalToSubscriptionContext:(id)arg2 ;
-(id)init;
-(id)bestSenderIdentityForHandleIDs:(id)arg1 ;
-(id)bestSenderIdentityForHandleID:(id)arg1 contact:(id)arg2 ;
-(id)bestSenderIdentityForGeminiHandle:(id)arg1 contact:(id)arg2 ;
-(CNGeminiManager *)geminiManager;
-(void)setGeminiManager:(CNGeminiManager *)arg1 ;
@end

