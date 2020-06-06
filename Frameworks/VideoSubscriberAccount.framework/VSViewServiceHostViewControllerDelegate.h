/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:18 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VSViewServiceHostViewControllerDelegate <NSObject>
@required
-(void)presentViewServiceHostViewController:(id)arg1;
-(void)dismissViewServiceHostViewController:(id)arg1;
-(void)viewServiceHostViewController:(id)arg1 request:(id)arg2 didFinishWithResponse:(id)arg3;
-(void)viewServiceHostViewController:(id)arg1 request:(id)arg2 didFailWithError:(id)arg3;
-(void)viewServiceHostViewController:(id)arg1 didChooseAdditionalProvidersForRequest:(id)arg2;
-(void)viewServiceHostViewController:(id)arg1 didCancelRequest:(id)arg2;
-(BOOL)viewServiceHostViewController:(id)arg1 shouldAuthenticateAccountProviderWithIdentifier:(id)arg2;

@end

