/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SFPasswordServiceViewController.h>
#import <libobjc.A.dylib/SFPasswordSavingServiceViewControllerProtocol.h>

@class NSArray, NSString, NSURLCredential, SFPasswordAlertController;

@interface SFPasswordSavingServiceViewController : SFPasswordServiceViewController <SFPasswordSavingServiceViewControllerProtocol> {

	long long _action;
	NSArray* _protectionSpacesToUpdate;
	NSString* _domainForSaving;
	NSURLCredential* _credential;
	NSString* _tokenForShowingPrompt;
	SFPasswordAlertController* _prompt;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
-(void)_dismiss;
-(void)credentialsSubmittedForWebsiteURL:(id)arg1 user:(id)arg2 password:(id)arg3 passwordIsAutoGenerated:(BOOL)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)showPromptWithToken:(id)arg1 style:(long long)arg2 ;
-(void)_saveCredential;
-(void)_updateCredential;
@end
