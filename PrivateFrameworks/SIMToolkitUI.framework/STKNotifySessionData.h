/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:52:47 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SIMToolkitUI.framework/SIMToolkitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SIMToolkitUI/STKTextSessionData.h>

@interface STKNotifySessionData : STKTextSessionData {

	long long _notifyType;

}

@property (nonatomic,readonly) long long notifyType;              //@synthesize notifyType=_notifyType - In the implementation block
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(long long)notifyType;
-(id)initWithText:(id)arg1 notifyType:(long long)arg2 ;
@end

