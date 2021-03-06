/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:22 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Home/HFServiceItemProvider.h>

@class HMUser;

@interface HFAccessoryInvitationServiceItemProvider : HFServiceItemProvider {

	HMUser* _user;

}

@property (nonatomic,readonly) HMUser * user;              //@synthesize user=_user - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMUser *)user;
-(/*^block*/id)filter;
-(id)invalidationReasons;
-(id)initWithHome:(id)arg1 serviceTypes:(id)arg2 ;
-(id)initWithHome:(id)arg1 user:(id)arg2 ;
@end

