/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:58 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, CNContactStore, CNMonogrammer;

@interface HUContactManager : NSObject {

	NSDictionary* _cachedContactByEmails;
	CNContactStore* _contactStore;
	CNMonogrammer* _monogrammer;
	double _monogramDiameter;

}

@property (nonatomic,copy) NSDictionary * cachedContactByEmails;              //@synthesize cachedContactByEmails=_cachedContactByEmails - In the implementation block
@property (nonatomic,readonly) CNContactStore * contactStore;                 //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) CNMonogrammer * monogrammer;                     //@synthesize monogrammer=_monogrammer - In the implementation block
@property (assign,nonatomic) double monogramDiameter;                         //@synthesize monogramDiameter=_monogramDiameter - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(CNContactStore *)contactStore;
-(void)contactStoreDidChange:(id)arg1 ;
-(CNMonogrammer *)monogrammer;
-(void)setMonogrammer:(CNMonogrammer *)arg1 ;
-(double)monogramDiameter;
-(void)setMonogramDiameter:(double)arg1 ;
-(void)setCachedContactByEmails:(NSDictionary *)arg1 ;
-(NSDictionary *)cachedContactByEmails;
-(id)contactForEmailAddress:(id)arg1 keysToFetch:(id)arg2 ;
-(id)userDataFromEmail:(id)arg1 monogramDiameter:(double)arg2 ;
@end

