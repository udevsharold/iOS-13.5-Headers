/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _INSiriAuthorizationManagerExport <NSObject,JSExport>
@required
+(long long)_siriAuthorizationStatusForAppID:(id)arg1;
+(void)_requestSiriAuthorization:(/*^block*/id)arg1 auditToken:(SCD_Struct_IN2)arg2;
+(BOOL)_isSiriAuthorizationRestricted;
-(id)init;

@end

