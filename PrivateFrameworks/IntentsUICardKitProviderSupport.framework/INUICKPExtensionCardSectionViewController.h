/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/IntentsUICardKitProviderSupport.framework/IntentsUICardKitProviderSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IntentsUICardKitProviderSupport/INUICKPSynchronousRemoteViewController.h>
#import <libobjc.A.dylib/CRKCardSectionViewControlling.h>

@protocol CRKCardSectionViewControllingDelegate;
@class NSString;

@interface INUICKPExtensionCardSectionViewController : INUICKPSynchronousRemoteViewController <CRKCardSectionViewControlling> {

	id _touchDeliveryPolicyAssertion;
	id<CRKCardSectionViewControllingDelegate> _cardSectionViewControllingDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<CRKCardSectionViewControllingDelegate> cardSectionViewControllingDelegate;              //@synthesize cardSectionViewControllingDelegate=_cardSectionViewControllingDelegate - In the implementation block
-(void)desiresInteractivity:(/*^block*/id)arg1 ;
-(void)remoteViewControllerWillBeginEditing:(id)arg1 ;
-(void)remoteViewController:(id)arg1 requestsHandlingOfIntent:(id)arg2 ;
-(void)cardEventDidOccur:(unsigned long long)arg1 withIdentifier:(id)arg2 userInfo:(id)arg3 ;
-(void)setCardSectionViewControllingDelegate:(id<CRKCardSectionViewControllingDelegate>)arg1 ;
-(id<CRKCardSectionViewControllingDelegate>)cardSectionViewControllingDelegate;
@end

