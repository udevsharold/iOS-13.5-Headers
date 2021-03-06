/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNUIUserActionCurator.h>

@protocol CNLSApplicationWorkspace;
@class CNContactStore, NSString;

@interface _CNUIUserActionCurator : NSObject <CNUIUserActionCurator> {

	CNContactStore* _contactStore;
	id<CNLSApplicationWorkspace> _applicationWorkspace;

}

@property (nonatomic,retain) CNContactStore * contactStore;                                  //@synthesize contactStore=_contactStore - In the implementation block
@property (nonatomic,retain) id<CNLSApplicationWorkspace> applicationWorkspace;              //@synthesize applicationWorkspace=_applicationWorkspace - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(id)initWithContactStore:(id)arg1 applicationWorkspace:(id)arg2 ;
-(id<CNLSApplicationWorkspace>)applicationWorkspace;
-(void)setApplicationWorkspace:(id<CNLSApplicationWorkspace>)arg1 ;
-(id)curateUserAction:(id)arg1 ;
@end

