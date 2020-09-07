/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:36:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItem.h>

@class HMUser;

@interface _HUUserAccessItem : HFItem {

	HMUser* _user;
	/*^block*/id _resultsBlock;

}

@property (nonatomic,readonly) HMUser * user;                     //@synthesize user=_user - In the implementation block
@property (nonatomic,copy,readonly) id resultsBlock;              //@synthesize resultsBlock=_resultsBlock - In the implementation block
-(HMUser *)user;
-(id)resultsBlock;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)initWithUser:(id)arg1 resultsBlock:(/*^block*/id)arg2 ;
@end
