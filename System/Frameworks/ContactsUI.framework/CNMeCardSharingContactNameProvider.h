/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:41:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNMeCardSharingNameProvider.h>

@class CNContact, NSString;

@interface CNMeCardSharingContactNameProvider : NSObject <CNMeCardSharingNameProvider> {

	CNContact* _contact;

}

@property (nonatomic,readonly) CNContact * contact;                 //@synthesize contact=_contact - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)descriptorForRequiredKeys;
-(id)givenName;
-(id)familyName;
-(id)middleName;
-(id)nickname;
-(CNContact *)contact;
-(id)initWithContact:(id)arg1 ;
@end

