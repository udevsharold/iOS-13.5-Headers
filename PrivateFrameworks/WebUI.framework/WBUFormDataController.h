/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSFormDataController.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>
#import <libobjc.A.dylib/WBSFormAutoFillCorrectionManagerDelegate.h>
#import <libobjc.A.dylib/WBSFormFieldClassificationCorrectorDelegate.h>

@class WBSFormAutoFillCorrectionManager, WBSFormAutoFillParsecFeedbackProcessor, CNContact, NSString;

@interface WBUFormDataController : WBSFormDataController <MCProfileConnectionObserver, WBSFormAutoFillCorrectionManagerDelegate, WBSFormFieldClassificationCorrectorDelegate> {

	BOOL _savePending;
	WBSFormAutoFillCorrectionManager* _autoFillCorrectionManager;
	WBSFormAutoFillParsecFeedbackProcessor* _autoFillFeedbackProcessor;
	int _cachedAutoFillRestrictionValue;

}

@property (assign,nonatomic) BOOL shouldAutoFillFromCreditCardData; 
@property (assign,nonatomic) BOOL shouldAutoFillPasswords; 
@property (assign,nonatomic) BOOL shouldAutoFillFromAddressBook; 
@property (nonatomic,readonly) CNContact * me; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_meCard;
+(BOOL)keychainSyncEnabled;
+(id)localizedLowercaseContactProperty:(id)arg1 ;
+(BOOL)contactIsMe:(id)arg1 ;
+(id)valueStringForMatch:(id)arg1 ;
+(BOOL)contactStoreHasMeCard:(id)arg1 ;
+(id)_stringForCNContactObject:(id)arg1 contactObjectComponent:(id)arg2 ;
-(void)dealloc;
-(CNContact *)me;
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)prepareMeCard;
-(BOOL)webView:(id)arg1 frame:(id)arg2 willNavigateFromForm:(id)arg3 bySubmitting:(BOOL)arg4 processMetadataCorrections:(BOOL)arg5 uniqueIDsOfControlsThatWereAutoFilled:(id)arg6 submissionHandler:(/*^block*/id)arg7 ;
-(BOOL)shouldAllowPasswordAutoFillOnURL:(id)arg1 allowExternalCredentials:(BOOL)arg2 ;
-(BOOL)mayPreFillInFrame:(id)arg1 ancestorFrames:(id)arg2 ;
-(void)didFillFormWithGeneratedPassword:(id)arg1 inWebView:(id)arg2 frame:(id)arg3 ;
-(void)textDidChangeInForm:(id)arg1 inWebView:(id)arg2 frame:(id)arg3 ;
-(BOOL)shouldAutoGeneratePasswordsForURL:(id)arg1 inWebView:(id)arg2 ;
-(void)gatherValuesForForm:(id)arg1 inFrame:(id)arg2 multiRoundAutoFillManager:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)shouldAutoFillPasswords;
-(void)saveUser:(id)arg1 password:(id)arg2 forURL:(id)arg3 andPromptToUpdateRelatedCredentialsWithWebView:(id)arg4 ;
-(void)didFillFieldWithGeneratedPassword:(id)arg1 inFrame:(id)arg2 webView:(id)arg3 ;
-(BOOL)whiteListAllowsURL:(id)arg1 ;
-(BOOL)mayFillCreditCardDataInFrame:(id)arg1 ;
-(BOOL)shouldAutoFillFromCreditCardData;
-(void)gatherAutoFillDisplayDataWithTextField:(id)arg1 displayedInQuickType:(BOOL)arg2 prefix:(id)arg3 contact:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)saveUnsubmittedGeneratedPasswordInFrame:(id)arg1 form:(id)arg2 closingWebView:(BOOL)arg3 ;
-(id)initWithAggressiveKeychainCaching:(BOOL)arg1 ;
-(BOOL)autoFillCorrectionManagerShouldProcessFeedback:(id)arg1 ;
-(id)feedbackProcessorForAutoFillCorrectionManager:(id)arg1 ;
-(id)completionDBPath;
-(void)saveCompletionDBSoon;
-(id)uniqueIDOfContact:(id)arg1 ;
-(id)addressBookMatchesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3 partialString:(id)arg4 contact:(id)arg5 allowingIdentifiedAddressBookLabelToOverridePreferredIdentifier:(BOOL)arg6 ;
-(id)addressBookMatchesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3 ;
-(BOOL)shouldAutoFillFromPreviousData;
-(BOOL)shouldAutoFillFromAddressBook;
-(id)formAutoFillCorrectionManagerForFormFieldClassificationCorrector:(id)arg1 ;
-(id)formFieldClassificationCorrector:(id)arg1 bestAddressBookLabelForControlValue:(id)arg2 ;
-(BOOL)formFieldClassificationCorrector:(id)arg1 hasAddressBookDataForAddressBookLabel:(id)arg2 ;
-(void)setShouldAutoFillPasswords:(BOOL)arg1 ;
-(void)setShouldAutoFillFromCreditCardData:(BOOL)arg1 ;
-(void)clearAllFormCredentials;
-(id)addressBookMatchesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3 contact:(id)arg4 ;
-(id)_addressBookMatchesForFullNameForContact:(id)arg1 ;
-(id)_addressBookMatchesForGivenNameForContact:(id)arg1 ;
-(id)_addressBookMatchesForMiddleNameForContact:(id)arg1 ;
-(id)_addressBookMatchesForFamilyNameForContact:(id)arg1 ;
-(BOOL)_shouldSaveUsernamesAndPasswordsForURL:(id)arg1 inWebView:(id)arg2 ;
-(BOOL)shouldAutoFillFromCreditCardDataInFrame:(id)arg1 ;
-(id)credentialFromMatches:(id)arg1 completingPartialUserInLoginForm:(id)arg2 ;
-(id)_credentialMatchesEligibleForUpdateForURL:(id)arg1 username:(id)arg2 oldPassword:(id)arg3 ;
-(BOOL)_shouldSaveCreditCardDataInWebView:(id)arg1 frame:(id)arg2 ;
-(void)_showCreditCardPromptForWebView:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_saveUser:(id)arg1 password:(id)arg2 forURL:(id)arg3 formType:(unsigned long long)arg4 promptingPolicy:(long long)arg5 webView:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(id)_relatedCredentialMatchesToUpdateForUser:(id)arg1 protectionSpace:(id)arg2 oldCredential:(id*)arg3 matchesForCurrentHost:(id*)arg4 matchesForAssociatedDomains:(id*)arg5 haveExistingCredentialWithSameUsernameAndDifferentPassword:(BOOL*)arg6 ;
-(void)_replaceCredentialsWithDontSaveMarkerForProtectionSpace:(id)arg1 ;
-(void)_showPasswordPromptForWebView:(id)arg1 formType:(unsigned long long)arg2 username:(id)arg3 host:(id)arg4 hasCredentialForCurrentHost:(BOOL)arg5 existingCredentialMatchesForCurrentHost:(id)arg6 otherSubdomainCredentialMatches:(id)arg7 haveExistingCredentialWithSameUsernameAndDifferentPassword:(BOOL)arg8 completionHandler:(/*^block*/id)arg9 ;
-(BOOL)_webView:(id)arg1 saveUsernameAndPasswordForURL:(id)arg2 fromForm:(id)arg3 inFrame:(id)arg4 username:(id)arg5 password:(id)arg6 isGeneratedPassword:(BOOL)arg7 confirmOverwritingCurrentPassword:(BOOL)arg8 submissionHandler:(/*^block*/id)arg9 ;
-(BOOL)_webView:(id)arg1 saveUsernameAndPasswordFromForm:(id)arg2 inFrame:(id)arg3 confirmOverwritingCurrentPassword:(BOOL)arg4 submissionHandler:(/*^block*/id)arg5 ;
-(BOOL)_webView:(id)arg1 willSubmitFormContainingCreditCardData:(id)arg2 fromFrame:(id)arg3 submissionHandler:(/*^block*/id)arg4 ;
-(void)_warnAboutWeakPasswordIfNecessaryWithWebView:(id)arg1 credential:(id)arg2 protectionSpace:(id)arg3 ;
-(BOOL)_webView:(id)arg1 saveCredentialsForURL:(id)arg2 formSubmission:(BOOL)arg3 formWithMetadata:(id)arg4 fromFrame:(id)arg5 username:(id)arg6 password:(id)arg7 submissionHandler:(/*^block*/id)arg8 ;
-(void)_processCorrectionsForFormWithDomain:(id)arg1 formMetadata:(id)arg2 uniqueIDsOfControlsThatWereAutoFilled:(id)arg3 ;
-(BOOL)_webView:(id)arg1 willSubmitLoginFormWithMetadata:(id)arg2 formSubmission:(BOOL)arg3 fromFrame:(id)arg4 submissionHandler:(/*^block*/id)arg5 ;
-(BOOL)_webView:(id)arg1 willSubmitStandardFormWithMetadata:(id)arg2 fromFrame:(id)arg3 submissionHandler:(/*^block*/id)arg4 ;
-(BOOL)_webView:(id)arg1 formSubmission:(BOOL)arg2 willSubmitNewAccountOrChangePasswordFormWithMetadata:(id)arg3 fromFrame:(id)arg4 submissionHandler:(/*^block*/id)arg5 ;
-(BOOL)_shouldTryToSaveCredentialsFromLastForm:(id)arg1 currentFormMetadata:(id)arg2 frame:(id)arg3 ;
-(BOOL)_updateCredentialsWithGeneratedPasswordForForm:(id)arg1 inWebView:(id)arg2 frame:(id)arg3 ;
-(id)_autoFillCorrectionManager;
-(void)setShouldAutoFillFromAddressBook:(BOOL)arg1 ;
-(id)_credentialForLoginForm:(id)arg1 inFrame:(id)arg2 completingPartialUser:(BOOL)arg3 matches:(id*)arg4 potentialMatches:(id*)arg5 ;
-(id)_relatedCredentialMatchesToUpdateForUser:(id)arg1 protectionSpace:(id)arg2 oldCredential:(id*)arg3 matchesForCurrentHost:(id*)arg4 matchesForAssociatedDomains:(id*)arg5 ;
@end

