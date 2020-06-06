/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:06 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNContactChangesObserver;
@class NSArray, CNContact;

@interface CNContactChangesObserverProxy : NSObject {

	BOOL _unify;
	id<CNContactChangesObserver> _observer;
	NSArray* _keysToFetch;
	CNContact* _contactSnapshot;

}

@property (assign,nonatomic,__weak) id<CNContactChangesObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,retain) NSArray * keysToFetch;                                     //@synthesize keysToFetch=_keysToFetch - In the implementation block
@property (assign,nonatomic) BOOL unify;                                                //@synthesize unify=_unify - In the implementation block
@property (nonatomic,retain) CNContact * contactSnapshot;                               //@synthesize contactSnapshot=_contactSnapshot - In the implementation block
-(id<CNContactChangesObserver>)observer;
-(void)setObserver:(id<CNContactChangesObserver>)arg1 ;
-(NSArray *)keysToFetch;
-(void)setKeysToFetch:(NSArray *)arg1 ;
-(BOOL)unify;
-(void)setUnify:(BOOL)arg1 ;
-(CNContact *)contactSnapshot;
-(void)setContactSnapshot:(CNContact *)arg1 ;
@end

