/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:01 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKContactsSearchManagerDelegate.h>

@class CKContactsSearchManager, NSArray, NSString;

@interface CKSpringBoardActionManager : NSObject <CKContactsSearchManagerDelegate> {

	BOOL shouldHideGroupsDonations;
	CKContactsSearchManager* _contactsSearchManager;
	NSArray* _conversationCache;

}

@property (nonatomic,retain) CKContactsSearchManager * contactsSearchManager;              //@synthesize contactsSearchManager=_contactsSearchManager - In the implementation block
@property (nonatomic,copy) NSArray * conversationCache;                                    //@synthesize conversationCache=_conversationCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL shouldHideGroupsDonations; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(NSArray *)conversationCache;
-(void)chatStateChanged:(id)arg1 ;
-(void)setConversationCache:(NSArray *)arg1 ;
-(void)setShouldHideGroupsDonations:(BOOL)arg1 ;
-(void)contactsSearchManager:(id)arg1 finishedSearchingWithResults:(id)arg2 ;
-(id)conversationCacheForContactsSearchManager:(id)arg1 ;
-(BOOL)shouldHideGroupsDonations;
-(CKContactsSearchManager *)contactsSearchManager;
-(void)updateShortcutItems;
-(void)setContactsSearchManager:(CKContactsSearchManager *)arg1 ;
@end
