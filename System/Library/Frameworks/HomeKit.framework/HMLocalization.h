/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HMFUnfairLock, NSDictionary;

@interface HMLocalization : NSObject {

	HMFUnfairLock* _lock;
	NSDictionary* _localizedStrings;

}

@property (nonatomic,readonly) NSDictionary * localizedStrings;              //@synthesize localizedStrings=_localizedStrings - In the implementation block
+(id)sharedManager;
-(id)init;
-(NSDictionary *)localizedStrings;
-(id)getLocalizedOrCustomString:(id)arg1 ;
-(id)getLocalizedString:(id)arg1 ;
-(void)_updateLocalizedStrings;
-(void)handleLocaleDidChange:(id)arg1 ;
@end

