/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class NSString, CNContactStore, ACAccountStore;

@interface CNDowntimeWhitelist : NSObject {

	NSString* _primaryiCloudContainerIdentifier;
	CNContactStore* _contactStore;
	ACAccountStore* _accountStore;
	id<NSObject> _contactStoreDidChangeNotificationToken;
	id<NSObject> _accountStoreDidChangeNotificationToken;

}

@property (nonatomic,readonly) CNContactStore * contactStore;                                    //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,readonly) ACAccountStore * accountStore;                                    //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,readonly) id<NSObject> contactStoreDidChangeNotificationToken;              //@synthesize contactStoreDidChangeNotificationToken=_contactStoreDidChangeNotificationToken - In the implementation block
@property (nonatomic,readonly) id<NSObject> accountStoreDidChangeNotificationToken;              //@synthesize accountStoreDidChangeNotificationToken=_accountStoreDidChangeNotificationToken - In the implementation block
@property (nonatomic,retain) NSString * primaryiCloudContainerIdentifier;                        //@synthesize primaryiCloudContainerIdentifier=_primaryiCloudContainerIdentifier - In the implementation block
+(id)os_log;
+(BOOL)isWhitelistedContact:(id)arg1 ;
+(BOOL)anyContactIsWhitelisted:(id)arg1 ;
+(id)keyDescriptor;
-(id)init;
-(void)dealloc;
-(CNContactStore *)contactStore;
-(ACAccountStore *)accountStore;
-(id)initWithContactStore:(id)arg1 ;
-(void)beginObservingChangeNotifications;
-(id)requestForContactsInPermittedContainersWithHandles:(id)arg1 ;
-(id)allWhitelistedContacts;
-(id)requestForContactsInPermittedContainers;
-(id)requestForNonUnifiedContacts;
-(id)identifierOfContainerSupporingDowntimeContacts;
-(NSString *)primaryiCloudContainerIdentifier;
-(id)fetchPrimaryiCloudCardDAVContainerIdentifier;
-(id)fetchPrimaryiCloudCardDAVAccountIdentifier;
-(id)whitelistedHandleStringsFromHandleStrings:(id)arg1 ;
-(BOOL)isHandleStringWhitelisted:(id)arg1 ;
-(id)allWhitelistedHandleStrings;
-(void)setTestPrimaryiCloudContainerIdentifier:(id)arg1 ;
-(void)setTestAcountStore:(id)arg1 ;
-(void)setPrimaryiCloudContainerIdentifier:(NSString *)arg1 ;
-(id<NSObject>)contactStoreDidChangeNotificationToken;
-(id<NSObject>)accountStoreDidChangeNotificationToken;
@end

