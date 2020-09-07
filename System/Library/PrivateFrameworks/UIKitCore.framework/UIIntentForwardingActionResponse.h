/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:29:49 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSActionResponse.h>

@class INIntentResponse;

@interface UIIntentForwardingActionResponse : BSActionResponse {

	INIntentResponse* _cachedIntentResponse;

}

@property (nonatomic,readonly) INIntentResponse * intentResponse; 
+(id)responseWithIntentResponse:(id)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(INIntentResponse *)intentResponse;
-(id)initWithIntentResponse:(id)arg1 ;
@end
