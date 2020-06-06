/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:20 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNUICoreScreentimePasscodeCheck, CNUICoreParentContainerProvider;
@class CNContact, CNContainer;

@interface CNUICoreEditAuthorizationCheck : NSObject {

	BOOL _ignoresParentalRestrictions;
	CNContact* _contact;
	CNContainer* _parentContainer;
	id<CNUICoreScreentimePasscodeCheck> _screenTimePasscodeStatusCheck;
	id<CNUICoreParentContainerProvider> _linkedParentContainerProvider;

}

@property (nonatomic,readonly) CNContact * contact;                                                            //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) CNContainer * parentContainer;                                                  //@synthesize parentContainer=_parentContainer - In the implementation block
@property (nonatomic,readonly) BOOL ignoresParentalRestrictions;                                               //@synthesize ignoresParentalRestrictions=_ignoresParentalRestrictions - In the implementation block
@property (nonatomic,readonly) id<CNUICoreScreentimePasscodeCheck> screenTimePasscodeStatusCheck;              //@synthesize screenTimePasscodeStatusCheck=_screenTimePasscodeStatusCheck - In the implementation block
@property (nonatomic,readonly) id<CNUICoreParentContainerProvider> linkedParentContainerProvider;              //@synthesize linkedParentContainerProvider=_linkedParentContainerProvider - In the implementation block
+(id)log;
+(id)containerProviderWithContactStore:(id)arg1 ;
+(BOOL)isAuthorizationPasscodeEnabledOnDevice;
-(CNContact *)contact;
-(BOOL)ignoresParentalRestrictions;
-(CNContainer *)parentContainer;
-(BOOL)shouldPromptForPasscodeAuthorization;
-(id)initWithContact:(id)arg1 parentContainer:(id)arg2 ignoresParentalRestrictions:(BOOL)arg3 linkedParentContainerProvider:(id)arg4 ;
-(BOOL)shouldBypassRestrictionsGivenAuthorizationResult:(long long)arg1 ;
-(id)initWithContact:(id)arg1 parentContainer:(id)arg2 ignoresParentalRestrictions:(BOOL)arg3 ;
-(id)initWithContact:(id)arg1 parentContainer:(id)arg2 ignoresParentalRestrictions:(BOOL)arg3 screenTimePasscodeStatusCheck:(id)arg4 linkedParentContainerProvider:(id)arg5 ;
-(BOOL)canPerformValidAuthorizationCheck;
-(BOOL)shouldRespectParentalRestrictions;
-(BOOL)editAltersRestrictedInformation;
-(BOOL)authorizationPasscodeEnabledOnDevice;
-(id<CNUICoreParentContainerProvider>)linkedParentContainerProvider;
-(id<CNUICoreScreentimePasscodeCheck>)screenTimePasscodeStatusCheck;
@end

