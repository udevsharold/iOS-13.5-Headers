/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/_SFDialog.h>

@class WebUIAlert;

@interface SFWebUIDialog : _SFDialog {

	int _finalAction;
	/*^block*/id _completionHandler;
	BOOL _shouldIgnoreGlobalModalUIDisplayPolicy;
	WebUIAlert* _alert;

}

@property (nonatomic,readonly) WebUIAlert * alert;              //@synthesize alert=_alert - In the implementation block
-(long long)presentationStyle;
-(WebUIAlert *)alert;
-(void)didCompleteWithResponse:(id)arg1 ;
-(id)initWithAlert:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)newViewControllerRepresentationWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)shouldIgnoreGlobalModalUIDisplayPolicy;
@end

