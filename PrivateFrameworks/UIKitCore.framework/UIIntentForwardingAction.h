/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class INIntent;

@interface UIIntentForwardingAction : BSAction {

	INIntent* _cachedIntent;

}

@property (nonatomic,readonly) INIntent * intent; 
-(INIntent *)intent;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(long long)UIActionType;
-(id)initWithIntent:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

